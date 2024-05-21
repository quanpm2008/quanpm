#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int tc; cin>>tc;
    string name;
    int phone;
    map <string , int> mp;

    for(int i=0; i<tc;i++)
    {
        cin>>name;
        cin>>phone;
        mp[name] = phone;
    }

    while(tc -- )
    {
        cin>>name;
        if(mp.count(name) == 1)
        {
            cout<<name<<"=";
            cout<<mp[name]<<endl;
        }
        else cout<<"Not found"<<endl;
    }
}
