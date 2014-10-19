#include<iostream>
using namespace std;
class dist
{
    int feet,inch;
public:
    dist(int x,int y)
    {
        feet=x;
        inch=y;
    }
    dist operator+(dist& d2)
    {
        dist d(0,0);
        d.feet=feet+d2.feet;
        d.inch=inch+d2.inch;
        return d;
    }
    int operator >(dist& d2)
    {
        if((((feet*12)+inch)>((d2.feet*12)+d2.inch)))
            return true;
        else
            return false;
    }
    int operator <(dist& d2)
    {
        if((((feet*12)+inch)<((d2.feet*12)+d2.inch)))
            return true;
        else
            return false;
    }
    int operator ==(dist& d2)
    {
        if(feet==d2.feet&&inch==d2.inch)
            return true;
        else
            return false;
    }
   void display()
   {
       cout<<"\nDistance : "<<feet<<"'"<<inch<<"\"";
   }
};
int main()
{
    int x,y;
    cout<<"Enter Distance 1 (feet inches)";
    cin>>x>>y;
    dist d1(x,y);
    cout<<"Enter Distance 2 (feet inches)";
    cin>>x>>y;
    dist d2(x,y);
    dist d3(0,0);
    d3=d1+d2;
    cout<<"The three distances :";
    d1.display();
    d2.display();
    d3.display();
    if(d1>d2)
    {
        cout<<"\nD1 is greater";
    }
    else if(d1<d2)
    {
        cout<<"\nD2 is greater";
    }
    else if(d1==d2)
    {
        cout<<"\nBoth are Equal";
    }
    return 0;
}
