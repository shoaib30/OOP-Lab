#include<iostream>
#include<cstring>
using namespace std;
class book
{
    char b_name[20],b_author[20];
    int copies;
public:
    void get_Data()
    {
        cout<<"\nEnter book name :";
        cin>>b_name;
        cout<<"Enter Author name :";
        cin>>b_author;
        cout<<"Enter Number of copies :";
        cin>>copies;
    }
    int comp_name(char a[])
    {
        if(!(strcmp(a,b_name)))
            return true;
        else
            return false;
    }
    int get_copy()
    {
        return copies--;
    }
};
int find_book(book b[],int m,char x[])
{
    int i;
    for(i=0;i<m;i++)
    {
        if(b[i].comp_name(x))
        {
            return b[i].get_copy();
        }
    }
    return 0;
}
int main()
{
    book *b;
    char x[20];
    int i,y,m;
    cout<<"LIBRARY\n";
    cout<<"Enter number of books";
    cin>>m;
    b=new book[m];
    for(i=0;i<m;i++)
    {
        cout<<"\nBOOK : "<<i+1;
        b[i].get_Data();
    }
    cout<<"\n\nEnter book name to search : ";
    cin>>x;
    y=find_book(b,m,x);
    if(y>0)
        cout<<"\nBook Available ";
    else
        cout<<"\nBook Unavailable ";
    return 0;
}
