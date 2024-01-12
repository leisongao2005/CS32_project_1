//
//  City.hpp
//  project_1
//
//  Created by Leison Gao on 1/11/24.
//

#ifndef City_hpp
#define City_hpp

#include <stdio.h>
#include "globals.h"
#include "History.h"

class Player;
class Tooter;

class City
{
  public:
        // Constructor/destructor
    City(int nRows, int nCols);
    ~City();

        // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    bool    isPlayerAt(int r, int c) const;
    int     tooterCount() const;
    int     nTootersAt(int r, int c) const;
    bool    determineNewPosition(int& r, int& c, int dir) const;
    void    display() const;

        // Mutators
    bool addTooter(int r, int c);
    bool addPlayer(int r, int c);
    void preachToTootersAroundPlayer();
    void moveTooters();
    History& history();

  private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Tooter* m_tooters[MAXTOOTERS];
    int     m_nTooters;
    History m_history;
      // Helper functions
    bool isInBounds(int r, int c) const;
};

#endif /* City_hpp */
