//
//  History.hpp
//  project_1
//
//  Created by Leison Gao on 1/11/24.
//

#ifndef History_hpp
#define History_hpp

#include <stdio.h>
#include "globals.h"

class History
{
    public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
    private:
        int m_rows;
        int m_cols;
        char m_arr[MAXROWS][MAXCOLS];
    
        bool isInBounds(int r, int c) const;
};

#endif /* History_hpp */
