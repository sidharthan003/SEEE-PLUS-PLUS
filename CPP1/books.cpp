#include <iostream>
#include <vector>
using namespace std;


class Book {
private:
    	string title;
    	string author;
    	string ISBN;
    	double price;

public:

    	Book(string t, string a, string i, double p) {
			title = t;
			author = a;
			ISBN = i;
			price = p;
		}

    	string getTitle() const { return title; }
    	string getAuthor() const { return author; }
    	string getISBN() const { return ISBN; }
    	double getPrice() const { return price; }


    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
    void setISBN(string i) { ISBN = i; }
    void setPrice(double p) { price = p; }

  
    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author << ", ISBN: " << ISBN << ", Price: $" << price << endl;
    }
};
int main() {

    Book book("The Great Gatsby", "F. Scott Fitzgerald", "978-0743273565", 10.99);
    book.displayInfo();}