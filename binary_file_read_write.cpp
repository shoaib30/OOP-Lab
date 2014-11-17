#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f1("test2.bin");
    char a[10];
    cin>>a;
    f1.write(a,sizeof(a));
    f1.close();
    ifstream f2("test2.bin");
    char x[10];
    f2.read(x,sizeof(x));
    cout<<"\n"<<x;
    f2.close();
    return 0;
}
