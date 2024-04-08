#include<bits/stdc++.h>

using namespace std;

int uocchung(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else return uocchung(b, a%b);

}

int main(){
int a, b; cin>>a>>b;

cout<<uocchung(a,b);
}
