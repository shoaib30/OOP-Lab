#include<iostream>
using namespace std;
float sin(float p,int t,int r=8)
{
    float in;
    in=p*t*r/100;
    return in;
}
int main()
{
    int t;
    float si,pr,tot;
    cout<<"Enter Principle : ";
    cin>>pr;
    cout<<"Enter Time in Years : ";
    cin>>t;
    si=sin(pr,t);
    tot=pr+si;
    cout<<"\n\nTotal Amount = "<<tot;
    return 0;
}
