#include <iostream>


using namespace std;


int add (int a,int b); //prototype

int main()
{
    //num1,num2,sum are actual arguments
    //num1:local only to main function scope
    //num2:local only to main function scope
    //sum: local only to main function scope
    int num1=10,num2=15,sum;
    sum=add(num1,num2);
    return 0;
}

//a,b formal arguments
int add (int a,int b) //Definition
{
    //a:local only to add function scope
    //b:local only to add function scope
    //c:local only to add function scope
    int c;
    c=a+b;
    return c;
}
