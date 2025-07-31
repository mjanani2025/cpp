#include <iostream>
#include <conio.h>

using namespace std;

class Calcu{
	private:
		double x,y;
		public:
			Calcu() {
				x = y =0;
				cout << endl << "Default Constructor";
			}
			void readData() {
				cout << endl << "Enter X value: ";
				cin >> x;
				
				cout << endl << "Enter Y value: ";
				cin >> y;
			}
			void sum() {
				cout << endl << x << "+" << y << "=" <<(x+y);
			}
	        void minus() {
				cout << endl << x << "-" << y << "=" <<(x-y);
			}
			void multiply() {
				cout << endl << x << "*" << y << "=" <<(x*y);
			}
			void div() {
				cout << endl << x << "/" << y << "=" <<(x/y);
			}	
};

int main() {
	Calcu obj;
	obj.readData();
	obj.sum();
	obj.minus();
	obj.multiply();
	obj.div();
	getch();
	return 0;
	
}
