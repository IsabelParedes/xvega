// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_TOPO_DATA_FORMAT_HPP
#define XVEGA_TOPO_DATA_FORMAT_HPP

#include <optional>

#include "../data_format.hpp"

namespace xv
{
    struct topo_data_format : public data_format<topo_data_format>
    {
        XPROPERTY(std::optional<std::string>, topo_data_format, feature);
        XPROPERTY(std::optional<std::string>, topo_data_format, mesh);

        topo_data_format();
    };

    XVEGA_API void to_json(nl::json&, const topo_data_format&);
}

#endif
