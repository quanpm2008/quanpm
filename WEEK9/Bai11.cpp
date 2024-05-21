#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


string Binary_number(int n)
{
    string s = "";
    while(n > 0)
    {
        if(n%2 == 1)
        {
            s = '1' + s;
        }
        else s= '0' + s;
        n/=2;
    }
    return s;
}


int main() {
    int n; cin>>n;
    string s = Binary_number(n);
    int cnt= 0 ,max =0;

    for(int i=0; i< s.size();i++)
    {
        if(s[i] == '1')
        {
            cnt++;
        }
        else {
            cnt = 0;
        }
        if(cnt > max)
            {
                max = cnt;
            }
    }

    cout << max;
}
