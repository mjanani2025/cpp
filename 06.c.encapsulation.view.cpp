#include <iostream>
#include <string.h>
#include "06.b.encapsulation.controller.cpp"

using namespace std;

class ClsViewER : public ClsCtrlER {
	public:
		void readData() {
			int rno;
			char sname[5];
			double m1,m2;
			
			cout << endl << "Enter following inputs for Exam Result exercise:";
			
			cout << endl << "Roll no:";
			cin >> rno;
			
			cout << endl << "Student Name:";
			cin >> sname;
			
			cout << endl << "Mark-1:";
			cin >> m1;
			
			cout << endl << "Mark-2:";
			cin >> m2;
			
			setRno(rno);
			setSname(sname);
			setM1(m1);
			setM2(m2);
		}
		void showData() {
			cout << endl << "Your Exam Result :";
			
			cout << endl << "Roll no:" <<getRno();
			cout << endl << "student Name:" << getSname();
			cout << endl << "Mark-1:" << getM1();
			cout << endl << "Mark-2:" << getM2();
			cout << endl << "Total:" << getTotal();
			cout << endl << "Average:" << getAvg();
			cout << endl << "Result:" << getResult(); 
		
		}
};
int main() {
	ClsViewER er;
	er.readData();
	er.showData();
	return 0;
}

