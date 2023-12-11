#include<iostream>
using namespace std;

struct Node {                  // Defining a doubly linked Node.
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;    //global-variable -> pointer to head node.

struct Node* GetNewNode(int x){        // function to create a new node in memory and it returns a pointer the newly created node.

   /* struct Node myNode;
    myNode.data = x;                   // if we create node in this way then it will be removed from memory as soon as the function call ends.
    myNode.prev = NULL;                // So to keep it in the memory until and unless we remove it we use diff. method as used here.
    myNode.next = NULL;  */            // we create node in dynamic memory or heap section of memory and use new operation in c++.

    struct Node* newNode = new Node();
    newNode -> data = x;
    newNode -> prev = NULL;
    newNode -> next = NULL;

    return newNode;
}


void InsertAtHead(int x){
    struct Node* newnode = GetNewNode(x);
    if(head == NULL) {
        head = newnode;
        return;
    }

    head -> prev = newnode;
    newnode -> next = head;
    head = newnode;

}

void Print(){
    cout<<"Forward"<<"  ";
    struct Node* temp = head;
    if(head == NULL){
        return;
        }
    while(temp!= NULL){
        cout<<temp->data<<"  ";
        temp = temp -> next;
    }
    cout<<endl;
}

void ReversePrint(){
    struct Node* temp = head;
    if(temp == NULL){
        return;
    }
    while(temp->next != NULL){
        temp = temp -> next;
    }

    cout<<"REVERSE List: "<<"  ";
    while(temp != NULL) {
        cout<<temp->data<<"  ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main(){
    head = NULL;
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(10); Print(); ReversePrint();

    return 0;
}