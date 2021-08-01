//
// Created by rudri on 12/15/2020.
//

#ifndef POO2_UI_REACTIVE_BUTTON_H
#define POO2_UI_REACTIVE_BUTTON_H

#include <utility>
#include "component.h"

class button_t: public component_t {
    string title;
    sf::Color color = sf::Color::White;
    void click_pressed_event(const mouse_event_params_t& e) override;
    void click_released_event(const mouse_event_params_t& e) override;
    void mouse_move_event(const mouse_event_params_t& e) override;
    void mouse_enter_event(const mouse_event_params_t& e) override;
    void mouse_leave_event(const mouse_event_params_t& e) override;
    void keypress_move_event(const keypress_event_params_t& e) override;
    void draw() override;
public:
//    button_t(string title, float left, float top, float width, float height):
//    title{std::move(title)}, component_t(left, top, width, height) {}
    button_t(string&& title, float&& left, float&& top, float&& width, float&& height):
    title{title}, component_t(left, top, width, height) {}
    virtual void on_click(const event_params_t& e) {}
    virtual void on_mouse_move(const mouse_event_params_t& e) {}
};

#endif //POO2_UI_REACTIVE_BUTTON_H
