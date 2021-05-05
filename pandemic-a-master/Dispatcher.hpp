#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
namespace pandemic
{

    class Dispatcher :public Player
    {
 public:
            Dispatcher(Board& borad, City city);
    };
}