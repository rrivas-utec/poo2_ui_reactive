//
// Created by rudri on 12/15/2020.
//

#ifndef POO2_UI_REACTIVEPROGRAMMING_APP_H
#define POO2_UI_REACTIVEPROGRAMMING_APP_H

#include <vector>
#include <memory>
#include "SFML/Graphics.hpp"

#include "component.h"
using namespace std;


class app_t {
    vector<shared_ptr<component_t>> components;
    int width{};
    int height{};
    string title;
public:
    app_t(int width, int height, string title):
        width{ width }, height{ height }, title{ move(title) } {}
    void run();
    void add(const shared_ptr<component_t>& c);
};

#endif //POO2_UI_REACTIVEPROGRAMMING_APP_H
