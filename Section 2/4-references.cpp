#include <iostream>


using namespace std;

int main()
{
    int a=5;
    int &r=a;
    int *pa=&a;
    int *pr=&r;
    cout<<pa<<endl;
    cout<<pr<<endl;
    // r and a have the same address 
    return 0;
}
