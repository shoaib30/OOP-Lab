#include<iostream>
using namespace std;
class product
{
    int qn,it_no,cost;
public:
    product(int q,int in,int c)
    {
        qn=q;
        it_no=in;
        cost=c;
    }
    void display()
    {
        cout<<endl<<"Item Number : "<<it_no;
        cout<<endl<<"Quantity : "<<qn;
        cout<<endl<<"Cost : Rs."<<cost;
        cout<<endl<<"Total Cost : Rs."<<cost*qn;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter the Item number : ";
    cin>>b;
    cout<<"Enter the quantity :";
    cin>>a;
    cout<<"Enter the cost :";
    cin>>c;
    product p1(a,b,c);
    cout<<"\n\nDetails\n";
    p1.display();
    return 0;
}
