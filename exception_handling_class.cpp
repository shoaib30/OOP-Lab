#include<iostream>
#include<cstring>
using namespace std;
class bank
{
    int ac;
    float balance;
    char name[10];
    public:
    bank(int a,float b,char c[])
    {
        ac=a;
        balance=b;
        strcpy(name,c);
    }
    void deposit()
    {
        cout<<"\nEnter amount to deposit : Rs.";
        float x;
        cin>>x;
        balance+=x;
    }
    void withdraw()
    {
        cout<<"\nEnter amount to withdraw : Rs.";
        float x;
        cin>>x;
        if(x>balance)
            throw(x);
        else
            balance-=x;
    }
    void disp()
    {
        cout<<"\nName : "<<name;
        cout<<"\nAccount Number : "<<ac;
        cout<<"\nBalance : "<<balance<<"\n\n";
    }
};
int main()
{
    int k=1,c;
    bank b1(1234,10000000,"joker");
    while(k)
    {
        cout<<"\n1.deposit \n2.Withdraw \n3.Display \n4.exit\n";
        cin>>c;
        try
        {
            switch(c)
            {
            case 1:
                b1.deposit();
                break;
            case 2:
                b1.withdraw();
                break;
            case 3:
                b1.disp();
                break;
            case 4:
                k=0;
                break;
            default:
                cout<<"\nWrong";
                break;
            }
        }
        catch(float x)
        {
            cout<<endl<<x<<" is greater than balance \n";
        }
    }
}
