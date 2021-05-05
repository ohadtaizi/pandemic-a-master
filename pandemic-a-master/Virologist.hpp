#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
namespace pandemic
{
    
    class Virologist :public Player
    {
 public:
            Virologist(Board& board, City city);
    };
}