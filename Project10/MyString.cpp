#include "MyString.h"
#include <iostream>

using namespace std;

int MyString::countable = 0; // Initializating of static line

MyString::MyString() // Constructor by default
{
	if (this->str != nullptr)
	{
		delete[]this->str;
	}
	countable++;
	this->lenght = 80;
	this->str = new char[lenght + 1];
}

MyString::MyString(int lenght) // Constructor with integer
{
	this->lenght = lenght;
	countable++;
	if (this->str != nullptr)
	{
		delete[]this->str;
	}
	this->str = new char[lenght + 1];
}

MyString::MyString(const char* str) // Constructor with symbols
{
	countable++;
	if (this->str != nullptr)
	{
		delete[]this->str;
	}
	this->lenght = strlen(str) + 1;
	this->str = new char[this->lenght];
	strcpy_s(this->str, this->lenght, str);
}

void MyString::Input()
{
	char temp[256]; // Temp char array for our "String"
	cout << "\nEnter your string: ";
	cin.getline(temp, 256);
	this->lenght = strlen(temp) + 1;
	strcpy_s(this->str, strlen(temp) + 1, temp);
}

void MyString::Print()
{
	cout << "\nCount of objects: " << countable;
	cout << "\nString: " << this->str;
}

void MyString::MyStrcpy(MyString& obj) // Copy string
{
	for (int i = 0; i < obj.lenght; i++)
	{
		this->str[i] = obj.str[i];
	}
}

bool MyString::MyStrStr(const char* str) // Finding substring
{
	int temp = strlen(str);
	int counter = 0;
	for (size_t i = 0; i < this->lenght; i++)
	{
		if (str[i] == this->str[i])
		{
			counter++;
		}
		else if (counter == temp)
		{
			return true;
		}
		else if (str[i] != this->str[i])
		{
			counter = 0;
		}
		else if (i == this->lenght - 1 && counter != temp)
		{
			return false;
		}
	}
}

int MyString::MyChr(char c) // Finding index of our symbol
{
	for (int i = 0; i < this->lenght; i++)
	{
		if (this->str[i] == c)
		{
			return i;
		}
	}
	return -1;
}

int MyString::MyStrlen() // Finding lenght of our string
{
	int counter = 0;
	while (this->str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

void MyString::MyStrCat(MyString& obj) // Concatenation
{
	char* temp = new char[(strlen(this->str) + 1) + strlen(obj.str)]; // Temp array for concatenation by 2 strings
	for (int i = 0; i < strlen(this->str); i++)
	{
		temp[i] = this->str[i];
	}
	for (int i = strlen(this->str); i < strlen(obj.str) + strlen(this->str); i++)
	{
		temp[i] = obj.str[i - strlen(this->str)];
	}
	temp[strlen(obj.str) + strlen(this->str)] = '\0';
	cout << "\n" << temp;
}

void MyString::MyDelChr(char c) // Deleting symbol
{
	char* temp = new char[strlen(this->str) + 1];
	int tmp = 0;
	for (int i = 0; i < strlen(this->str + 1); i++)
	{
		if (this->str[i] == c)
		{
			temp[tmp] = '\b';
		}
		else
		{
			temp[tmp] = this->str[i];
			tmp++;
		}
	}
	temp[strlen(this->str) - 2] = '\0';
	cout << "\n" << temp;
}

int MyString::MyStrCmp(MyString& obj) // Comparing 2 strings
{
	if (strlen(this->str) > strlen(obj.str))
	{
		return 1;
	}
	else if(strlen(this->str) < strlen(obj.str))
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

MyString::~MyString() // Destructor
{
	delete[]this->str;
	this->str = nullptr;
}