#include "FieldDoctor.hpp"
#include "Dispatcher.hpp"
#include "GeneSplicer.hpp"
#include "Virologist.hpp"
#include "Scientist.hpp"
#include "OperationsExpert.hpp"
#include "Medic.hpp"
#include "Researcher.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "doctest.h"
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace pandemic;



TEST_CASE("role") {

      Player player;
      CHECK(player.role() == " ");
     CHECK(player.role() == "man1 ");
    CHECK(player.role() == " man2");
    CHECK(player.role() == " man3");
    CHECK(player.role() == " man5");
    CHECK(player.role() == " man6");
    CHECK(player.role() == " man7");
    CHECK(player.role() == " man8");
   CHECK(player.role() == " man9");
    CHECK(player.role() == " man10");
}
TEST_CASE("Board") {
      Board b;
    CHECK(b.is_clean() == true);
     b[City::Kinshasa] = 3;
      b[City::MexicoCity] = 3; 
        b[City::MexicoCity] = 3; 
         b[City::Istanbul] = 2;
           b[City::Cairo] = 1;
           b[City::Tehran] = 1;
             b[City::Lima] = 1;
             b[City::HongKong] = 3;
              b[City::London] = 2; 
     CHECK(b.is_clean() == false);
  
}
TEST_CASE("Dispatcher") {
  Board b;

Dispatcher d {b, City::London};
   d.treat(City::London);
     CHECK(d.role() == "Dispatcher");

Dispatcher o {b, City::MexicoCity};
   o.treat(City::MexicoCity);
        CHECK(o.role() == "Dispatcher");

        CHECK(b.is_clean() == true);

}

TEST_CASE("Medic") {
  Board b;

Medic o {b, City::Bogota};
     o.treat(City::Bogota);
  CHECK(o.role() == "Medic");

Medic t {b, City::Lima};
     t.treat(City::Lima);
     CHECK(b.is_clean() == true);
      CHECK(t.role() == "Medic");
}

TEST_CASE("Researcher") {
  Board b;

Researcher s {b, City::Bogota};
     s.treat(City::Bogota);
        CHECK(s.role() == "Researcher");
Researcher o {b, City::Lima};
     o.treat(City::Lima);
     CHECK_THROWS(o.treat(City::Tehran));
   CHECK_THROWS(s.treat(City::Tehran));
     CHECK(b.is_clean() == true);
     CHECK(o.role() == "Researcher");
}
TEST_CASE(" Virologist"){

    Board b;
 
    Virologist t{b, City::Tehran};
            t.take_card (City::Tehran);

    CHECK_THROWS(t.treat(City::Tehran));
    CHECK_THROWS(t.treat(City::Tehran));
         CHECK(b.is_clean() == true);

}



