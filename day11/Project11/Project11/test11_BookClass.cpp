#include <iostream>
#include <cstring>

using namespace std;

class Book
{
	string ISBN, author, title;

public:
	Book()
	{ }

	Book(string myisbn, string myauthor, string mytitle)
	{
		ISBN = myisbn;

		author = myauthor;

		title = mytitle;

	}
	void show();
	string getName() { return title; }
	string getAut() { return author; }
	string getISBN() { return ISBN; }
};

	void Book::show() {
		cout << "책제목 : " << title << endl;
		cout << "저자 : " << author << endl;
		cout << "ISBN : " << ISBN << endl;
	}


