#include <iostream>
using namespace std;
class node {
public:
    int value;
    class node *next;
};

int main() 
{
       int n;
       int v;
       node *head=NULL;
       cout<<"how many nodes ";
       cin>>n;
       
       while(n>0)
       {
         cin>>v;
         node *newnode=new node() ;
         newnode->value=v;  
         newnode->next=head;
         head=newnode;
         --n;
       }
       cout<<"print list ";
       node *temp=head;
       while(temp!=NULL)
       {
           cout<<" "<<temp->value;
           temp=temp->next;
       }
   /* cout<<"\nwhich node to delete give its value \n";
    int d;
    cin>>d;
    node *tempd=head;
    while(tempd->next->value!=d);
    {
       tempd=tempd->next;
    }
    tempd->next=tempd->next->next;
    delete(tempd->next);
    cout<<"\ndeleted list";
    while(head!=NULL)
    {
        cout<<" "<<head->value;
        head=head->next;
    }*/
// your code goes here
	return 0;
}
