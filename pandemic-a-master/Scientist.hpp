#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
namespace pandemic
{
    
    class Scientist :public Player
    {
   public:
          Scientist(Board& board, City city, int cards);   
          
           };
}