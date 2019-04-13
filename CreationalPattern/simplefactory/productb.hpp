#ifndef PRODUCTB_HPP
#define PRODUCTB_HPP

#include "product.hpp"

class ProductB: public Product
{
private:
    /* data */
public:
    ProductB(/* args */);
    ~ProductB();
};

ProductB::ProductB(/* args */)
{
 std::cout << "productb" << "\n";
}

ProductB::~ProductB()
{
}


#endif