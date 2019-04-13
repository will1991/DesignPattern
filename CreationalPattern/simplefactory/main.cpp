#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "factory.hpp"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << " hello world ! " << "\n";

    Factory * factory = new Factory();

    Product*  a = factory ->CreatProduct(Factory::producta);
    SAFE_DELETE(a);
    Product*  b = factory ->CreatProduct(Factory::productb);
    SAFE_DELETE(b);
    
    return 0;
}
