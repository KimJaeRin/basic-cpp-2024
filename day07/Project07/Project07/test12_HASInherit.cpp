#include <iostream>
#include <cstring>
using namespace std;


class Gun
{
private:
	int bullet;
public:
		Gun(int bnum) : bullet(bnum)
	{ }
	void shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
	int getbullet() {
		return bullet;
	}
};
class Police : public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff)
		: Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff()
	{
		cout << "SNAP! " << endl;
		handcuffs--;
	}

	void state()
	{
		cout <<getbullet()<<" , "<<handcuffs << endl;
		handcuffs--;
	}
};

int main(void)
{
	Police pman(5, 3);
	pman.state();
	pman.shot();
	pman.PutHandcuff();
	return 0;
}