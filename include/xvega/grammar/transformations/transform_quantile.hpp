// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_TRANSFORM_QUANTILE_HPP
#define XVEGA_TRANSFORM_QUANTILE_HPP

#include <optional>

#include <xproperty/xobserved.hpp>

#include <nlohmann/json.hpp>

#include "../../xvega_config.hpp"
#include "../transformations.hpp"

namespace nl = nlohmann;

namespace xv
{
    struct transform_quantile : public transformation<transform_quantile>
    {
        XPROPERTY(std::optional<std::string>, transform_quantile, quantile);
        XPROPERTY(std::optional<std::vector<std::string>>, transform_quantile, groupby);
        XPROPERTY(std::optional<std::vector<double>>, transform_quantile, probs);
        XPROPERTY(std::optional<double>, transform_quantile, step);
        XPROPERTY(std::optional<std::vector<std::string>>, transform_quantile, as);
    };

    XVEGA_API void to_json(nl::json& j, const transform_quantile& data);
}

#endif
