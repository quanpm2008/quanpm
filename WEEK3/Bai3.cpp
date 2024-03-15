#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int b;
    if(s[8]=='P')
    {
        if(s[0]=='0')
        {
            b=s[1]-'0';
            b+=12;
        }
        else {
            b=(s[1]-'0')+10;
            b+=12;
        }
        if(b==24)
        {
            s[1]=='2';
            s[0]=='1';
             for(int i=0;i<8;i++)
        {
            cout<<s[i];
        }
             return 0;
        }
        string a=to_string(b);
        s[1]=a[1];
        s[0]=a[0];



        for(int i=0;i<8;i++)
        {
            cout<<s[i];
        }


    }
    else if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }


        for(int i=0;i<8;i++)
        {
            cout<<s[i];
        }
    }


}
