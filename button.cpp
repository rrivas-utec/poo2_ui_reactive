//
// Created by rudri on 12/15/2020.
//

#include "button.h"
#include "render.h"

void button_t::click_pressed_event(const mouse_event_params_t& e) {
    if (click) click(e);
}

void button_t::click_released_event(const mouse_event_params_t& e) {
    if (click) click(e);
}

void button_t::mouse_move_event(const mouse_event_params_t& e) {
    if (mouse_move) mouse_move(e);
}

void button_t::mouse_enter_event(const mouse_event_params_t& e) {
    sf::Cursor crs;
    if (crs.loadFromSystem(sf::Cursor::Hand))
        utec::render_t::get_instance()->get_platform_render().setMouseCursor(crs);
    color = sf::Color::Yellow;
}

void button_t::mouse_leave_event(const mouse_event_params_t& e) {
    sf::Cursor crs;
    if (crs.loadFromSystem(sf::Cursor::Arrow))
        utec::render_t::get_instance()->get_platform_render().setMouseCursor(crs);
    color = sf::Color::White;
}

void button_t::keypress_move_event(const keypress_event_params_t& e) {
    if (key_press) key_press(e);
}

void button_t::draw() {
    sf::RectangleShape shape;
    shape.setPosition(left, top);
    shape.setSize({width, height});
    shape.setFillColor(color);
    sf::Font font;
    sf::Text txt;
    auto render = utec::render_t::get_instance();
    if (font.loadFromFile("./Oxanium-Regular.ttf"))
    {
        txt.setFont(font);
        txt.setFillColor(sf::Color::Blue);
        txt.setCharacterSize(20);
        txt.setString(title);
        txt.setPosition(left , top);
        const auto bounds(txt.getLocalBounds());
        const auto box(shape.getSize());
        txt.setOrigin((bounds.width - box.x) / 2 + bounds.left, (bounds.height - box.y) / 2 + bounds.top);
    }
    render->get_platform_render().draw(shape);
    render->get_platform_render().draw(txt);
}
