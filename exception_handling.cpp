#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw(b);
        else
            cout<<"ans "<<a/b;
    }
    catch(int p)
    {
        cout<<"divide by zero error ";
    }
    return 0;
}
