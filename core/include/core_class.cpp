
#include <vector>

#include "core_class.h"

void move_block(Block block, Input input);
{   
    case Input::down :
        (*this)(row-1,column)=(*this)(row,column);
        (*this)(row,column)=nullptr;

    case Input::left :
        (*this)(row,column-1)=(*this)(row,column);
        (*this)(row,column)=nullptr;
            

    case Input::right :
        (*this)(row,column+1)=(*this)(row,column);
        (*this)(row,column)=nullptr;

    default :
            ;
}

bool is_movable(Piece piece, Input input)
{   
    check=false;
    return check;
}

void move_piece(Piece piece, Input input) 
{   
    if is_movable(piece, input)
    {
        for(unsigned int block=0; block<piece.size(); ++i)
        {
            move_block(piece[block]);
        }
    }
}

//direct_rotate
            //idnirect_rotate
