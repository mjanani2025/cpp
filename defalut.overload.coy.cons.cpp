#include <iostream>
#include <conio.h>

using namespace std;

class Calcu{
	private:
		double x,y;
		public:
			Calcu() {
				x=0;
				y=0;
				cout << endl <<"Default Constructo";
			}
			Calcu(int i, int j) {
				x=i;
				y=j;
				cout << endl << "Overload (parameterized) Constructor";
			}
			Calcu (Calcu & obj) {
				x = obj.x;
				y = obj.y;
				cout << endl << "Copy (Parameterized) Constructor";
			}
			~Calcu() {
				cout << endl << "Destructor";
			}
			void show() {
				cout << endl << "x: " << x;
				cout << endl << "y: " << y;
			}
};
int main() {
	Calcu obj1;
	Calcu obj2(5,2);
	Calcu obj3(obj2);
	obj1.show();
	obj2.show();
	obj3.show();
	getch();
	return 0;
}
