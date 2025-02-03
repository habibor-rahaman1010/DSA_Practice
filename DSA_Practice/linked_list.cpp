#include <bits/stdc++.h>
using namespace std;
#define DUMMY 0

class Node{
    public:
        int value;
        Node* next;

    Node(){
        value = 0;
        next = NULL;
    }

    Node(int _value){
        value = _value;
        next = NULL;
    }
};

Node* head = new Node(DUMMY);

void insert_at_tail(int value){
    Node* copy_head = head;
    while(copy_head->next != NULL){
        copy_head = copy_head->next;
    }
    copy_head->next = new Node(value);
}

void insert_at_head(int value){
    Node* next_node = head->next;
    Node* new_node = new Node(value);
    head->next = new_node;
    new_node->next = next_node;
}

void get_element_at(int position){
    Node* current = head->next;
    while(position--){
        current = current->next;
    }
    cout<<current->value;
}

void delete_element_at(int position){
    Node* current = head;
    Node* next_node;
    while(position--){
        current = current->next;
    }
    next_node = current->next;
    current->next = next_node->next;
}

void insert_at_position(int position, int value){
    Node* current = head;
    Node* new_node = new Node(value);
    Node* next_node;
    while(position--){
        current = current->next;
    }
    next_node = current->next;
    current->next = new_node;
    new_node->next = next_node;
}

void print_linked_list(Node* list_head){
    list_head = list_head->next;
    while(list_head != NULL){
        cout<<list_head->value <<" ";
        list_head = list_head->next;
    }
}

//revers the link list without recursion
void revers_linked_list(Node* head_node){
    Node* current = head_node->next;
    Node* prv = NULL;
    Node* nxt = NULL;

    while(current != NULL){
        nxt = current->next;
        current->next = prv;
        prv = current;
        current = nxt;
    }

    // Print the reversed linked list
    Node* temp = prv;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_linked_list_reverse(Node* current){
    if(current == NULL){
        return;
    }
    print_linked_list_reverse(current->next);
    cout<<current->value <<" ";
}

int main(){
    insert_at_tail(12);
    insert_at_tail(23);
    insert_at_tail(25);

    insert_at_head(8);

    print_linked_list(head);
    cout<<"\n";
    get_element_at(3);
    delete_element_at(2);

    cout<<"\n";
    insert_at_position(3, 10);
    print_linked_list(head);
    cout<<"\n";

    print_linked_list_reverse(head->next); /// i am pass head->next for skip the dummy value 0 of head!.

    cout<<"\n";
    revers_linked_list(head);
    return 0;
}
