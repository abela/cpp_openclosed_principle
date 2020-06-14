//
//  ColorSpecification.cpp
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#include "ColorSpecification.h"

ColorSpecification::ColorSpecification(const Color c) : color(c){}
Color ColorSpecification::getColor() const
{
    return color;
}
bool ColorSpecification::isSatisfied(Product *item)
{
    return item->getColor() == color;
}
