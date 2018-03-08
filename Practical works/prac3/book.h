#include <string>

using namespace std;

class Books {
    public:

        void set_title(string book_title)
        {
            title = book_title;
        }

        string get_title()
        {
            return title;
        }

        void set_author_name(string book_author_name)
        {
            author_name = book_author_name;
        }

        string get_author_name()
        {
            return author_name;
        }

        void set_book_genre(string book_genre)
        {
            genre = book_genre;
        }

        string get_book_genre()
        {
            return genre;
        }

        void set_book_pages(int book_pages)
        {
            pages = book_pages;
        }

        float get_book_pages()
        {
            return pages;
        }


    private:
        int pages;
        string title;
        string author_name;
        string genre;
};
