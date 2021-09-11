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
	void Input(); // Inputing
	void Print(); // Printing
	void MyStrcpy(MyString& obj); // Copy string
	bool MyStrStr(const char* str); // Check substring
	int MyChr(char c); // Finding symbol
	int MyStrlen(); // Find amount of symbols
	void MyStrCat(MyString& obj); // Concatenation
	void MyDelChr(char c); // Deleting symbol
	int MyStrCmp(MyString& obj); // Comparing strings
	~MyString(); // Destructor
};