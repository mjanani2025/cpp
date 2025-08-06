#include <iostream>
#include "encapsulation.model.cpp"

using namespace std;
class ClsCtrlAOP : public ClsMdlAO {
	public:
		void sum() {
			cout << endl << "Sum: " << getFno() + getSno();
		}
		void minus() {
			cout << endl << "Minus: " << getFno() - getSno();
		}
		void multiply() {
			cout << endl << "Multiply: " << getFno() * getSno();
		}
		void div() {
			cout << endl << "Division: " << getFno() / getSno();
		}
};

