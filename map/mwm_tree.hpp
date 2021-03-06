#pragma once

#include "routing/num_mwm_id.hpp"

#include "storage/country_info_getter.hpp"

#include "geometry/tree4d.hpp"

#include <memory>

std::unique_ptr<m4::Tree<routing::NumMwmId>> MakeNumMwmTree(routing::NumMwmIds const & numMwmIds,
                                                            storage::CountryInfoGetter const & countryInfoGetter);
