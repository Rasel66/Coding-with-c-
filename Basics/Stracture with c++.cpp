#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet=0;
        inches=0.0;
    }
    Distance(int ft, float inch)
    {
        feet=ft;
        inches=inch;
    }
    void getDist();
    void showDist();
    void addDist(Distance,Distance);
};
void Distance::getDist()
{
    cout<<"\n Enter feet and inches: ";
    cin>>feet>>inches;
}
void Distance::showDist()
{
    cout<<feet<<"\'-"<<inches<<"\"";
}
void addDist(Distance d1, Distance d2)
{
    feet= d1.feet+d2.feet;
    inches=d1.inches+d2.inches;
    if(inches>=12.0)
    {
        inches -= 12.0;
        feet++;
    }
}
void main()
{
    Distance d1;
    Distance d2(10,6.0);
    Distance d3;
    d1.getDist();

    d1.showDist();
    cout<<" + ";
    d2.showDist();
    cout<<" + ";

    d3.addDist(d1,d2);
    d3.showDist();

    return 0;
}
