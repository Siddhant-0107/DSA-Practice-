#include<bits\stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;

    public:
    node(int data1, node* next1, node* prev1)
    {
        data= data1;
        next = next1;
        prev = prev1;
    }

    public:
    node(int data1)
    {
        data= data1;
        next = nullptr;
        prev = nullptr;
    }

};
node* dll_storage(int arr[], int n)
{
    node* head= new node(arr[0]);
    node*mover = head;
    for (int i = 1; i < n; i++)
    {
        node* temp = new node(arr[i]);
        mover->next=temp;
        temp->prev= mover;
        mover=temp;

    }
    return head;
    
}
node* node_deletion(node* head, int k)
{
    if(head==NULL)
    return NULL;
    else if(head->next==NULL&&k==1)
    return NULL;
    node* temp = head;
    if(k==1)
    {
        head=head->next;
        head->prev=nullptr;
        temp->next= nullptr;
    }
    else{
    int count =0;
    while(temp)
    {
        count++;
        if(count==k)
        {
            temp->next->prev = temp->prev;
            temp->prev->next= temp->next;
            temp->next=nullptr;
            temp->prev=nullptr;
            break;
        }
        temp=temp->next;
    }
}

    delete temp;
    return head;
}

int main()
{
    int arr[]={1,3,6,12,4};
    node* head= dll_storage(arr,5);
   node* temp = head;
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   temp=node_deletion( head, 1);
   cout<<endl;
    while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }

   return 0;
}