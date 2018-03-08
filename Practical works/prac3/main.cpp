#include <iostream>
#include "book.h"

int main()
{
    Books *book = new Books;

    string title;
    string author_name;
    string genre;
    int pages;

    cout << "Enter book title: ";
    getline(cin, title);

    cout << "Enter the author of the book: ";
    getline(cin, author_name);

    cout << "Enter the genre of the book: ";
    getline(cin, genre);

    cout << "Enter the number of pages: ";
    cin >> pages;

    book->set_title(title);
    book->set_author_name(author_name);
    book->set_book_genre(genre);
    book->set_book_pages(pages);

    cout << endl << " Book " << endl;
    cout << "Title: " << book->get_title() << endl;
    cout << "Author: " << book->get_author_name() << endl;
    cout << "Genre: " << book->get_book_genre() << endl;
    cout << "Number of pages: " << book->get_book_pages() << endl;

    delete book;
    return 0;
}
