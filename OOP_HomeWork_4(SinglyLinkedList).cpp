#include "List.h"

int main()
{
	srand(time(0));
	//List A;
	/*A.AddToHead(7);
	A.AddToHead(6);
	A.AddToHead(5);
	A.AddToHead(4);
	A.AddToHead(3);
	A.AddToHead(2);
	A.AddToHead(1);
	A.Print();
	A.InsertInto(2, 4);
	A.Print();
	A.DeleteFromHead();
	A.Print();
	A.DeleteFromTail();
	A.Print();
	A.DeleteByIndex(2);
	A.Print();
	A.Clear();
	A.Print();*/

	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	A.AddToTail(8);
	A.Print();
	cout << A.IndexOf(0) << endl;*/

	/*List A;
	cout << boolalpha << A.IsEmpty() << endl;
	A.AddToHead(2);
	cout << boolalpha << A.IsEmpty() << endl;*/


	// переворот списка

	/*List A;
	for (int i = 1; i < 6; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	A.Reverse();
	A.Print();*/

	// сортировка по увеличению

	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(rand() % 10);
	}
	A.Print();
	A.SortAsc();
	A.Print();
	A.AddToTail(4);
	A.Print();
	A.AddToHead(2);
	A.Print();
	A.SortAsc();
	A.Print();*/

	// сортировка по убыванию 
	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(rand() % 10);
	}
	A.Print();
	A.SortDesc();
	A.Print();*/

	// замена  числа по индексу

	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(rand() % 10);
	}
	A.Print();
	A.SetAt(2, 99);
	A.Print();*/

	// перемешивание списка

	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	A.Shuffle();
	A.Print();*/
	
	// сравнение двух списков

	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	List B;
	for (int i = 0; i < 10; i++)
	{
		B.AddToHead(i);
	}
	B.Print();
	cout << boolalpha << A.Equals(B) << endl;
	cout << endl;
	cout << "=======================\n";
	List C;
	for (int i = 0; i < 10; i++)
	{
		C.AddToHead(i);
	}
	C.Print();
	List D;
	for (int i = 0; i < 9; i++)
	{
		D.AddToHead(i);
	}
	D.Print();
	cout << boolalpha << C.Equals(D) << endl;
	cout << endl;
	cout << "=======================\n";
	List E;
	for (int i = 0; i < 10; i++)
	{
		E.AddToHead(i);
	}
	E.Print();
	List F;
	for (int i = 0; i < 10; i++)
	{
		F.AddToHead(i+1);
	}
	F.Print();
	cout << boolalpha << E.Equals(F) << endl;*/

	// метод Clone

	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	List B;
	B.Print();
	B.AddToHead(2);
	B.Print();
	B.Clone(A);
	B.Print();*/

	// метод Contains

	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	cout << boolalpha << A.Contains(15) << endl;
	A.AddToHead(15);
	A.Print();
	cout << boolalpha << A.Contains(15) << endl;*/
	

	// Метод добавление одной строки к другой
	/*
	List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	List B;
	for (int i = 0; i < 10; i++)
	{
		B.AddToHead(i);
	}
	B.Print();
	A.MergeWith(B);
	A.Print();
	B.Clear();
	A.Print();
	List C;
	for (int i = 0; i < 5; i++)
	{
		C.AddToHead(rand() % 10);
	}
	C.Print();
	A.MergeWith(C);
	A.Print();
	C.Clear();
	A.Print();*/

	// перевод из списка в массив

	/*List A;
	cout << "List: ";
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(rand() % 10);
	}
	A.Print();
	int* arr = new int[A.GetCount()];
	A.ToArray(arr);
	cout << "Array: ";
	for (int i = 0; i < A.GetCount(); i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;*/
	

	// перегрузка операторов сравнения

	/*List A;
	for (int i = 0; i < 15; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	List B;
	for (int i = 0; i < 10; i++)
	{
		B.AddToHead(i);
	}
	B.Print();
	bool result = A >= B;
	cout << boolalpha << result << endl;*/

	// оператор []

	
	/*List A;
	A.Print();
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	for (int i = 0; i < A.GetCount(); i++)
	{
		cout << A[i] << ",  ";
	}*/

	// конструктор копирования 
	
	/*List A;
	for (int i = 0; i < 12; i++)
	{
		A.AddToHead(rand() % 10);
	}
	A.Print();
	List B(A);
	B.Print();*/




	// оператор =

	
	/*List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(rand() % 10);
	}
	A.Print();
	List B;
	B = A;
	B.Print();*/

	// оператор +

	List A;
	for (int i = 0; i < 10; i++)
	{
		A.AddToHead(i);
	}
	A.Print();
	List B(A);
	B.Print();
	A + B;
	A.Print();
	A += B;
	A.Print();





	





	return 0;
}
