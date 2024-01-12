//
//  Tooter.hpp
//  project_1
//
//  Created by Leison Gao on 1/11/24.
//

#ifndef Tooter_h
#define Tooter_h

#include <stdio.h>

class City;

class Tooter
{
  public:
        // Constructor
    Tooter(City* cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif /* Tooter_hpp */
