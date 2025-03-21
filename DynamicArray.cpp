#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main() {


	clsDynamicArray <int> MyDynamicArray(4);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);

	cout << "\nIs Empty ? " << MyDynamicArray.IsEmpty();
	cout << "\nArray Size : " << MyDynamicArray.Size();

	cout << "\nArray Item: ";
	MyDynamicArray.PrintList();


	
	MyDynamicArray.InsertAtBeginning(500);
	cout << "\n\nArray after insert 500 AT Beginning:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();


	MyDynamicArray.InsertBefor(2, 400);
	cout << "\n\nArray after insert 400 Befor 2:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertAfter(2, 22);
	cout << "\n\nArray after insert 22 After 2:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertAtEnd(600);
	cout << "\n\nArray after insert 600 AT End:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();




	system("pause>0");

}