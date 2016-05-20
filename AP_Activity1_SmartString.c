#include <conio.h>
#include <iostream>
#include <ctime>
using namespace std;

class SmartString
{

public:								// function declaration
	void append(char,string);
	char charAt(int, string);
	int strLength(string);

};

void SmartString::append(char str_append, string default_string)
{
	string updated = default_string + str_append;
	//cout << "string is"+ updated;
}

char SmartString::charAt(int int_at, string default_string)
{
	char char_at;
	char_at = 's';
	for (int i = 0; i < int_at; i++){
		char_at = default_string[i];
	}
	return char_at;
}

int SmartString::strLength(string default_string)
{
	int st_length = 0;

	return st_length;
}
int main()
{
	SmartString rc;
	string default_string="Default_Word";
	char str1;
	char char_at;
	int int_at=0;
	int length = 0;
	char choice;
	for (;;)					//Infinite Loop.
	{
		cout << "Please enter \n\t 1: To append string.\n\t 2: To Find char at.\n\t 3: To Find length.\n\t 4: To exit at anytime. " << endl;
		cin >> choice;
		switch (choice)
		{
		case '1':			//for append string
	
			cout << "Enter character to Append!\n";
			cin >> str1;
			rc.append(str1, default_string);

			_getch();
			break;

		case '2':			//for Finding char at
			cout << "\n\nEnter number to find character at that position!  " << endl;
			cin >> int_at;
			char_at = rc.charAt(int_at, default_string);
				
			cout << "\n\nCharacter is:  "<<char_at << endl;
			_getch();
			break;
		case '3':			//for Finding length

			length = rc.strLength(default_string);

			cout << "\n\nLength is:  " << length << endl;
			_getch();
			break;
		case '4':						//to exit
			return 0;
		default:
			cout << "Sorry wrong no entered" << endl;
		}
		system("cls");				//Clearing screen
	}							//End for loop
	return 0;
}