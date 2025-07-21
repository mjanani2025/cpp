#include <iostream>
#include "03.model.est.cpp"
using namespace std;
class ClsCtrlEST : public ClsMdEST {
	public:
		void uTax10() {
			double sal=getSal();
			if (sal <= 250000) {
				tax10=0;
			} else if (sal > 25000 && sal <= 50000) {
				tax10=(sal - 250000)* 10.0 /100;
			} else if (sal > 500000) {
				tax10=(500000 - 250000)* 10.0/100;
			}
		}
		void uTax20() {
			double sal=getSal();
			if (sal <= 500000) {
				tax20=0;
			} else if (sal > 500000 && sal <= 1000000) {
				tax30=(sal - 500000) * 20.0/100;
			} else if (sal > 1000000) {
				tax20=(1000000 - 500000) * 20.0/100;
			}
		}
		void uTax30() {
			double sal=getSal();
			if(sal <= 1000000) {
				tax30=0;
			} else if (sal > 1000000) {
				tax30=(sal - 1000000) * 30.0/100;
			}
		}
		void totalTax() {
			uTax10();
			uTax20();
			uTax30();
			tottax=tax10+tax20+tax30;
		}
		void netpay() {
			totalTax();
			npay=getSal() - tottax;
		}
};
