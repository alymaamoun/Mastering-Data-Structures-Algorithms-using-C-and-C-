#include <iostream>


using namespace std;


typedef struct
{
    int length;
    int breadth;
}Rectangle;

int main()
{
    Rectangle r={10,15};
    Rectangle *RectanglePtr;
    Rectangle *RectanglePtr2;
    RectanglePtr2=&r;
    RectanglePtr=(Rectangle*)malloc(sizeof(Rectangle));
    RectanglePtr->length=3;
    RectanglePtr->breadth=2;
    
    cout<<RectanglePtr->length<<endl;
    cout<<RectanglePtr->breadth<<endl;
    cout<<RectanglePtr2->length<<endl;
    cout<<RectanglePtr2->breadth<<endl;
    return 0;
}
