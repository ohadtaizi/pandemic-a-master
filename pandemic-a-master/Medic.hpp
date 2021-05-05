#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
namespace pandemic
{
    
    class Medic :public Player
    {
 public:
            Medic(Board& b, City c);
  
    };
}