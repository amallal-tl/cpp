#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void printList(Node* head){
    if(!head) return;
    cout << head->data << " ";
    printList(head->next);
}

int main(){
    Node* head = new Node{1, nullptr};
    Node* tail = head;

    for(int i = 1; i < 5; i++){
        tail->next = new Node{i+1, nullptr};
        tail = tail->next;
    }

    printList(head);
}