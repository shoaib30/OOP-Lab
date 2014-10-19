#include<iostream>
using namespace std;
class dist
{
    int feet,inch;
public:
    friend istream &operator >>(istream &din,dist &d1)
    {
        din>>d1.feet;
        din>>d1.inch;
    }
    friend ostream &operator <<(ostream &dout,dist &d1)
    {
        dout<<d1.feet<<"'";
        dout<<d1.inch<<"\"";
    }
};
int main()
{
    dist d1;
    cout<<"Enter Distance (feet inches)";
    cin>>d1;
    cout<<"\nDisplay:\nDistance :";
    cout<<d1;
    return 0;
}
