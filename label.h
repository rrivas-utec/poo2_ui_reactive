//
// Created by rudri on 12/16/2020.
//

#ifndef POO2_UI_REACTIVE_LABEL_H
#define POO2_UI_REACTIVE_LABEL_H

#include "component.h"

class label_t: public component_t {
    string text;
    sf::Color color = sf::Color::White;
    void draw() override;
public:
    label_t(string text, float left, float top, float width, float height):
    text{std::move(text)}, component_t(left, top, width, height) {}
    void set_text(const string& value);
};


#endif //POO2_UI_REACTIVE_LABEL_H
