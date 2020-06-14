//
//  Product.hpp
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#ifndef Product_h
#define Product_h

#include <stdio.h>
#include <iostream>

enum Color {Green, Red, Yellow, White, Black};
enum Size {Small, Medium, Large};

class Product {
public:
    Product(std::string n, Color c, Size s);
    ~Product();
    
    std::string getName() const;
    Color getColor() const;
    Size getSize() const;
    
private:
    std::string name;
    Color color;
    Size size;
};

#endif /* Product_hpp */
