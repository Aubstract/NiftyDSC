from datetime import datetime

curr_date = datetime.now().strftime(f"%m/%d/%y %H:%M:%S")

catalog_names = ""
catalog_list_src_text = """// Created by Python Script on {curr_date}

#ifndef NIFTYDSC_CATALOG_LIST_HPP
#define NIFTYDSC_CATALOG_LIST_HPP

#include "PackedRaDec.hpp"
{include_src_files}
#include <vector>

std::vector<Catalog> catalog_list({catalog_names});

#endif  // NIFTYDSC_CATALOG_LIST_HPP"""