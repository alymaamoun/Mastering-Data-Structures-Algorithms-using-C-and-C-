#include <iostream>


using namespace std;

int main()
{
    int a=0x12345678;
    char*p=(char*)&a;
    cout<<a<<endl;
    int array[5]={1,2,3,4,5};
    int * arrayPtr=array;
    cout<<"Normal access using array"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<"Pointer access in array way 1"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(arrayPtr+i)<<endl;
    }
    cout<<"Pointer access in array way 2"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arrayPtr[i]<<endl;
    }    
    cout<<endl;
    printf("%x",*p);//points to LSB byte (char)
    cout<<endl;
    cout<<"Malloc"<<endl;
    int * HeapArrayMallocPtr;
    HeapArrayMallocPtr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
        HeapArrayMallocPtr[i]=i*10;
    for(int i=0;i<5;i++)
        cout<<HeapArrayMallocPtr[i]<<endl;
        
    cout<<"new"<<endl;
    int * HeapArrayNewPtr;
    HeapArrayNewPtr=new int[5];
        for(int i=0;i<5;i++)
        HeapArrayNewPtr[i]=i*10;
    for(int i=0;i<5;i++)
        cout<<HeapArrayNewPtr[i]<<endl;
    delete []HeapArrayNewPtr;
    free(HeapArrayMallocPtr);
    return 0;
}
