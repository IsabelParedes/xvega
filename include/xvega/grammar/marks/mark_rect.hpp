// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_MARK_RECT_HPP
#define XVEGA_MARK_RECT_HPP

#include <optional>

#include "../marks.hpp"

namespace xv
{
    struct mark_rect : public mark<mark_rect>
    {
        // Rect Mark Properties
        XPROPERTY(std::optional<std::string>, mark_rect, align);
        XPROPERTY(std::optional<std::string>, mark_rect, baseline);
        XPROPERTY(std::optional<double>, mark_rect, cornerRadius);

        XVEGA_API mark_rect();
    };

    XVEGA_API void to_json(nl::json&, const mark_rect&);
}

#endif
