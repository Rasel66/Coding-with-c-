#include<iostream>
using namespace std;
int main()
{
    int n1,n2,r;
    cout<<"\n Enter two number:";
    cin>>n1>>n2;
    cout<<"\n Before swapping::";
    cout<<"\n N1= "<<n1<<"\n N2= "<<n2;
    r=n1;
    n1=n2;
    n2=r;
    cout<<"\n After swapping::";
    cout<<"\n N1= "<<n1<<"\n N2= "<<n2;

    return 0;
}
