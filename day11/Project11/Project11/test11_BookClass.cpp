#include <iostream>
#include <cstring>

using namespace std;

class Book
{
	char* ISBN;
	char* author;
	char* title;

public:
	Book()
	{
		ISBN = NULL;
		author = NULL;
		title = NULL;

	}

	Book(const char* myisbn, const char* myauthor, const char* mytitle)
	{
		ISBN = new char[strlen(myisbn) + 1];
		strcpy(ISBN, myisbn);

		author = new char[strlen(myauthor) + 1];
		strcpy(author, myauthor);

		title = new char[strlen(mytitle) + 1];
		strcpy(title, mytitle);

	}



};
