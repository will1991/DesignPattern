#ifndef PRODUCTA_HPP
#define PRODUCTA_HPP
#include "product.hpp"


class ProductA: public Product
{
private:
    /* data */
public:
    ProductA(/* args */);
    ~ProductA();
};

ProductA::ProductA(/* args */)
{
    std::cout << "producta" << "\n";
}

ProductA::~ProductA()
{
}

#endif