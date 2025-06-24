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

node* reversal_of_dll(node* head)
{
    if(head==NULL)
    return NULL;
    else if(head->next==NULL)
    {
        return head;
    }
    node* temp = head->next;
    head->prev= head->next;
    head->next=nullptr;
    while(temp->next!=NULL)
    {
        node* back = temp->prev;
        temp->prev= temp->next;
        temp->next= back;
        temp= temp->prev;
    }
    temp->next=temp->prev;
    temp->prev= nullptr;
    head = temp;
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
   temp=reversal_of_dll( head);
   cout<<endl;
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }

   return 0;
}