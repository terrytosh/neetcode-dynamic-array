#include <iostream>

#include "da.h"

int main() {
    DynamicArray da(1);
    std::cout << da.getSize() << std::endl;
    std::cout << da.getCapacity() << std::endl;
    da.pushback(1);
    std::cout << da.getSize() << std::endl;
    std::cout << da.getCapacity() << std::endl;
    da.pushback(2);
    std::cout << da.getSize() << std::endl;
    std::cout << da.getCapacity() << std::endl;
    std::cout << da.get(1) << std::endl;
    da.set(1, 3);
    std::cout << da.get(1) << std::endl;
    std:: cout << da.popback() << std::endl;
    std::cout << da.getSize() << std::endl;
    std::cout << da.getCapacity() << std::endl;
    return 0;
}