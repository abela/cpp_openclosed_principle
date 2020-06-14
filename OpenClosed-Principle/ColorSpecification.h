//
//  ColorSpecification.hpp
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#ifndef ColorSpecification_hpp
#define ColorSpecification_hpp

#include <stdio.h>
#include "Product.h"
#include "ProductSpecification.h"


// COlorSpecification, a concrete implementation of Product Specification
class ColorSpecification : public ProductSpecification<Product>
{
private:
    Color color;
public:
    ColorSpecification(const Color c);
    Color getColor() const;
    bool isSatisfied(Product *item) override;
};

#endif /* ColorSpecification_hpp */
