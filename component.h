//
// Created by rudri on 12/15/2020.
//

#ifndef POO2_UI_REACTIVE_COMPONENT_H
#define POO2_UI_REACTIVE_COMPONENT_H

#include <functional>
#include "SFML/Graphics.hpp"

using namespace std;

struct event_params_t {
};

struct mouse_event_params_t: event_params_t {
    float x {};
    float y {};
    mouse_event_params_t() = default;
    mouse_event_params_t(float x, float y): x{x}, y{y} {}
};

struct keypress_event_params_t: public event_params_t {
    char key_char {};
    keypress_event_params_t() = default;
    keypress_event_params_t(char key_char): key_char{key_char} {}
};

class component_t {
protected:
    float left = 0;
    float top = 0;
    float width = 0;
    float height = 0;
    virtual void click_pressed_event(const mouse_event_params_t& e) {}
    virtual void click_released_event(const mouse_event_params_t& e) {}
    virtual void mouse_move_event(const mouse_event_params_t& e) {}
    virtual void mouse_enter_event(const mouse_event_params_t& e) {}
    virtual void mouse_leave_event(const mouse_event_params_t& e) {}
    virtual void keypress_move_event(const keypress_event_params_t& e) {}
    virtual void draw() = 0;
    friend class app_t;
    bool is_on_bound(float x, float y) const;
public:
    component_t(float left, float top, float width, float height):
        left{left}, top{top}, width{width}, height{height} {}

    virtual ~component_t() = default;
    function<void(const mouse_event_params_t&)> click;
    function<void(const mouse_event_params_t&)> mouse_move;
    function<void(const keypress_event_params_t&)> key_press;
};

#endif //POO2_UI_REACTIVE_COMPONENT_H
