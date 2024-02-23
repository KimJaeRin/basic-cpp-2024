#pragma once

class Human {

private:  //생략가능
	char name[20];
	int age;
	char job[20];


public:   //접근제어 지시자


	Human(int anum);
	void humanInfo(); //클래스이름과 똑같은 매서드는 생성자 초기화 역할