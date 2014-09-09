#include<iostream>
using namespace std;
int main()
{
    int a,i,sum=0;
    cout<<"Enter the lenght of array";
    cin>>a;
    int *s=new int[a]; //fancy way of initializing
    //int s[a];  //this works as well
    cout<<"Enter the terms :";
    for(i=0;i<a;i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    cout<<"Sum = "<<sum;
    return 0;
}
