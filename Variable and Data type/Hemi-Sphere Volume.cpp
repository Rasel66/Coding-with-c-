#include<iostream>
using namespace std;
#define PI 3.1416
int main()
{
    float radius,volume;
    cout<<"\n Enter the radius: ";
    cin>>radius;
    volume=(2.0/3.0)*PI*radius*radius*radius;
    cout<<"\n Volume of semi-sphere: "<<volume;
    return 0;
}
