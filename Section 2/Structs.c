#include <iostream>


using namespace std;


typedef struct
{
    int length;  //allocated size now =4
    int breadth; //allocated size now =8
    char x;      //allocated size now =12
    char y;      //allocated size now =12
    char z;      //allocated size now =12
    char a;      //allocated size now =12
    char b;      //allocated size now =16
}Rectangle;

int main()
{
    Rectangle r1;
    r1.length=10;
    r1.breadth=5;
    cout<<"AREA OF R1= "<<r1.breadth*r1.length<<endl;
    cout<<sizeof(r1)<<endl;
    return 0;
}
