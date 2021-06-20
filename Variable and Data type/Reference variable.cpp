#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;

    int& x=a;
    float& y=b;
    a=23;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of a reference: "<<x<<endl;
    b=20.45;
    cout<<"Value of b: "<<b<<endl;
    cout<<"Value of b reference: "<<y<<endl;
}
