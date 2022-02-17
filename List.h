#pragma once
#include "All_Libraries.h"
class List
{
public:
	struct Node
	{
		int data = 0;
		Node* next = nullptr;
	};
private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int count = 0;
public:
	List();
	List(const List& original); 
	~List();
	void AddToHead(int data); // ���������� ���� � ������ ������
	void AddToTail(int data); // ���������� ���� � ����� ������
	void InsertInto(int data, int position); // ���������� ���� � ������ �� ������ �������
	void DeleteFromHead(); // ������� ������� �� ������ ������
	void DeleteFromTail(); // �������� �� ����� ������
	void DeleteByIndex(int position); // �������� �� �������
	void Clear(); // �������  
	void Print() const;
	int GetCount() const;
	int IndexOf(int data) const;
	bool IsEmpty();
	void Reverse(); // ��������� ������� ���������� ������
	void SortAsc(); // ���������� �� ����������
	void SortDesc(); // ���������� �� ��������
	void Shuffle(); // ��������� ����������� ��������� ������
	void SetAt(int index, int number); // ��������� �������� �� ���������� �������
	bool Equals(const List& other); // ��������� ���� �������
	List& Clone(const List& original); // ����������� ������ ������ � ������
	bool Contains(int number); // �������� �� ��������� � ������ ����� ����������� � ���������
	List& MergeWith(const List& other); // ��������� � ����� ������ ������ ������
	int& ToArray(int*& arr); // �� ������ � ������
	//���������� ���������� ��������� 
	bool operator < (const List& other);
	bool operator > (const List& other);
	bool operator <= (const List& other);
	bool operator >= (const List& other);
	bool operator == (const List& other);
	bool operator != (const List& other);
	List& operator = (const List& other);
	int operator [] (int index);
	List& operator +(const List& other);
	List& operator +=(const List& other);

	
};

