//
// Created by rudri on 12/15/2020.
//

#include "component.h"
bool component_t::is_on_bound(float x, float y) const {
    return ((x > left && x < left + width) && (y > top && y < top + height));
}