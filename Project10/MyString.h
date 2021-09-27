#pragma once
class MyString
{
	char* str; // Lines
	int lenght;
	static int countable;
public:
	MyString(); // Constructor by default
	MyString(int lenght); // Constructor with integer
	MyString(const char* str); // Constructor with symbols
	MyString(const MyString& obj); // Copy constructor
	void Input(); // Inputing
	void Print(); // Printing
	bool MyStrStr(const char* str); // Check substring
	int MyChr(char c); // Finding symbol
	int MyStrlen(); // Find amount of symbols
	void MyStrCat(MyString& obj); // Concatenation
	void MyStrCpy(MyString& obj); // Copy string
	void MyDelChr(char c); // Deleting symbol
	int MyStrCmp(MyString& obj); // Comparing strings
	MyString(MyString&& obj); // Move constructor
	MyString& operator =(MyString&& obj); // Move with =
	~MyString(); // Destructor
};