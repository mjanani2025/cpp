#include <iostream>
#pragma pack(1)

using namespace std;

class ClsMdlER {
	private:
		int rno;
		char sname[5];
		double m1,m2;
};
int main() {
	ClsMdlER er;
	cout << endl << sizeof(er);
	return 0;
	
}
