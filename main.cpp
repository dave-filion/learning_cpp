using namespace std;
#include <iostream>

struct node {
    int val;
    node *next;
};

class LinkedList {
    node* head;

public:
    // constructor
    LinkedList() {
        cout << "Linked list being created..." <<endl;
        head=nullptr;
    }

    // iterates thru list and prints all
    void print_list() {
        for(node *n = head; n != nullptr; n = n->next) {
            cout << n->val << ", ";
        }
        cout << "NULL" << endl;
    }

    void add_node(int val) {
        cout << "Adding: " << val << " to list" << endl;
        auto new_node = new node;
        new_node->val = val;
        // set new node as new head, with pointer to previous head
        new_node->next = head;
        head = new_node;
    }
};


node* add_node(node *head, int val) {
    cout << "Adding: " << val << " to list" << endl;
    auto new_node = new node;
    new_node->val = val;
    // set new node as new head, with pointer to previous head
    new_node->next = head;
    return new_node;
}

// iterates thru list and prints all
void print_list(node *head) {
    for(node *n = head; n != nullptr; n = n->next) {
        cout << n->val << ", ";
    }
    cout << "NULL" << endl;
}

// reverses linked list and returns pointer to new head
node* reverse_list(node *head) {
    cout << "reversing" << endl;
    node *prev = nullptr;
    node *cur = head;
    while (cur != nullptr) {
        node *next = cur->next;

        cur->next = prev;

        prev = cur;
        cur = next;
    }
    return prev;
}

int main() {
//    double a = 1.2;
//    a = sin(a);
//    cout << a << endl;
//    cout << "Hello, World!" << endl;
//    cout << "this is a sample program:" << endl; // ends line
//    cout << "Type ur age: ";
//    int age;
//    cin >> age;
//    cout << "Your age is:" << age << endl;

    // create linked list
    auto *head = new node;
    head->val = 23;
    head->next = nullptr;

    // add 2 more nodes
    head = add_node(head, 24);
    head = add_node(head, 25);

    print_list(head);

    head = reverse_list(head);

    print_list(head);

    // make LinkedList class
    auto *ll = new LinkedList;
    ll->add_node(1);
    ll->add_node(2);
    ll->add_node(3);
    ll->print_list();

    return 0;

}
