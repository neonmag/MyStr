#include <iostream>
#include "MyString.h" // Including my class

using namespace std;

void By_value2(MyString& obj)
{
	MyString c = obj;
	c.Print();
}

MyString By_value()
{
	MyString obj("By value\n");
	return obj;
}
int main()
{
	//MyString obj1("Boryslav Linchevsky");
	//obj1.Print();
	//if (obj1.MyStrStr("Igorevich") == true) // Check on substring
	//{
	//	cout << "\nRight";
	//}
	//else
	//{
	//	cout << "\nFalse";
	//}
	//cout << "\n" << obj1.MyChr('a');
	//cout << "\nAmount of symbols: " << obj1.MyStrlen();

	//MyString obj2(20);
	//obj2.Input();
	//obj2.Print();

	//MyString obj3;
	//obj3.Input();
	//obj3.Print();

	//MyString obj4;
	//obj4.MyStrCpy(obj1);
	//obj4.Print();

	//MyString obj5("Igorevich ");
	//obj5.MyStrCat(obj1);
	//obj5.MyDelChr('r');
	//cout << "\n" << obj5.MyStrCmp(obj1);
	//obj5.Print();

	//MyString obj6 = obj1;
	//obj6.Print();

	MyString a("Hello,world\n");
	a.Print();
	MyString b = a;
	b.Print();
	By_value2(a);
	MyString r = By_value();
	r.Print();
}