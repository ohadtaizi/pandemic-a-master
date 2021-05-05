
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
namespace pandemic
{
    
    class GeneSplicer :public Player
    {
        public:
            GeneSplicer(Board& board, City c);

    };
}