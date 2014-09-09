#include<iostream>
using namespace std;
class first
{
    int a;
    public:
        void get_data(int x)
        {
            a=x;
        }
        friend class second;
};
class second
{
    int b;
    public:
        void get_data(int x)
        {
            b=x;
        }
        int great(first &f)
        {
            if(f.a>b)
                return f.a;
            else
                return b;
        }
};

int main()
{
    first f;
    second s;
    int x;
    cout<<"Enter value of A : ";
    cin>>x;
    f.get_data(x);
    cout<<"Enter value of B : ";
    cin>>x;
    s.get_data(x);
    cout<<"\nGreatest = "<<s.great(f);
    return 0;

}
