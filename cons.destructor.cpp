#include <iostream>
#include <conio.h>

using namespace std;
class ClsA {
	public:
		ClsA() {
			cout << endl << "ClsA:Default constructor";
		}
		~ClsA() {
			cout << endl << "Cls:Destructor" << endl;
		}
};
int main() {
	ClsA obj;
	getch();
	return 0;
	
}
