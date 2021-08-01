//
// Created by rudri on 2/3/2021.
//

#ifndef POO2_2021_0_BOUNCE_SHAPES_COMMON_TYPES_H
#define POO2_2021_0_BOUNCE_SHAPES_COMMON_TYPES_H

#include <utility>

namespace utec {
    using length_t = float;
    using speed_t = float;
    using position_t = std::pair<length_t, length_t>;
    using dimension_t = std::pair<length_t, length_t>;
    using bound_t = std::pair<size_t, size_t>;
    using velocity_t = std::pair<speed_t, speed_t>;
}
#endif //POO2_2021_0_BOUNCE_SHAPES_COMMON_TYPES_H
