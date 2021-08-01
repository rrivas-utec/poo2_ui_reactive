//
// Created by rudri on 12/16/2020.
//

#include "label.h"
#include "render.h"

void label_t::draw() {
    sf::Font font;
    sf::Text txt;
    if (font.loadFromFile("./Oxanium-Regular.ttf"))
    {
        txt.setFont(font);
        txt.setFillColor(sf::Color::Yellow);
        txt.setCharacterSize(20);
        txt.setString(this->text);
        txt.setPosition(left , top);
        const auto bounds(txt.getLocalBounds());
    }
    utec::render_t::get_instance()->get_platform_render().draw(txt);
}

void label_t::set_text(const string &value) {
    text = value;
}
