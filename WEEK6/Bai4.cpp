#include<bits/stdc++.h>

using namespace std;

class Box{
private:
    int l, b, h;
public:
    Box(int , int , int);
    Box();
    int getLength();
    int getBreadth();
    int getHeight();
    unsigned long long CalculateVolume();


    friend ostream& operator << (ostream& out, Box a);
    friend bool operator < (Box a, Box c);

};

Box::Box(int l, int b, int h)
{
    this->l=l;
    this->b=b;
    this->h=h;
}

Box::Box()
{
    l=0;
    h=0;
    b=0;
}


int Box::getLength()
{
    return l;
}

int Box::getBreadth()
{
    return b;
}

int Box::getHeight()
{
    return h;
}


unsigned long long Box::CalculateVolume()
{
    return b*h*l;
}

ostream& operator << (ostream& out, Box a)
{
    cout<<a.l<<" "<<a.b<<" "<<a.h;
    return out;
}

bool operator < (Box a, Box c)
{
    if(a.l<c.l || (a.l==c.l && a.b < c.b) || (a.l==c.l && a.b == c.b && a.h < c.h))
    {
        return true;
    }

    return false;
}






void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
