#include <iostream>
#include "Filedivi.h"
#include "human.h"


AClass::AClass(int anum) {
	num = anum;


}
void AClass::AInfo() {
	std::cout << "AClass::num" << num << std::endl;


}

int main()
{

	AClass a(10);
	a.AInfo();
	

	Human h("ȫ�浿", 50, "���");
	h. humanInfo();


	return 0;

}