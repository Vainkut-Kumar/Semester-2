#include <iostream>
using namespace std;

int main () {
	int marks[5];
	int sum = 0;
	float average = 0;
	int i = 0;
	
	cout << "Enter marks for 5 subjects: " << endl << endl;
	for(i = 0; i < 5; i++) {
		cout << "Subject " << i + 1<<":"<<" ";
		cin >> marks[i];
		sum = sum + marks[i];
	}
	average = sum / 5.0;
	
	cout <<"Total marks: "<< sum << endl;
	cout  <<"Average marks: "<< average << endl;
	
	if(average >= 50) {
		cout <<"Result: PASS"<< endl;
	}
	else {
		cout <<"Result: FAIL"<< endl;
	}
	
	return 0;
}
