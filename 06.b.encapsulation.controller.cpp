#include <iostream>
#include <string.h>
#include "06.a.encapsulation.model.cpp"

using namespace std; 

class ClsCtrlER : public ClsMdlER {
	public:
	
	double getTotal(){
		return getM1() + getM2();
	}
	double getAvg() {
		return (getM1() + getM2()) / 2;	
	}
	const char* getResult() {
		return(getM1() > 34.4 && getM2() >34.4 ? "Pass":"Fail");
	}
};
