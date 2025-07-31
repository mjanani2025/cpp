#include <iostream>
#include <conio.h>

using namespace std;

void show() {
	cout << endl << "Show Procedure";
}
class ClsA{
	public:
	void show() {
		cout << endl << "ClsA-Show Member Procedure";
		cout << endl << "OBP:Hello C++ World";
	}
};
int main() {
	show();
	ClsA obj;
	obj.show();
	getch();
	return 0;
	
}

