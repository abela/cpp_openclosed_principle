//
//  Product.cpp
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#include "Product.h"

Product::Product(std::string n, Color c, Size s) : name(n) , color(c) , size(s)
{
}
Product::~Product(){}

std::string Product::getName() const
{
    return name;
}
Color Product::getColor() const
{
    return color;
}
Size Product::getSize() const
{
    return size;
}
