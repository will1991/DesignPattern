#ifndef FACTORY_HPP
#define FACTORY_HPP
#include "producta.hpp"
#include "productb.hpp"
#include "string"
#include "map"

class Factory
{
  private:
    /* data */
  public:
    Factory(/* args */);
    ~Factory();

    enum ProductType
    {
        producta,
        productb
    };
    Product *CreatProduct(ProductType t);
};

Product *Factory::CreatProduct(ProductType t)
{
    Product *product = NULL;
    switch (t)
    {
    case ProductType::producta:
        product = new ProductA();
        break;
    case ProductType::productb:
        product = new ProductB();
        break;

    default:

        break;
    }
    return product;
}

Factory::Factory(/* args */)
{
    std::cout << "new factory: " << "\n" ;
}

Factory::~Factory()
{
}

#endif