#include<bits/stdc++.h>

using namespace std;
#define MIN_INT -999999999

int main()
{
    int a[10][10];
    for(int i = 1;i <= 6; i++)
    {
        for(int j=1; j <= 6 ; j++)
        {
            cin>>a[i][j];
        }
    }

    int cnt = 0, max = MIN_INT;
    for(int i = 2 ; i <= 5 ;i++)
    {
        for(int j = 2 ; j <= 5 ; j++)
        {
            cnt = a[i][j] + a[i-1][j+1] + a[i-1][j] + a[i-1][j-1] + a[i+1][j+1] + a[i+1][j] + a[i+1][j-1];
            if(cnt > max)  max = cnt;
            cnt = 0;
         }
    }

    cout << max;


}
