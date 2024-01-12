//
//  History.cpp
//  project_1
//
//  Created by Leison Gao on 1/11/24.
//
#include <iostream>
#include "History.h"
#include "globals.h"

using namespace std;

History::History(int nRows, int nCols): m_rows(nRows), m_cols(nCols){
    for (int i = 0; i < nRows; i ++) {
        for (int j = 0; j < nCols; j ++) {
            m_arr[i][j] = '.';
        }
    }
}

bool History::isInBounds(int r, int c) const
{
    return (r >= 1  &&  r <= m_rows  &&  c >= 1  &&  c <= m_cols);
}

bool History::record(int r, int c) {
    if(isInBounds(r, c)) {
        char ch = m_arr[r - 1][c - 1];
        switch (ch) {
            case '.':
                m_arr[r - 1][c - 1] = 'A';
                break;
            case 'Z':
                break;
            default:
                m_arr[r - 1][c - 1] ++;
                break;
        }
    }
    else
        return false;
    return true;
}


void History::display() const {
    clearScreen();
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
            cout << m_arr[r][c];
        cout << endl;
    }
    cout << endl;
}
