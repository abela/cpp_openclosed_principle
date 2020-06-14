//
//  ProductFilter.cpp
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#include "ProductFilter.h"
#include "Product.h"

ProductFilter::ProductFilter()
{
    
}
ProductFilter::~ProductFilter()
{
    
}

std::vector<Product*> ProductFilter::filter(std::vector<Product*> items, ProductSpecification<Product> &specification)
{
    std::vector<Product*> result;
    for(auto& product : items)
    {
        if(specification.isSatisfied(product))
            result.push_back(product);
    }
    return result;
}
