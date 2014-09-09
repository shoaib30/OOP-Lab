#include<iostream>
using namespace std;
class dist
{
    int feet;
    float inch;
    public:
    void set_feet(int f)
    {
        feet=f;
    }
    void set_inch(float i)
    {
        inch=i;
    }
    int get_feet()const
    {
        return feet;
    }
    float get_inch()
    {
        return inch;
    }
    dist adddist(dist d2)
    {
        dist temp;
        temp.set_feet(d2.get_feet()+feet);
        temp.set_inch(d2.get_inch()+inch);
        return temp;
    }
};
int main()
{
    dist d1,d2,d3;
    int f;
    float i;
    cout<<"Enter Distance D1 : (feet) (inch)";
    cin>>f>>i;
    d1.set_feet(f);d1.set_inch(i);
    cout<<"Enter Distance D2 : (feet) (inch)";
    cin>>f>>i;
    d2.set_feet(f);d2.set_inch(i);
    d3=d1.adddist(d2);
    cout<<"Total Distance :"<<d3.get_feet()<<" feet and "<<d3.get_inch()<<" inches";
    return 0;
}
