// Created by rudri on 12/16/2020.
//
//

#ifndef POO2_UI_REACTIVE_MY_APP_H
#define POO2_UI_REACTIVE_MY_APP_H

#include "app.h"
#include "button.h"
#include "label.h"
using namespace  std::literals::string_literals;

class my_app: public app_t {
    shared_ptr<button_t> button_1;
    shared_ptr<button_t> button_2;
    shared_ptr<label_t> label_1;
public:

    my_app(int width, int height, const string &title) : app_t(width, height, title) {
        // Creating Components
        button_1 = make_shared<button_t>("Boton 1"s, 100.0f, 100.0f, 100.0f, 40.0f);
        button_2 = make_shared<button_t>("Boton 2"s, 100.0f, 160.0f, 100.0f, 40.0f);
        label_1  = make_shared<label_t>("Texto"s, 100.0f, 220.0f, 100.0f, 40.0f);
        // Assigning events
        button_1->click = [this](mouse_event_params_t e) { on_click_button_1(e); };
        button_2->click = [this](mouse_event_params_t e) { on_click_button_2(e); };
        // Add buttons
        add(button_1);
        add(button_2);
        add(label_1);
    }

    void on_click_button_1(mouse_event_params_t e) {
        label_1->set_text("Button 1");
    }

    void on_click_button_2(mouse_event_params_t e) {
        label_1->set_text("Button 2");
    }
};


#endif //POO2_UI_REACTIVE_MY_APP_H
