// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_LEGEND_STREAM_BINDING_HPP
#define XVEGA_LEGEND_STREAM_BINDING_HPP

#include <optional>
#include <variant>

#include <xproperty/xobserved.hpp>
#include <nlohmann/json.hpp>

#include "../../../xvega_config.hpp"
#include "../streams/event_stream.hpp"
#include "../streams/derived_stream.hpp"
#include "../streams/merged_stream.hpp"

namespace nl = nlohmann;

namespace xv
{
    using stream_legend_type = std::variant<std::string, event_stream, derived_stream, merged_stream>;

    struct legend_stream_binding : public xp::xobserved<legend_stream_binding>
    {
        // Legend Stream Binding Properties
        XPROPERTY(std::optional<stream_legend_type>, legend_stream_binding, legend);
    };

    XVEGA_API void to_json(nl::json& j, const legend_stream_binding& data);
}

#endif
