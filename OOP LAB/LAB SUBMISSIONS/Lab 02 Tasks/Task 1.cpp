#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string author;
    string isbn;
    bool isAvailable;

public:
    void input() {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter ISBN: ";
        getline(cin, isbn);

        isAvailable = true;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Status: " << (isAvailable ? "Available" : "Borrowed") << endl;
        cout << "--------------------------" << endl;
    }

    string getISBN() const {
        return isbn;
    }

    bool getAvailability() const {
        return isAvailable;
    }

    void setAvailability(bool status) {
        isAvailable = status;
    }

    static void borrowBook(Book books[], int size, const string& code) {
        for (int i = 0; i < size; i++) {
            if (books[i].getISBN() == code) {
                if (books[i].getAvailability()) {
                    books[i].setAvailability(false);
                    cout << "Book Borrowed Successfully" << endl;
                } else {
                    cout << "Book Already Borrowed" << endl;
                }
                return;
            }
        }
        cout << "Book Not Found" << endl;
    }

    static void returnBook(Book books[], int size, const string& code) {
        for (int i = 0; i < size; i++) {
            if (books[i].getISBN() == code) {
                if (!books[i].getAvailability()) {
                    books[i].setAvailability(true);
                    cout << "Book Returned Successfully" << endl;
                } else {
                    cout << "Book Was Not Borrowed" << endl;
                }
                return;
            }
        }
        cout << "Book Not Found" << endl;
    }

    static void displayAll(Book books[], int size) {
        for (int i = 0; i < size; i++) {
            books[i].display();
        }
    }
};

int main() {
    const int size = 3;
    Book books[size];
    string code;
    int choice;

    for (int i = 0; i < size; i++) {
        books[i].input();
    }

    do {
        cout << "\n1. View All Books\n2. Borrow Book\n3. Return Book\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Book::displayAll(books, size);
        } else if (choice == 2) {
            cout << "Enter ISBN: ";
            getline(cin, code);
            Book::borrowBook(books, size, code);
        } else if (choice == 3) {
            cout << "Enter ISBN: ";
            getline(cin, code);
            Book::returnBook(books, size, code);
        }

    } while (choice != 4);

    return 0;
}

