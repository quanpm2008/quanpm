#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin>>a>>b;
    cout<<(int)a.size()<<" ";
    cout<<(int)b.size()<<endl;
    cout<<a+b<<endl;

    char tmp;
    tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;

    cout<<a<<" "<<b;

}
