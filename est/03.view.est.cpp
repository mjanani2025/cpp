#include <iostream>
#include "03.acontroller.est.cpp"
using namespace std;
class ClsVwEST : public ClsCtrlEST {
	public:
		void readData() {
			cout << endl << "Enter following inputs for Enployee salary Tax" <<endl;
			int eid;
			char ename[5];
			double sal;
			
			cout << endl << "Employee ID: ";
			cin >> eid;
			
			cout << endl << "Employee Name: ";
			cin >> ename;
			
			cout << ename << "Employee Salary: ";
		    cin >>sal;
		    
		    setEid(eid);
		    setEname(ename);
		    setSal(sal);
		}
		void showData() {
			cout << endl << endl << "Employee Salary Tax Info..." << endl;
			
			cout << endl << "ID: " << getEid();
			cout << endl << "Name: " << getEname();
			cout << endl << "Salary: " <<getSal();
			
			netpay();
			
			if (tax10 > 0) {
				cout << endl << "Tax 10%: " <<tax10;
			}
			if (tax20 > 0) {
				cout << endl << "Tax 20%: " <<tax20;
			}
			if (tax30 > 0) {
				cout << endl << "Total Tax: " <<tottax;
			}
			cout << endl << "Total Tax: " <<tottax;
			cout << endl << "Net Pay: " <<npay;
		}
};
int main() {
	ClsVwEST obj;
	obj.readData();
	obj.showData();
	return 0;
}
