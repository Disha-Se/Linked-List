#include <iostream>
#include <string>

class Node {
public:
    int data;  
    std::string name;  
    Node* next;

    Node() {
        data = 0;
        name = "";
        next = NULL;
    }
    Node(int data, std::string name) {
        this->data = data;
        this->name = name;
        this->next = NULL;
    }
};

class Linkedlist {
    Node* head;
public:
    Linkedlist() { head = NULL; }  
    void insertat_beg(int, std::string);
    void insertat_end(int, std::string);
    void insertat_position(int, std::string, int);

    void deleteat_beg();
    void deleteat_end();
    void deleteat_mid(int);

    void traverse();
};

void Linkedlist::traverse() {
    Node *temp = head;
    std::cout << "\nThe contents of the list are: \n";
    if (head == NULL) {
        std::cout << "\nEmpty list";
    } else {
        while (temp != NULL) {
            std::cout << temp->name << " (ID: " << temp->data << ") -> ";
            temp = temp->next;
        }
        std::cout << "NULL\n";
    }
}

void Linkedlist::insertat_end(int data, std::string name) {
    Node* newNode = new Node(data, name);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void Linkedlist::insertat_beg(int data, std::string name) {
    Node* newNode = new Node(data, name);
    if (head == NULL) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void Linkedlist::insertat_position(int newElement, std::string name, int pos) {
    Node* newNode = new Node(newElement, name);
    if (pos < 1) {
        std::cout << "\nPosition should be >= 1";
        return;
    } else if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp != NULL) {
                temp = temp->next;
            }
        }
        if (temp != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        } else {
            std::cout << "\nThe previous node is NULL";
        }
    }
}

void Linkedlist::deleteat_beg() {
    if (head == NULL) {
        std::cout << "\nEmpty list";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    std::cout << "\nNode deleted from the beginning";
}

void Linkedlist::deleteat_end() {
    if (head == NULL) {
        std::cout << "\nEmpty list";
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        std::cout << "\nNode deleted from end";
        return;
    }
    Node* temp = head;
    Node* pre = NULL;
    while (temp->next != NULL) {
        pre = temp;
        temp = temp->next;
    }
    pre->next = NULL;
    delete temp;
    std::cout << "\nNode deleted from end";
}

void Linkedlist::deleteat_mid(int position) {
    if (head == NULL) {
        std::cout << "\nEmpty list";
        return;
    }
    if (position == 1) {
        deleteat_beg();
        return;
    }
    Node* temp = head;
    Node* pre = NULL;
    for (int i = 1; i < position; i++) {
        pre = temp;
        temp = temp->next;
    }
    pre->next = temp->next;
    delete temp;
    std::cout << "\nNode deleted from the position";
}

int main() {
    Linkedlist list;

    char choice;
    int position, number;
    int id, pos;
    std::string name;

    do {
        std::cout << "Menu:\n1. Insert from beginning\n2. Insert from end\n3. Insert from mid\n4. Delete from beginning\n5. Delete from mid\n6. Delete from end\n7. Exit\nEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case '1': {
            std::cout << "Enter the ID and Name: ";
            std::cin >> id >> name;
            list.insertat_beg(id, name);
            break;
        }
        case '2': {
            std::cout << "Enter the ID and Name: ";
            std::cin >> id >> name;
            list.insertat_end(id, name);
            break;
        }
        case '3': {
            std::cout << "Enter the position, ID, and Name: ";
            std::cin >> pos >> id >> name;
            list.insertat_position(id, name, pos);
            break;
        }
        case '4': {
            list.deleteat_beg();
            break;
        }
        case '5': {
            std::cout << "Enter the position: ";
            std::cin >> position;
            list.deleteat_mid(position);
            break;
        }
        case '6': {
            list.deleteat_end();
            break;
        }
        case '7': {
            exit(0);
            break;
        }
        default:
            std::cout << "Invalid choice";
        }

        list.traverse();
    } while (choice != '7');

    return 0;
}
