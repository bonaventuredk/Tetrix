
#include <vector>

#include "core_class.h"

void Block::move(Move direction)
{   
    switch(direction)
    {
        case Move::up :
            ++_column;
        case Move::down :
            --_column;

        case Move::right :
            ++_row;
                
        case Move::left:
            --_row;
    }
}

