#include <iostream>
#include <vector>

using namespace std;

class LibraryItem {
public:
    LibraryItem(const string& title, const string& author, int year)
        : title(title), author(author), year(year) {}

    virtual void displayInfo() const = 0;

protected:
    string title;
    string author;
    int year;
};

class Book : public LibraryItem {
public:
    Book(const string& title, const string& author, int year, const string& genre)
        : LibraryItem(title, author, year), genre(genre) {}

    void displayInfo() const override {
        cout << "Book - Title: " << title << ", Author: " << author << ", Year: " << year << ", Genre: " << genre << endl;
    }

private:
    string genre;
};

class DVD : public LibraryItem {
public:
    DVD(const string& title, const string& director, int year, int duration)
        : LibraryItem(title, director, year), duration(duration) {}

    void displayInfo() const override {
        cout << "DVD - Title: " << title << ", Director: " << author << ", Year: " << year << ", Duration: " << duration << " minutes" << endl;
    }

private:
    int duration;
};

class Magazine : public LibraryItem {
public:
    Magazine(const string& title, const string& editor, int year, int issueNumber)
        : LibraryItem(title, editor, year), issueNumber(issueNumber) {}

    void displayInfo() const override {
        cout << "Magazine - Title: " << title << ", Editor: " << author << ", Year: " << year << ", Issue Number: " << issueNumber << endl;
    }

private:
    int issueNumber;
};

class Library {
public:
    void addItem(LibraryItem* item) {
        items.push_back(item);
    }

    void displayAllItems() const {
        for (const auto& item : items) {
            item->displayInfo();
        }
    }

private:
    vector<LibraryItem*> items;
};

int main() {
    Library library;

    Book book1("To Kill a Mockingbird", "Harper Lee", 1960, "Fiction");
    DVD dvd1("The Matrix", "Lana Wachowski", 1999, 136);
    Magazine magazine1("Time", "Edward Felsenthal", 2022, 4795945);

    library.addItem(&book1);
    library.addItem(&dvd1);
    library.addItem(&magazine1);

    library.displayAllItems();

    return 0;
}
