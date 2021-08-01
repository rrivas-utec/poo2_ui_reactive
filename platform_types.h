//
// Created by rudri on 2/3/2021.
//

#ifndef POO2_2021_0_BOUNCE_SHAPES_PLATFORM_TYPES_H
#define POO2_2021_0_BOUNCE_SHAPES_PLATFORM_TYPES_H

#include <SFML/Graphics.hpp>

namespace utec {
    // platform depended
    using color_t = sf::Color;
    // platform depended
    using platform_render_t = sf::RenderWindow;
    auto get_render_size = [](const bound_t &bound) {
        auto& [width, length] = bound;
        return sf::VideoMode(static_cast<int>(width), static_cast<int>(length));
    };
}

#endif //POO2_2021_0_BOUNCE_SHAPES_PLATFORM_TYPES_H
