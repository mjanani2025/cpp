#include <iostream>
#include "encapsulation.controller.cpp"

using namespace std;

class ClsViewAO : public ClsCtrlAOP {
	public:
		void readData() {
			double x, y;
			
			cout << endl << "Enter 'x' value: ";
			cin >> x;
			
			
			cout << endl << "Enter 'y' value: ";
			cin >> y;
			setFno(x);
			
			setSno(y);
		}
		
		void showData() {
			cout << endl << "fno: " << getFno();
			cout << endl << "sno: " << getSno();
			cout << endl;
			
			sum();
			minus();
			multiply();
			div();
		}
		
		
};

int main() {
	ClsViewAO obj;
	obj.readData();
	obj.showData();
	return 0;
}


/*

Process: Default Constructor
Enter 'x' value: 25

Enter 'y' value: 7

fno: 25
sno: 7

Sum: 32
Minus: 18
Multiply: 175
Division: 3.57143
--------------------------------
Process exited after 5.282 seconds with return value 0
Press any key to continue . . .
*/
