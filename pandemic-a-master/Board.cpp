
#include "Board.hpp"
#include <stdexcept>
#include "City.hpp"
#include <iostream>
using namespace std;
#include <map>

namespace pandemic{
     int& Board::operator[](City c)
    {
        return borad[c];
    } 
    bool Board::is_clean(){
        return true;
    }
   void Board::operator=(int d)
{
        return;
}
    ostream& operator<< (ostream& os, const Board& a) {
        return os;
    }
}