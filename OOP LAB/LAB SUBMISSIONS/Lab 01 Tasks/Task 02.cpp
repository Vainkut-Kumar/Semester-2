#include <iostream>
#include <string>
using namespace std;

struct Book {
	int Book_ID;
	string Book_Tittle;
	string Author_Name;
	float Price;
};


int main () {
	int i;
	float sum = 0.00; 
	Book b[3];
	
	cout << "Enter details for 3 books: "<< endl << endl;
	
	for(i = 0; i < 3; i++) {
		cout << "Book "<< i + 1 <<": "<< endl;
		cout << "ID: ";
		cin >> b[i].Book_ID;
		cin.ignore();
		cout << "Title: ";
		getline(cin, b[i].Book_Tittle);
		cout << "Author: ";
		getline(cin, b[i].Author_Name);
		cout <<"Price: ";
		cin >> b[i].Price;
		sum = sum + b[i].Price;
		
		cout << endl;
	}
	
	for( i = 0; i < 3; i++) {
		cout << "Book "<< i + 1 <<": "<<endl;
		cout << "ID: " << b[i].Book_ID << endl;
		cout << "Book Tittle: " << b[i].Book_Tittle << endl;
		cout << "Author Name: " << b[i].Author_Name << endl;
		cout << "Price " << b[i].Price << endl;
		
		
		cout << endl;
	}
	
	cout << "Total price of All the books: $" << sum << endl;
	
	return 0;
	
	
}
