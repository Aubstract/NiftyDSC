# TODO: Figure out why some catalogs (SH2-2, LBN) return bad/incomplete coords
# TODO: Figure out why I can't seem to query for the NGC catalog

import argparse
from astroquery.simbad import Simbad
import re
import toml


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--catalog", nargs="+", type=str, action="store", dest="catalog",
                        help="The name of the catalog you want to query")
    parser.add_argument("--moniker", nargs="+", type=str, action="store", dest="moniker",
                        help="The moniker for the catalog you want to query e.g. 'M', 'NGC', 'SH2'. The moniker can "
                             "only be 3 characters long")
    args = parser.parse_args()

    simbad = Simbad()
    # simbad.clear_cache()

    for catalog, moniker in zip(args.catalog, args.moniker):
        moniker = moniker[:3]

        print(f"Trying to retrieve {catalog} catalog")

        simbad.reset_votable_fields()
        simbad.add_votable_fields(f"id({catalog})")

        try:
            query_result = simbad.query_catalog(catalog)
            print()
            print(query_result)
            print()
        except:
            print(f"Failed query of the {catalog} catalog, continuing to next catalog")
            break

        print(f"Successfully retrieved {catalog} catalog, writing {catalog}.toml")

        toml_data = {"catalog": {"moniker": f"{moniker}"}}

        for i in range(len(query_result["RA"])):
            object_ra = round_decimal(query_result["RA"][i])
            object_dec = round_decimal(query_result["DEC"][i])
            object_number = i+1
            toml_data["catalog"][f"{object_number}"] = {"ra": str(object_ra),
                                                        "dec": str(object_dec)}

        with open(f"{moniker}.toml", "w") as f:
            toml.dump(toml_data, f)


def round_decimal(coord: str) -> str:
    pattern = r'\d+(\.\d+)?$'
    match = re.search(pattern, coord)
    if match:
        rounded_number = str(round(float(match.group(0))))
        rounded_coord = coord[:match.start()] + rounded_number + coord[match.end():]
        return rounded_coord
    else:
        return coord


def sanitize_catalog_name(catalog: str) -> str:
    return catalog.replace('-', '_').upper()


if __name__ == "__main__":
    main()
