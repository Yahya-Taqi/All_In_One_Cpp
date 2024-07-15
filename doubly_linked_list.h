#pragma once
#include <iostream>
using namespace std;

template <typename T>
struct Node
{
	T value;
	Node<T>* next;
	Node<T>* prev;

	Node() {}
	Node(T val) : value(val), next(nullptr), prev(nullptr) {}
};

template <typename T>
class DoublyLinkedList
{
private:
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;

public:
	DoublyLinkedList() = default;
	// O(1)
	void InsertAtHead(T item)
	{
		if (head == nullptr)
		{
			Node<T>* newNode = new Node<T>(item);
			head = tail = newNode;
			return;
		}
		else
		{
			Node<T>* newHead = new Node<T>(item);
			newHead->next = head;
			head->prev = newHead;
			head = newHead;
		}
	}

	// O(1)
	void InsertAtTail(T item)
	{
		if (tail == nullptr)
		{
			Node<T>* newNode = new Node<T>(item);
			head = tail = newNode;
		}
		else
		{
			Node<T>* newTail = new Node<T>(item);
			tail->next = newTail;
			newTail->prev = tail;
			tail = newTail;
		}
	}

	// O(1)
	void DeleteAtHead()
	{
		if (head == nullptr) { cout << "Nothing to delete!" << endl; return; }
		else
		{
			Node<T>* temp = head;
			head = head->next;
			delete temp;
			head->prev = nullptr;
		}
	}

	// O(1)
	void DeleteAtTail()
	{
		if (tail == nullptr) { cout << "Nothing to delete!" << endl; return; }
		else
		{
			Node<T>* temp = tail;
			tail = tail->prev;
			delete temp;
			tail->next = nullptr;
		}
	}

	// O(n)
	void DisplayHeadToTail(const char& separator = ' ')
	{
		if (head == nullptr) { cout << "List is empty!" << endl; return; }
		Node<T>* tempNode = head;

		while (tempNode != nullptr)
		{
			cout << tempNode->value << separator;
			tempNode = tempNode->next;
		}
		cout << endl;
	}

	// O(n)
	void DisplayTailToHead(const char& separator = ' ')
	{
		if (tail == nullptr) { cout << "Nothing to display!" << endl; return; }
		else
		{
			Node<T>* tempNode = tail;
			while (tempNode != nullptr)
			{
				cout << tempNode->value << separator;
				tempNode = tempNode->prev;
			}
			cout << endl;
		}
	}
};
