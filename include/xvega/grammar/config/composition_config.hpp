// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_COMPOSITION_CONFIG_HPP
#define XVEGA_COMPOSITION_CONFIG_HPP

#include <optional>

#include "xproperty/xobserved.hpp"

#include "../../xvega_config.hpp"
#include "../../utils/custom_datatypes.hpp"

namespace xv
{
    struct composition_config : public xp::xobserved<composition_config>
    {
        XPROPERTY(std::optional<double>, composition_config, columns);
        XPROPERTY(std::optional<double>, composition_config, spacing);
    };

    XVEGA_API void to_json(nl::json& j, const composition_config& data);
}

#endif
