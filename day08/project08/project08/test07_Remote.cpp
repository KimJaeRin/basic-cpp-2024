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
	{cout << "�ＺƼ���" << endl;}
};

class LgTv : public SamsungTv
{
public:
	void on()
	 { cout << "����Ƽ���" << endl; }
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
