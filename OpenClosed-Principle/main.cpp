//
//  main.cpp
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#include <iostream>
#include "Product.h"
#include "ProductFilter.h"
#include "ColorSpecification.h"

void printProducts(const std::vector<Product*> &products)
{
    for(auto& product : products)
    {
        std::cout<<product->getName()<<std::endl;
    }
}

int main(int argc, const char * argv[]) {
    
    // let's have some test products and filter them by their color specification
    Product Car {"Mitsubishi", Color::Black, Size::Large};
    Product Fruit {"Apple", Color::Yellow, Size::Small};
    Product Fruit2 {"Apple2", Color::Red, Size::Small};
    Product Fruit3 {"Apple3", Color::Red, Size::Small};
    Product House {"House", Color::White, Size::Large};
    Product Tree {"Tree", Color::Green, Size::Medium};
    Product Tree2 {"Tree2", Color::Green, Size::Medium};
    
    std::vector<Product*> allProduct {&Car,&Fruit,&Fruit2,&Fruit3,&House,&Tree,&Tree2};
    
    ProductFilter filter;
    ColorSpecification red(Color::Red);
    ColorSpecification green(Color::Green);
    
    auto redThings = filter.filter(allProduct, red);
    
    std::cout<<"all red things:"<<std::endl;
    printProducts(redThings);
    
    auto greenThings = filter.filter(allProduct, green);
    
    std::cout<<"all green things:"<<std::endl;
    printProducts(greenThings);
    
    
    return 0;
}
