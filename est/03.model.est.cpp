#include <iostream>
#include <string.h>
using namespace std;
class ClsMdEST {
	private:
		int eid;
		char ename[5];
		double sal;
		
	public:
		double tax10, tax20, tax30, tottax, npay;
		ClsMdlEST() {
			eid=0;
			ename[0]='\0';
			sal=0;
			cout << endl << "process: Default Constructor";
		}
		ClsMdlEST(int eid, const char* ename,double sal) {
			this->eid=eid;
			strcpy(this->ename,ename);
			this->sal=sal;
			cout << endl << "Process: Overload Constructor";
		}
		int getEid() {
			return eid;
		}
		void setEid(int eid) {
			this->eid=eid;
		}
		const char* getEname() {
			return ename;
		}
		void setEname(const char*ename) {
			strcpy(this->ename,ename);
		}
		double getSal() {
			return sal;
		}
		void setSal(double sal) {
			this->sal=sal;
		}
}; 
