#include <iostream>
#include <string>
#include "List.h"
using namespace std;

List::List()
{
	count = 0;
	Head = NULL;
}

List::~List()
{
    Node* current = Head;
    while (current != nullptr) 
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
}
Node* List::makeNode(const string& value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}

void List::insert(int pos, const string& value)
{
    if (pos < 0 || pos > count) 
    {
        cout << "Invalid position" << endl;
        return;
    }
    Node* newNode = makeNode(value);
    if (pos == 0) 
    {
        newNode->next = Head;
        Head = newNode;
    }
    else 
    {
        Node* current = Head;
        for (int i = 0; i < pos - 1; i++) 
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    count++;
}

void List::erase(int pos) 
{
    if (pos < 0 || pos >= count) 
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 0) 
    {
        Node* temp = Head;
        Head = Head->next;
        delete temp;
    }
    else 
    {
        Node* current = Head;
        for (int i = 0; i < pos - 1; i++) 
        {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
    count--;
}

string List::get(int pos) const
{
    if (pos < 0 || pos >= count) 
    {
        cout << "Invalid position" << endl;
        return "";
    }
    Node* current = Head;
    for (int i = 0; i < pos; i++) 
    {
        current = current->next;
    }
    return current->data;
}

void List::print() const
{
    for (Node* current = Head; current != nullptr; current = current->next)
    {
        cout << current->data << " ";
        cout << endl;
    }
}

int List::size() const
{
    return count;
}

