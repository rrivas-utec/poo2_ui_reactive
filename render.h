//
// Created by rudri on 2/3/2021.
//

#ifndef POO2_2021_0_BOUNCE_SHAPES_RENDER_H
#define POO2_2021_0_BOUNCE_SHAPES_RENDER_H

#include <string>
#include "common_types.h"
#include "platform_types.h"

namespace utec {
    class render_t {
        platform_render_t platform_render;
        static render_t* instance;
        render_t (const bound_t &bound, const std::string &title);
        ~render_t () = default;
    public:
        static render_t* get_instance(const bound_t &bound = {600, 400},
                                      const std::string &title = "Title");
        static void draw_rectangle(position_t p, dimension_t d, color_t c);
        static void draw_ellipse(position_t p, dimension_t d, color_t c);
        static bound_t get_limit();
        platform_render_t& get_platform_render();
    };

}


#endif //POO2_2021_0_BOUNCE_SHAPES_RENDER_H
