#include<iostream>
#include<vector>
using namespace std;
class Node{

    public:

    int data;
    Node*next;

    public:
    Node(int data1 , Node*next1){

    data=data1;
    next = next1;

    }
};

Node*deleteHead(Node*head){
    if(head==NULL) return head;
    Node*temp = head;
    head = head->next;
    delete(temp);
    return head;
}

int main(){
    Node*y = new Node(2,nullptr);
    cout<<deleteHead(y);

}