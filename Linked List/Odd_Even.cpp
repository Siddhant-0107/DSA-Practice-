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
Node* Odd_Even(Node* head)
{
    int count=1;
    Node* even = head->next;     //The head will be manipulated by temp so we store the even start
    Node* temp= head;
    while(temp&&temp->next->next)       //Make the useful links and count the no of elements
    {
        Node* front = temp->next;
        temp->next= front->next;
        temp= front;
        count++;
    }
    count++;
    if(count%2==0)      //connect the odd and even list accordingly
    {
        temp->next=even;
    }
    else
    {
        temp->next->next=even;
    }
    return head;
}
    
int main()
{
    int arr1[]={1,2,3,4,5,6};
    Node* head1= storage(arr1,6);
   Node* temp = head1;
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   cout<<endl;
    
   temp =Odd_Even( head1);
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   return 0;
}