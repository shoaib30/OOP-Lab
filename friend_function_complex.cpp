#include<iostream>
using namespace std;
class comp
{
    int a,b;
public:
    void get_data(int x, int y)
    {
        a=x;
        b=y;
    }
    void disp()
    {
        cout<<endl<<a<<"+i"<<b;
    }
    friend comp add(comp &c1,comp &c2,comp &c3);
};
comp add(comp &c1,comp &c2,comp &c3)
{
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}
int main()
{
    int a,b;
    comp c1,c2,c3;
    cout<<"Enter the complex number : (a+ib : a b) : ";
    cin>>a>>b;
    c1.get_data(a,b);
    cout<<"Enter the complex number : (a+ib : a b) : ";
    cin>>a>>b;
    c2.get_data(a,b);
    c3=add(c1,c2,c3);
    cout<<"\n\nAdded Complex number : ";
    c3.disp();
    return 0;
}
