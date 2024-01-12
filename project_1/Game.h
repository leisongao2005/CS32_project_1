//
//  Game.hpp
//  project_1
//
//  Created by Leison Gao on 1/11/24.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>

class City;

class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nTooters);
    ~Game();

        // Mutators
    void play();

  private:
    City* m_city;
};

#endif /* Game_hpp */
