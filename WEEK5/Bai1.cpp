#include <bits/stdc++.h>

using namespace std;


void update(int *a,int *b) {
   cout<<*a+*b<<endl<<abs(*a-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
