#include<iostream>
using namespace std;
template<class t>
class vectors
{
    t a[5];
    public:
    vectors(t ar[])
    {
        for(int i=0;i<5;i++)
            a[i]=ar[i];
    }
    void scalar(int x)
    {
        for(int i=0;i<5;i++)
            a[i]*=x;
    }
    void display()
    {
        for(int i=0;i<5;i++)
            cout<<a[i]<<",";
        cout<<"\n\n";
    }
};
int main()
{
    int q[5]={1,2,3,4,5};
    float s[5]={1.1,2.2,3.3,4.4,5.5};
    char r[5]={'a','b','c','d','e'};
    vectors<int>in(q);
    vectors<float>fl(s);
    vectors<char>ch(r);
    in.scalar(5);
    in.display();
    fl.scalar(5);
    fl.display();
    ch.display();
    return 0;
}
