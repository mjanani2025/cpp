#include <iostream>
using namespace std;
class ClsMdlAO {
private:
	double fno, sno;
public:
	ClsMdlAO() {
		cout << endl << "Process: Default Constructor";
	}
	ClsMdlAO(double first, double second) {
		fno=first;
		sno=second;
		cout << endl << "Process: Overload Constructor";
	}
	double getFno() {
		return fno;
	}
	void setFno(double fno) {
		this->fno = fno;
	}
	double getSno() {
		return sno;
	}
	void setSno(double sno) {
		this->sno = sno;
	}
	
};
