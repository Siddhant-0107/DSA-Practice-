#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1)
    {
        data= data1;
        next =next1;
    }

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node* storage(int arr[], int n)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next= temp;
        mover = temp;
    }
    return head;
}
Node* addition(Node* head1, Node* head2)
{
    Node* ans= new Node((head1->data+head2->data)%10);
    int carry= (head1->data+head2->data)/10;
    Node* temp1 = head1->next;
    Node* temp2 = head2->next;
    Node* temp= ans;
    while(temp1&&temp2)
    {
        int sum= temp1->data+temp2->data+carry;
        temp->next = new Node(sum%10);
        carry = sum/10;
        temp1=temp1->next;
        temp2= temp2->next;
        temp=temp->next;
    }
    while(temp1)
    {
        int sum=(temp1->data+carry);
        temp->next = new Node(sum%10);
        carry=sum/10;
         temp1=temp1->next;
         temp=temp->next;

    }
     while(temp2)
    {
       int sum=(temp2->data+carry);
        temp->next = new Node(sum%10);
        carry=sum/10;
         temp1=temp2->next;
         temp=temp->next;

    }
    if(carry!=0)
    {
         temp->next = new Node(carry);
    }
    return ans;
}
    
int main()
{
    int arr1[]={7,6,4,5,6,3};
    Node* head1= storage(arr1,6);
   Node* temp = head1;
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   cout<<endl;
     int arr2[]={1,3,6,8,4};
    Node* head2= storage(arr2,5);
    temp = head2;
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   cout<<endl;
   temp =addition( head1, head2);
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   return 0;
}