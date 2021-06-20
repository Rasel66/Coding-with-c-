#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\n Enter two number: ";
    cin>>a>>b;
    cout<<"\n Before swapping: ";
    cout<<"\n A= "<<a<<"\n B= "<<b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"\n After swapping: ";
    cout<<"\n A= "<<a<<"\n B= "<<b;
    return 0;

}
