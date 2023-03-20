#include <iostream>
#include "List.h"
#include "Stack.h"
using namespace std;

int main()
{
	List linkedList1;
	linkedList1.insert(0, "Phung Le Hoang Ngoc");
	linkedList1.insert(1, "Huynh Cao Khoi");
	linkedList1.insert(2, "Truong Anh Khoa");
	linkedList1.insert(3, "Tran Dinh Nhat");

	cout << "Xuat danh sach: " << endl;
	linkedList1.print();
	cout << endl;

	linkedList1.insert(2, "Pham Le Tu Nhi");
	cout << "Xuat danh sach: " << endl;
	linkedList1.print();
	cout << endl;

	linkedList1.erase(0);
	cout << "Xuat danh sach: " << endl;
	linkedList1.print();
	cout << endl;

	Stack s;
	s.push("Phung Le Hoang Ngoc");
	s.push("Huynh Cao Khoi");
	s.push("Tran Dinh Nhat");
	s.push("Truong Anh Khoa");

	cout << "s.pop" << endl;;
	s.pop();
	cout << endl;
	cout << "s.top (expected: Tran Dinh Nhat)" << endl;
	cout << s.top() << endl;

	cout << "s.size() = ";
	cout << s.size();
	return 0;
}