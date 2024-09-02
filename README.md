Customer Queue Management System Using Linked List
This project implements a customer queue management system using a singly linked list in C++. The system is designed to handle customer data, such as IDs and names, and provides various operations to manage the queue efficiently.

Features
Insert Customer:
Insert a new customer at the beginning of the queue.
Insert a new customer at the end of the queue.
Insert a new customer at a specified position in the queue.

Delete Customer:
Remove the customer at the beginning of the queue.
Remove the customer at the end of the queue.
Remove the customer at a specified position in the queue.

View Queue:
Display the current state of the queue, showing all customer IDs and names in the order they appear.

Classes and Methods
Node Class
Attributes:
int data: Stores the customer ID.
std::string name: Stores the customer's name.
Node* next: A pointer to the next node in the list.

Linkedlist Class
Methods:
void insertat_beg(int, std::string): Inserts a new customer at the beginning of the list.
void insertat_end(int, std::string): Inserts a new customer at the end of the list.
void insertat_position(int, std::string, int): Inserts a new customer at a specified position in the list.
void deleteat_beg(): Removes the customer at the beginning of the list.
void deleteat_end(): Removes the customer at the end of the list.
void deleteat_mid(int): Removes a customer at a specified position in the list.
void traverse(): Displays the current state of the queue.

How to Use
Clone the repository:

Code:
git clone https://github.com/your-username/customer-queue-management.git
cd customer-queue-management
Compile the code:

Code:
g++ -o queue_management main.cpp
Run the program:

Code:
./queue_management

Follow the menu to insert, delete, and view customers in the queue.

Example Usage::

Insert Customer at the Beginning:
Enter the customer ID and name.
The customer is added to the front of the queue.

Delete Customer from a Specific Position:
Enter the position of the customer to be removed.
The customer at that position is deleted from the queue.

View the Queue:
Displays the current state of the queue, listing all customers in order.

Contributing
Contributions are welcome! If you have any suggestions or improvements, please fork the repository and create a pull request.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Contact
For any questions or suggestions, feel free to reach out to me at dishaksejpal@gmail.com.

This README.md provides an overview of your project, including its features, how to use it, and how others can contribute. Customize it with your contact information and repository link before adding it to your GitHub project.
