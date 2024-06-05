// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_ENCODING_OPTIONS_REPEATREF_HPP
#define XVEGA_ENCODING_OPTIONS_REPEATREF_HPP

#include <optional>

#include <xproperty/xobserved.hpp>

#include <nlohmann/json.hpp>

#include "../../../xvega_config.hpp"

namespace nl = nlohmann;

namespace xv
{
    struct RepeatRef : public xp::xobserved<RepeatRef>
    {
        XPROPERTY(std::optional<std::string>, RepeatRef, repeat);
    };

    XVEGA_API void to_json(nl::json& j, const RepeatRef& data);
}

#endif
