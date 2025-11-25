// Classes for core part of the game  

#ifndef CORE_CLASS
#define CORE_CLASS

#include <vector>

class Block
{
    public :
        Block(unsigned int rrow=0, unsigned int ccolumn=0) : _row{rrow}, _column{ccolumn} {}
        unsigned int row() const {return _row;} 
        unsigned int& row() {return _row;}
        unsigned int column() const {return _column;} 
        unsigned int& column() {return _column;}

    private :
        unsigned int _row;
        unsigned int _column;
};

class Grid
{   
    public :
        Grid(unsigned int nrow, unsigned int ncol) 
        {
            std::vector<Block> column (ncol);
            for(unsigned int i=0; i<nrow; ++i)
            {
                matrix.push_back(column);
            }  
        } 

        Block operator()(unsigned int row, unsigned int column) const {return matrix[row][column];} 
        Block& operator()(unsigned int row, unsigned int column){return matrix[row][column];} 

    private :
        std::vector< std::vector<Block> > matrix;
};


#endif