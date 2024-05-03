// Created by Aubrey on 4/22/2024

#ifndef NIFTYDSC_CATALOG_HPP
#define NIFTYDSC_CATALOG_HPP

#include "PackedRaDec.hpp"
#include <cassert>
#include <vector>
#include <string>

struct Catalog
{
    std::string              name;
    std::vector<PackedRaDec> objects;
};

#endif  // NIFTYDSC_CATALOG_HPP