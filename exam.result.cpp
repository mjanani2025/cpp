#include <iostream>
#include <string.h>

using namespace std;

class ClsExamResult {
	private:
		int rno;
		char sname[5];
		double m1,m2;
    
    public:
    	ClsExamResult() {
    		cout << endl << "Default Constructor";
    		rno = 0;
    		sname[0] ='\0';
    		m1=m2=0;
    		
		}
		ClsExamResult (int rno, char sname[5], double m1, double m2) {
			this->rno = rno;
			strcpy(this->sname,sname);
			this -> m1 = m1;
			this -> m2 = m2;
			cout << endl << "Overload Consructor";
			
		}
		void setRno(int rno) {
			this -> rno = rno;
		}
		int getRno() {
			return rno;
		}
		void setSname(const char* sname) {
			strcpy(this -> sname, sname);
		}
		const char* getSname() {
			return sname;
		}
		void setM1(double m1) {
			this -> m1 = m1;
		}
		double getM1() {
			return m1;
		}
		void setM2(double m2) {
			this -> m2 = m2;
		}
		double getM2() {
			return m2;
		}
		double getTotal() {
			return m1 + m2;
		}
		double getAverage() {
			return (m1 + m2) / 2;
		}
		const char* getResult() {
			return (m1>34.4 && m2>34.4) ? "Pass" : "Fail";
		}
		void show() {
			cout << endl << "\n ExamResult output:" <<endl;
			cout << endl << "Student name.:" << sname;
			cout << endl << "Mark-1:" << m1;
			cout << endl << "Mark-2:" <<m2;
			cout << endl << "Total:" <<getTotal();
			cout << endl << "Average:" <<getAverage();
			cout << endl << "Result:" << getResult();
		}
};
int main() {
	ClsExamResult er(1001, "x5", 56.5, 63);
	er.show();
	cout << endl << "Before update, M2:" << er.getM2();
	er.setM2(20);
	er.show();
	
	cout << endl << "After update, M2: " << er.getM2();
	
	
	cout << endl << "Exam Result..." ;
	cout << endl << "Roll No:" << er.getRno();
	cout << endl << "Student name.:" << er.getSname();
	cout << endl << "Mark-1:" << er.getM1();
	cout << endl << "Mark-2:" <<er.getM2();
	cout << endl << "Total:" <<er.getTotal();		
	cout << endl << "Average:" <<er.getAverage();
	cout << endl << "Result:" << er.getResult();
	return 0;
	
}
