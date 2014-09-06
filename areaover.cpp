#include<iostream>
#include<math.h>
using namespace std;
int area(int l,int b)
{
    return(l*b);
}
float area(int r)
{
    return(3.14*r*r);
}
float area(int a,int b,int c)
{
    float s=(a+b+c)/2.0;
    return(sqrt(s*(s-a)*(s-b)*(s-c)));
}
int main()
{
    int l,b,r,a,c,ch;
    cout<<"Enter Choice:\n1.Rectangle\n2.Circle\n3.Trianflge\n\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"\nEnter Length And Breath of Rectangle : ";
        cin>>l>>b;
        cout<<"\nArea Of Rectangle is : "<<area(l,b);
        break;
    case 2:
        cout<<"\nEnter the Radius of circle : ";
        cin>>r;
        cout<<"\nArea of Circle is : "<<area(r);
        break;
    case 3:
        cout<<"\nEnter the three sides of a triangle : ";
        cin>>a>>b>>c;
        cout<<"\nArea of Triangle is : "<<area(a,b,c);
        break;
    default:
        cout<<"\nWrong choice";
    }
    return (0);
}
