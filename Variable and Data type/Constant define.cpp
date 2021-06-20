#include<iostream>
using namespace std;
int main()
{
    float radius;
    const float PI= 3.1416;
    cout<<"Enter the radius of sphere: ";
    cin>>radius;

    float volume=(4.0/3.0)*PI*radius*radius*radius;
    cout<<"\n Volume of sphere is = " <<volume;

}
