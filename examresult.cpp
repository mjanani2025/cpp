#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int rno;
	char sname[5];
	double m1,m2;
	double total,avg;
	int result;
	cout << endl << "Enter following inputs for Exam Result Exercise";
	
	cout << endl << "Student Roll no: ";
	cin >> rno;  
	
	cout << endl << "Student Name: ";
	cin >> sname;
	
	cout << endl << "Mark-1: ";
	cin >> m1;
	
	cout << endl << "Mark-2: ";
	cin >> m2;
	
	total = m1 + m2;
	avg = total /2;
	result = m1 > 34.34 && m2 >34.4;
	cout << endl << "Total: " <<total;
	cout << endl << "Average: " << avg;
	cout << endl << "Result: "<<(result == 0 ? "Fail" : "Pass");
	getch();
	return 0;
}
	
	

