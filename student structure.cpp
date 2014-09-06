#include<iostream>
#include<string.h>
using namespace std;
struct stud
{
    char usn[11],name[20],dep[5];
    int sem,cred;
};
int main()
{
    int i;
    stud s[10];
    cout<<"Enter the Details of Students\n";
    for(i=0;i<1;i++)
    {
        cout<<"\nStudent : "<<i+1;
        cout<<"\nName : ";
        cin>>s[i].name;
        cout<<"USN : ";
        cin>>s[i].usn;
        cout<<"Department : ";
        cin>>s[i].dep;
        cout<<"Credits registered : ";
        cin>>s[i].cred;
        cout<<"Semester : ";
        cin>>s[i].sem;
    }
    cout<<"\n\n\nISE DEPARTMENT:-";
    for(i=0;i<1;i++)
    {
        if(!(strcmp(s[i].dep,"ISE"))||!(strcmp(s[i].dep,"ise")))
        {
            cout<<"\n\nNAME : "<<s[i].name;
            cout<<"\nUSN : "<<s[i].usn;
            cout<<"\nSEMESTER : "<<s[i].sem;
            cout<<"\nCredits Registered : "<<s[i].cred;
        }
    }
    return (0);
}
