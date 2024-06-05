// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_AREA_CONFIG_HPP
#define XVEGA_AREA_CONFIG_HPP

#include <variant>

#include "./base_config.hpp"
#include "./overlay_mark_def.hpp"

namespace xv
{
    using bool_overlay_mark_def_type = std::variant<bool, overlay_mark_def>;
    using bool_overlay_mark_def_string_type = std::variant<bool, overlay_mark_def, std::string>;

    struct area_config : public base_config<area_config>
    {
        XPROPERTY(std::optional<bool_overlay_mark_def_type>, area_config, line);
        XPROPERTY(std::optional<bool_overlay_mark_def_string_type>, area_config, point);
    };

    XVEGA_API void to_json(nl::json&, const area_config&);
}

#endif
