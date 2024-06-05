// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_BIND_RADIO_SELECT_HPP
#define XVEGA_BIND_RADIO_SELECT_HPP

#include <optional>

#include "xproperty/xobserved.hpp"

#include "nlohmann/json.hpp"

#include "../../../xvega_config.hpp"
#include "../../../utils/custom_datatypes.hpp"

namespace nl = nlohmann;

namespace xv
{
    struct bind_radio_select : public xp::xobserved<bind_radio_select>
    {
        // Bind Radio Select Properties
        XPROPERTY(std::optional<std::string>, bind_radio_select, input);
        XPROPERTY(std::optional<any_vector_type>, bind_radio_select, options);
        XPROPERTY(std::optional<double>, bind_radio_select, debounce);
        XPROPERTY(std::optional<std::string>, bind_radio_select, element);
        XPROPERTY(std::optional<std::vector<std::string>>, bind_radio_select, labels);
        XPROPERTY(std::optional<std::string>, bind_radio_select, name);
        XPROPERTY(std::optional<std::string>, bind_radio_select, type);
    };

    XVEGA_API void to_json(nl::json& j, const bind_radio_select& data);
}

#endif
