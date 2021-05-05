#include "map"
#include "City.hpp"
#pragma once
#include "Player.hpp"
#include <iostream>

using namespace std;
namespace pandemic {
class Board
 {
     
private:

 map<City,int> borad;

public:
   
int& operator[](City c);
// {

//    return borad[c];
// }
   
 
friend ostream& operator<< (ostream& os, const Board& B ) ;
bool is_clean();//bool
   void operator=(int dis);







};
}