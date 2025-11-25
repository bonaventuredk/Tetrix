#include "core_class.h"
#include <iostream>

int main()
{
    Block b{1,2};
    std::cout << b.row() << " + " << b.column();
    return 0;
}