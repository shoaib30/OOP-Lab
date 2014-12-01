#include<iostream>
using namespace std;
template<class t>
void swaps(t &a,t &b)
{
    t temp;
    temp=a;
    a=b;b=temp;
}
template<class t>
t great(t a,t b)
{
    return (a>b?a:b);
}
template<class t>
t small(t a,t b)
{
    return (a<b?a:b);
}
int main()
{
    int x,y;
    cout<<"Enter two Integers : ";
    cin>>x>>y;
    swaps(x,y);
    cout<<"\nSwapping : "<<x<<"  "<<y;
    cout<<"\nGreatest : "<<great(x,y);
    cout<<"\nSmallest : "<<small(x,y);
    float a,b;
    cout<<"\n\nEnter two float : ";
    cin>>a>>b;
    swaps(a,b);
    cout<<"\nSwapping : "<<a<<"  "<<b;
    cout<<"\nGreatest : "<<great(a,b);
    cout<<"\nSmallest : "<<small(a,b);
    char f,g;
    cout<<"\n\nEnter two characters : ";
    cin>>f>>g;
    swaps(f,g);
    cout<<"\nSwapping : "<<f<<"  "<<g;
    cout<<"\nGreatest : "<<great(f,g);
    cout<<"\nSmallest : "<<small(f,g);
    return 0;
}
