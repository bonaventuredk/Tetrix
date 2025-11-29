
#include <iostream>
#include <vector>
#include <string>

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
        default :
        ;
    }
    return;
}

std::vector<unsigned int> Grid::get_full_rows() const 
{
    std::vector<unsigned int> full_rows;
    bool check;
    for(unsigned int row=0; row<(*this).row_size(); ++row)
    {   
        check=true;
        for(unsigned int column=0; column<(*this).column_size(); ++column)
        {
            if(!(*this)(row,column).is_full())
            {
                check=false;
                break;
            }
        }
        if(check)full_rows.push_back(row);
    }
    return full_rows;
}

void Grid::clear_full_rows()
{
    std::vector<unsigned int> full_rows= (*this).get_full_rows();
    for(unsigned int row : full_rows)
    {
        for(unsigned int column=0; column<(*this).column_size(); ++column)
        {
            (*this)(row, column).is_full()=false;
        }
    }
    return;
}

std::ostream& operator<<(std::ostream o, Grid board)
{
    std::string print_board;
    for(unsigned int row=0; row<board.row_size(); ++row)
    {
        for(unsigned int column=0; column<board.column_size(); ++column)
        {
            if(board(row, column).is_full()) print_board+='O';
            else print_board+='.';
        }
        print_board+='\n';
    }
    o << print_board;
    return o;
}