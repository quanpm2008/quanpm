#include <bits/stdc++.h>

using namespace std;

int random()
{
    srand(time(0));
    return rand()%100+1;
}

int trochoi(int guess, int answer)
{
    if(guess<answer)
    {

        return 1;
    }
    else if(guess>answer)
    {

        return 2;
    }
    else
    {

        return 3;
    }
}


bool kiemtradauvao(int n)
{
    if(cin.good())
        return 1;

    return 0;
}


int main()
{   int guess, answer=random();
    int l=1, r=100;

    while(guess!=answer)
    {
        guess=(l+r)/2;
        cout<<"Toi doan:"<<guess<<endl;
        if(trochoi(guess ,answer)==1)
        {
            cout<<"nho hon!"<<endl;
            l=guess+1;
        }
        if(trochoi(guess, answer)==2)
        {
            cout<<"lon hon!"<<endl;
            r=guess;
        }
        if(trochoi(guess, answer)==3)
        {
            cout<<"done!!!!!!!!!!!!!!!"<<endl;
            break;
        }

    }

    cout << guess<<" "<< answer <<endl;
    return 0;
}
