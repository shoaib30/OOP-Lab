#include<iostream>
using namespace std;
class rectangle
{
    int l,b;
public:
    friend istream &operator >>(istream &din,rectangle &r)
    {
        din>>r.l;
        din>>r.b;
    }
    friend ostream &operator <<(ostream &dout,rectangle &r)
    {
        dout<<"Length :"<<r.l<<endl;
        dout<<"Breath :"<<r.b<<endl;
    }
    void operator -()
    {
        l*=-1;
        b*=-1;
    }
};
int main()
{
    rectangle r1,r2;
    cout<<"Enter length and breath :";
    cin>>r1;
    r2=r1;
    -r2;
    cout<<"\nRectangles:\n";
    cout<<r1<<endl<<r2;
    return 0;
}
