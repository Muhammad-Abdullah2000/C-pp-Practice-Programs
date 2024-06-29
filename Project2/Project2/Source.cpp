#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
    node* prev;

    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }

};

void insertAtHead(node*& head, int val) {
    node* n = new node(val);
    n->next = head;
    if (head != NULL) {
        head->prev = n;
    }


    head = n;
};

void insetInTail(node*& head, int val) {

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }


    node* n = new node(val);
    node* temp = head;

    for (temp->next; temp->next != NULL; temp = temp->next) {
       
    }

    temp->next = n;
    n->prev = temp;

};

void Display(node* head) {
    node* temp = head;
    for (temp; temp != NULL; temp = temp->next)
    {
        cout << temp->data << " ";
       
    }
    cout << endl;

}

void deleteAtHead(node*& head) {

    node* todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;

}

void deletion(node*& head, int pos) {

    if (pos == 1) {
        deleteAtHead(head);
        return;
    }


    node* temp = head;
    int count = 1;

    for (temp ; temp!= NULL && count != pos; count++)
    {
        temp = temp->next;
       
    }

    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }


    delete temp;

}

int main() {

    node* head = NULL;
    insetInTail(head, 1);
    insetInTail(head, 2);
    insetInTail(head, 3);
    insetInTail(head, 4);
    insetInTail(head, 5);
    insetInTail(head, 6);

    Display(head);
    insetInTail(head, 7);
    cout << endl;
    cout << "After Insertion" << endl;
    Display(head);

    deletion(head, 5);
    cout << endl;
    cout << "After deletion" << endl;
    Display(head);






    return 0;
}