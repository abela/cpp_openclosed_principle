//
//  ProductSpecification.h
//  OpenClosed-Principle
//
//  Created by Abelix on 6/14/20.
//  Copyright © 2020 com.Abelix. All rights reserved.
//

#ifndef ProductSpecification_h
#define ProductSpecification_h

// product specification class which specifies products with some condition
// this condition can be extended in concrete classes
template <typename T>
class ProductSpecification
{
public:
    virtual bool isSatisfied(T* item) = 0;
};



#endif /* ProductSpecification_h */
