#include<bits/stdc++.h>

using namespace std;

bool check(string s, int &a, int &b)
{   int j=(int)s.size()-1;
    for(int i=0;i<=(int)s.size()/2;i++)
    {
        if(s[i]!=s[j])
        {
            a=i;
            b=j;
            return false;
        }
        j--;
    }

    return true;

}


int main()
{

     int tc; cin>>tc;

     while(tc--)
     {
     string s;
     cin>>s;
     int a, b, c;
     if(check(s, a, b)) cout<<-1<<endl;

     else {

       s.erase(s.begin()+a);

       if(check(s, a, c))
       {
           cout<<a<<endl;

       }
       else cout<<b<<endl;

     }




     }

}
