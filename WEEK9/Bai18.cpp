#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int fine;
    int d1, m1, y1;
    cin>>d1>>m1>>y1;
    int d2, m2,y2;
    cin>>d2>>m2>>y2;

    if(y1 <= y2)
    {
        if(y1 < y2)
        {
            fine = 0;
        }
        else if(m1 <= m2)
        {
            if(m1 < m2)
            {
                fine = 0;
            }
            else if(d1 <= d2)
            {
                fine = 0;
            }
            else fine = (d1 - d2)*15;
        }
        else fine = (m1 - m2)*500;


    }
    else fine = 10000;


    cout<<fine;

}
