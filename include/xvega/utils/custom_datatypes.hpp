// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_DATA_TYPES_HPP
#define XVEGA_DATA_TYPES_HPP

#include <optional>
#include <variant>

#include "xproperty/xobserved.hpp"

#include "nlohmann/json.hpp"

#include "../xvega_config.hpp"

namespace nl = nlohmann;

namespace xv
{
    using df_type = std::map<std::string, std::vector<std::variant<double, int, std::string, std::nullptr_t>>>;

    struct data_frame : public xp::xobserved<data_frame>
    {
        XPROPERTY(std::optional<df_type>, data_frame, values);
    };

    XVEGA_API void to_json(nl::json& j, const data_frame& data);

    // using string_none_type = std::variant<std::nullptr_t, std::string>;
    using string_none_type = nl::json;
    // using bool_none_type = std::variant<std::nullptr_t, bool>;
    using bool_none_type = nl::json;
    // using string_num_type = std::variant<double, int, std::string>;
    using string_num_type = nl::json;
    // using bool_object_type = std::variant<bool, nl::json>;
    using bool_object_type = nl::json;
    // using bool_string_object_type = std::variant<bool, nl::json, std::string>;
    using bool_string_object_type = nl::json;
    // using any_type = std::variant<std::string, bool, double, int, std::nullptr_t>;
    using any_type = nl::json;
    // using bool_num_type = std::variant<double, int, bool>;
    using bool_num_type = nl::json;
    // using bool_string_type = std::variant<std::string, bool>;
    using bool_string_type = nl::json;
    // using string_vec_none_type = std::variant<std::vector<std::string>, std::nullptr_t>;
    using string_vec_none_type = nl::json;
    // using num_object_type = std::variant<double, int, nl::json>;
    using num_object_type = nl::json;
    // using any_vector_type = std::vector<std::variant<std::string, double, int, bool, std::nullptr_t>>;
    using any_vector_type = nl::json;
    // using string_object_type = std::variant<nl::json, std::string>;
    using string_object_type = nl::json;
    // using any_array_type = std::variant<
    //                             std::vector<std::string>, 
    //                             std::vector<double>, 
    //                             std::vector<int>, 
    //                             std::vector<bool>, 
    //                             std::vector<DateTime>
    //                             >;
    using any_array_type = nl::json;
    // using num_none_type = std::variant<std::nullptr_t, double, int>;
    using num_none_type = nl::json;


    struct GradientStop : public xp::xobserved<GradientStop>
    {
        XPROPERTY(std::optional<std::string>, GradientStop, color);
        XPROPERTY(std::optional<double>, GradientStop, offset);
    };

    XVEGA_API void to_json(nl::json& j, const GradientStop& data);

    struct LinearGradient : public xp::xobserved<LinearGradient>
    {
        XPROPERTY(std::string, LinearGradient, gradient, "linear");
        XPROPERTY(std::optional<double>, LinearGradient, x1);
        XPROPERTY(std::optional<double>, LinearGradient, x2);
        XPROPERTY(std::optional<double>, LinearGradient, y1);
        XPROPERTY(std::optional<double>, LinearGradient, y2);
        XPROPERTY(std::vector<GradientStop>, LinearGradient, stops);
    };

    XVEGA_API void to_json(nl::json& j, const LinearGradient& data);

    struct RadialGradient : public xp::xobserved<RadialGradient>
    {
        XPROPERTY(std::string, RadialGradient, gradient, "radial");
        XPROPERTY(std::optional<double>, RadialGradient, x1);
        XPROPERTY(std::optional<double>, RadialGradient, x2);
        XPROPERTY(std::optional<double>, RadialGradient, y1);
        XPROPERTY(std::optional<double>, RadialGradient, y2);
        XPROPERTY(std::optional<double>, RadialGradient, r1);
        XPROPERTY(std::optional<double>, RadialGradient, r2);
        XPROPERTY(std::vector<GradientStop>, RadialGradient, stops);
    };

    XVEGA_API void to_json(nl::json& j, const RadialGradient& data);

    struct TooltipContent : public xp::xobserved<TooltipContent>
    {
        XPROPERTY(std::optional<std::string>, TooltipContent, content);
    };

    XVEGA_API void to_json(nl::json& j, const TooltipContent& data);

    using tooltip_type = std::variant<std::string, bool, double, int, std::nullptr_t, TooltipContent>;
    using color_type = std::variant<std::string, LinearGradient, RadialGradient>;
    using color_none_type = std::variant<std::string, LinearGradient, RadialGradient, std::nullptr_t>;
}

#endif
