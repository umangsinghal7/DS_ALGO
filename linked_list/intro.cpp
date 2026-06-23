#include <iostream>
#include <vector>
using namespace std;
// struct Node
// {
// public:
//     int data;
//     Node *next;

// public:
//     Node(int data1, Node *next1)
//     {
//         data = data1;
//         next = next1;
//     }
// };
// int main(){
//     vector<int> arr = {2,5,8,7};
//     Node*uma = new Node(69,nullptr);
//     cout<<uma->data<<endl;

// }

class Node // class=struct no diff
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;         //constructor
        next = nullptr;
    }
};
// array to ll
Node *convertarr2ll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
//lengthofLL
int lengthofll(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        // traverse code
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
//searching
int searchifpresent(Node*head,int val){
     Node *temp = head;
    while (temp)
    {
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {205, 8, 7};
    Node *head = convertarr2ll(arr);
    cout << head->data << endl;

    // traverse in ll
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " "<<endl;
        temp = temp->next;
    }
    cout << lengthofll(head)<<endl;
    cout<< searchifpresent(head,88);
}