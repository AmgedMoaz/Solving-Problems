#include <bits/stdc++.h>
using namespace std;

class LibraryBook {
    private:
       string title;
       string author;
       bool isBorrowed = false;
    public:
          void borrowBook() {
        if (!isBorrowed) {
            isBorrowed = true;
            cout << "You borrowed: " << title << endl;
        } else {
            cout << "Book already borrowed.\n";
        }
    }
         void returnBook() {
             cout << "You have returned the book: " << title << " by " << author << endl;
         } 
         void setTitle(const string& t) {
             title = t;
         }   
         void setAuthor(const string& a) {
             author = a;
            }
            string getTitle() const {
                return title;
            }
            string getAuthor() const {
                return author;
            }
};

class Library {
private:
    vector<LibraryBook> books;

public:
    void addBook(const LibraryBook& book) {
        books.push_back(book);
    }

    LibraryBook* searchBook(const string& title) {
        for (auto& book : books) {
            if (book.getTitle() == title) {
                return &book;
            }
        }
        return nullptr;
    }

    void displayBooks() {
        for (const auto& book : books) {
            cout << book.getTitle() << " by "
                 << book.getAuthor() << endl;
        }
    }
};

int main ()
{
    Library library;

    LibraryBook book1;
    book1.setTitle("The Great Gatsby");
    book1.setAuthor("F. Scott Fitzgerald");

    LibraryBook book2;
    book2.setTitle("1984");
    book2.setAuthor("George Orwell");

    library.addBook(book1);
    library.addBook(book2);

    library.displayBooks();

    LibraryBook* found = library.searchBook("1984");

    if (found) {
        found->borrowBook();
        found->returnBook();
    } else {
        cout << "Book not found.\n";
    }
    return 0;
}