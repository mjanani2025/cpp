#include <iostream>
#include <string.h>

using namespace std;

class ClsMdlER {
	private:
		int rno;
		char sname[5];
		double m1,m2;
	public:
		void setRno(int rno) {
			this -> rno = rno;
		}
		int getRno() {
			return rno;
		}
		ClsMdlER() {
			rno = 0;
			sname[0] = '\0';
			m1 = m2 = 0;
			cout << endl << "Process: Default Constructor";
		}
		ClsMdlER(int rno, const char* sname, double m1, double m2);
		void setSname(const char* sname) {
			strcpy(this -> sname,sname);
		}
		const char* getSname() {
			return sname;
		}
		void setM1(double m1);
		double getM1();
		
		void setM2(double m2);
		double getM2();
};
void ClsMdlER :: setM1(double m1) {
	this -> m1 = m1;
}
double ClsMdlER :: getM1() {
	return m1;
}
void ClsMdlER :: setM2(double m2) {
	this -> m2 = m2;
}
double ClsMdlER :: getM2() {
	return m2;
}
ClsMdlER :: ClsMdlER(int rno,const  char* sname, double m1, double m2) {
	this -> rno = rno;
	strcpy(this -> sname,sname);
	this -> m1 = m1;
	this -> m2 = m2;
	cout << endl << "Process:Overload Constructor";
}
