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
int main()
{
    int arr[]={1,3,6,12,4};
    Node* head= storage(arr,5);
   Node* temp = head;
   while(temp)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   return 0;
}