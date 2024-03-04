#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on() 
	{ cout << "Remote ON" << endl; }
};

class SamsungTv : public RemoteControl
{
public:
	void on()
	{cout << "»ï¼ºÆ¼ºñ¿Â" << endl;}
};

class LgTv : public SamsungTv
{
public:
	void on()
	 { cout << "¿¤ÁöÆ¼ºñ¿Â" << endl; }
};

int main(void)
{
	LgTv* Lre = new LgTv();
	RemoteControl* rtr = Lre;
	
	Lre->  on();

	SamsungTv* Sre = new SamsungTv();
	RemoteControl* ttr = Sre;

	Sre-> on();
	
	
	return 0;


}
