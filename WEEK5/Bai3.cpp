#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n, a;
    cin>>n;
    vector <long long> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int b; cin>>b;
    int c, d; cin>>c>>d;
    v.erase(v.begin()+b-1);
    v.erase(v.begin()+c-1, v.begin()+d-1);
    cout<<v.size()<<endl;
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}
