//
//  ProductFilter.hpp
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#ifndef ProductFilter_h
#define ProductFilter_h

#include <stdio.h>
#include <vector>
#include "ProductSpecification.h"


class Product;

// abstract class Filter
// having parameters of items and specification.
template <typename T>
class Filter {
public:
    virtual std::vector<T*> filter(std::vector<T*> items, ProductSpecification<T> &specification) = 0;
};

// let's have some product filters bases on abstract class Filter
class ProductFilter : Filter<Product>
{
    typedef std::vector<Product*> Items;
public:
    ProductFilter();
    ~ProductFilter();
    
    std::vector<Product*> filter(std::vector<Product*>, ProductSpecification<Product> &specification) override;
};

#endif /* ProductFilter_hpp */
