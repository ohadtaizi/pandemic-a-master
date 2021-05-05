
#pragma once

#include "City.hpp"
#include <string>
#include "Color.hpp"

using namespace std;

namespace pandemic
{
 
class Player
{

public:
 Player ();//defult
   Player( City city);
  virtual Player drive(City city); // check in the map if can drive
    virtual string role(); //
       void build();
     virtual Player take_card(City city);
   virtual Player fly_direct(City city);
       virtual    Player treat(City city);
        virtual    Player fly_charter(City city);
          virtual  Player fly_shuttle(City city);
          virtual  Player  discover_cure(Color color);

private:
        City m_city;
        
    };
}