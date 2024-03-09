#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m,a=0, b=0, c=0; cin>>n;
    vector <int> v;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m>0)
        {
            a++;
        }
        else if(m<0)
        {
            b++;
        }
        else c++;
    }

    cout<<fixed<<setprecision(6)<<(float)a/n<<endl<<(float)b/n<<endl<<(float)c/n;



}
