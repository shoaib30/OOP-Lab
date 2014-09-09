#include<iostream>
using namespace std;
class fac
{
    int n;
    public:
        void get_data()
        {
            cout<<"Enter the number : ";
            cin>>n;
        }
        friend void fact(fac &f1);
};
void fact(fac &f)
{
    int fa=1;
    for(int i=1;i<=f.n;i++)
    {
        fa*=i;
    }
    cout<<"factorial : "<<fa;
}
int main()
{
    fac f;
    f.get_data();
    fact(f);
    return 0;
}
