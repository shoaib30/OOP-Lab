#include<iostream>
using namespace std;
template<class t>
class link_list
{
    int nodes;
    struct node
    {
        t data;
        node* link;
    };
    typedef node* NODE;
    NODE get_node()
    {
        NODE x;
        x=new node;
        if(x==NULL)
            cout<<"Memory Full";
        return x;
    }
    NODE root;
    void insert_front(t item)
    {
        NODE temp;
        temp=get_node();
        temp->data=item;
        temp->link=root;
        nodes++;
        root=temp;
    }
    void delete_front()
    {
        NODE temp;
        if(root==NULL)
        {
            cout<<"List Empty";
        }
        else if(root->link==NULL)
        {
            cout<<"Element Removed : "<<root->data;
            delete root;
            root=NULL;
            nodes--;
        }
        temp=root;
        cout<<"Element Removed : "<<temp->data;
        delete temp;
        root=root->link;
        nodes--;
    }
    void insert_rear(t item)
    {
        NODE temp1,temp2;
        temp2=get_node();
        temp2->data=item;
        temp2->link=NULL;
        if(root==NULL)
        {
            root=temp2;
        }
        temp1=root;
        while(temp1->link!=NULL)
        {
            temp1=temp1->link;
        }
        temp1->link=temp2;
        nodes++;
    }
    void delete_rear()
    {
        NODE temp;
        temp=root;
        if(root==NULL)
        {
            cout<<"List Empty";
        }
        else if(root->link==NULL)
        {
            cout<<"Element Removed : "<<root->data;
            delete root;
            root=NULL;
            nodes--;
        }
        while((temp->link)->link!=NULL)
            temp=temp->link;
        cout<<"Element Removed : "<<(temp->link)->data;
        delete temp->link;
        temp->link=NULL;
        nodes--;
    }
    int search_list(t key)
    {
        int pos=1;
        NODE temp=root;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return pos;
            }
            pos++;
            temp=temp->link;
        }
        return 0;
    }
    void display()
    {
        NODE temp=root;
        if(root==NULL)
        {
            cout<<"\nList Empty";
            return;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->link;
        }
        cout<<"\nTotal:"<<nodes;
    }
    void insert_position(t x,int pos)
    {
        NODE temp=root,temp2;
        temp2=get_node();
        temp2->data=x;
        for(int i=1;i<pos-1;i++)
            temp=temp->link;
        temp2->link=temp->link;
        temp->link=temp2;
        nodes++;
    }
    void delete_position(int pos)
    {
        NODE temp=root;
        if(root==NULL)
        {
            cout<<"\nList Empty";
        }
        else if(temp->link==NULL)
        {
            root=NULL;
            cout<<"\nElement Removed : "<<temp->data;
        }
        else if(pos==1)
        {
            delete_front();
        }
        for(int i=1;i<pos-1;i++)
            temp=temp->link;
        cout<<"\nElement Removed : "<<(temp->link)->data;
        temp->link=(temp->link)->link;
        nodes--;
    }
    void delete_all_x(t x)
    {
        NODE temp;
        int i=-1;
        while(i)
        {
            i=search_list(x);
            if(i>0)
                delete_position(i);
        }
    }
    public:
    link_list()
    {
        root=NULL;
        nodes=0;
    }
    void menu(int ch)
    {
        int n=1,pos;
        t x;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter the element to enter : ";
            cin>>x;
            insert_front(x);
            break;
        case 2:
            cout<<"\nEnter the element to enter : ";
            cin>>x;
            insert_rear(x);
            break;
        case 3:
            delete_front();
            break;
        case 4:
            delete_rear();
            break;
        case 5:
            cout<<"\nList:  ";
            display();
            break;
        case 6:
            cout<<"\nEnter element to search : ";
            cin>>x;
            x=search_list(x);
            if(x!=0)
                cout<<"\nFound at : "<<x;
            else
                cout<<"\nNot Found ";
            break;
        case 7:
            cout<<"\nEnter Position to Insert at : ";
            cin>>pos;
            if(pos>nodes)
            {
                cout<<"\nWrong Position";
                break;
            }
            cout<<"\nEnter the element to insert : ";
            cin>>x;
            insert_position(x,pos);
            break;
        case 8:
            cout<<"\nEnter Position to Delete at : ";
            cin>>pos;
            if(pos>nodes&&pos!=0)
            {
                cout<<"\nWrong Position";
                break;
            }
            delete_position(pos);
            break;
        case 9:
            cout<<"\nEnter the Element to delete : ";
            cin>>x;
            delete_all_x(x);
            break;
        case 10:
            throw (0);
            break;
        default:
            cout<<"\nWrong Input.";
            break;
        }
    }
};
int main()
{
    link_list<char> l;
    int ch;
    try
    {
        while(1)
        {
            cout<<"\n\nEnter choice";
            cout<<"\n1.Insert Front"<<endl;
            cout<<"2.Insert Rear"<<endl;
            cout<<"3.Delete Front"<<endl;
            cout<<"4.Delete Rear"<<endl;
            cout<<"5.Display"<<endl;
            cout<<"6.Search"<<endl;
            cout<<"7.Insert at position"<<endl;
            cout<<"8.Delete at position"<<endl;
            cout<<"9.Delete all instances of"<<endl;
            cout<<"10.Exit"<<endl;
            cin>>ch;
            l.menu(ch);
        }
    }
    catch(int a)
    {
        cout<<"\n\n~~~~~~~END~~~~~~";
    }
    return 0;
}
