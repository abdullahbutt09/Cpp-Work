#include <iostream>
using namespace std;

class book
{
protected:
    int book_id;
    string book_name;
    double book_price;

public:
    void input()
    {
        cout << "Enter book ID: ";
        cin >> book_id;
        cout << "Enter book name: ";
        cin >> book_name;
        cout << "Enter book price: ";
        cin >> book_price;
    }

    void output()
    {
        cout << "Book ID: " << book_id << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Book Price: " << book_price << "$" << endl;
    }
};

class writer : public book
{
    string author_name;
    string address;
    int books_written;

    book bok1[5];

public:
    void input()
    {
        cout << "Enter author name: ";
        cin >> author_name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter number of books written: ";
        cin >> books_written;

        cout << endl;
        cout << "Now you have to enter details for " << books_written << " books writen by " << author_name << endl;
        cout << endl;

        for (int i = 0; i < books_written; i++)
        {
            bok1[i].input();
            cout << endl;
        }
    }

    void output()
    {
        cout << "Author Name: " << author_name << endl;
        cout << "Address: " << address << endl;
        cout << "Number of Books Written: " << books_written << endl;
        cout << "The information about " << books_written << "books written by" << author_name << endl;
        cout << endl;
        for (int i = 0; i < books_written; i++)
        {
            bok1[i].output();
            cout << endl;
        }
    }
};

int main()
{
    writer w;
    w.input();
    w.output();
}
