#include<iostream>
using namespace std;
inline int pow(int x,int y)
{
    return x*y;
}
int main()
{
    int a,n,p=1;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        p=pow(a,p);
    }
    cout<<"Answer : "<<a<<"^"<<n<<"="<<p;
    return 0;
}
