#include <iostream>
#include <string>
using namespace std;


struct Student {
	int Roll_Number;
	string Name;
	int Marks[3];
	float CGPA;
};


void display (Student* s, int n) {
	int i;
	cout <<"Students with CGPA >= 3.0"<< endl;
	for(i = 0; i < n; i++) {
		if(s[i].CGPA >= 3.0) {
			cout << i + 1 <<". "<<s[i].Name <<" - CGPA: "<<s[i].CGPA << endl;
		}
	}
}

void topperformer (Student* s, int n) {
	int i;
	int top = 0;
	for(i = 1; i < n; i++) {
		if(s[i].CGPA > s[top].CGPA) {
			top = i;
		}
	}
	
	cout << "Top performer: "<< s[top].Name<< " with CGPA: "<<s[top].CGPA<<endl;
}


float CalGPA (int marks []) {
	int i;
	int sum = 0;
	for(i = 0; i < 3; i++) {		
		sum = sum + marks [i];
	}
	return sum / 30.0; 
}

void InputDetails (Student* s, int n) {
	int i, j;
	
	for(i = 0; i < n; i++) {
		cout << "Enter details for Student " << i + 1 <<": "<< endl << endl;
		cout<< "Roll Number: ";
		cin >> s[i].Roll_Number;
		
		cin.ignore();
		cout << "Name: ";
		getline(cin, s[i].Name);
			cout <<"Marks ( 3 Subjects ): ";
			cin >> s[i].Marks[0] >> s[i].Marks[1] >> s[i].Marks[2];	
			
			cout << endl;
			
			s[i].CGPA = CalGPA(s[i].Marks);
			
			cout <<"Calculated CGPA: " << s[i].CGPA << endl << endl;
	}
}


int main () {
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	cout << endl;
	Student* s = new Student[n];
	
	InputDetails (s, n);
	display (s, n);
	topperformer (s, n);
	
	delete [] s;
	
	
	return 0;
	
}



