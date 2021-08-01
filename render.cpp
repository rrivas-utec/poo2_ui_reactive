//
// Created by rudri on 2/3/2021.
//

#include "render.h"
using namespace utec;

render_t* render_t::instance = nullptr;

render_t::render_t(const bound_t &bound, const std::string &title):
        platform_render {get_render_size(bound), title} {
}

bound_t render_t::get_limit() {
    auto& canvas = get_instance()->platform_render;
    return {canvas.getSize().x, canvas.getSize().y};
}

render_t *render_t::get_instance(const bound_t &bound, const std::string &title) {
    if (!instance) instance = new render_t(bound, title);
    return instance;
}

void render_t::draw_rectangle(position_t p, dimension_t d, color_t c) {
    sf::RectangleShape s;
    s.setSize({d.first, d.second});
    s.setFillColor(c);
    s.setPosition(p.first, p.second);
    auto& canvas = get_instance()->platform_render;
    canvas.draw(s);
}

void render_t::draw_ellipse(position_t p, dimension_t d, color_t c) {
    sf::CircleShape s;
    s.setRadius(1);
    s.setFillColor(c);
    s.setScale({d.first/2.0f, d.second/2.0f});
    s.setPosition(p.first, p.second);
    auto& canvas = get_instance()->platform_render;
    canvas.draw(s);
}

platform_render_t &render_t::get_platform_render() {
    return platform_render;
}

