#include <iostream>


using namespace std;

int main()
{
    
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    
    int A[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number"<<endl;
        cin>>A[i];
    }
    
    for(int x:A)
    {
        cout<<x<<endl;
    }
    return 0;
}
