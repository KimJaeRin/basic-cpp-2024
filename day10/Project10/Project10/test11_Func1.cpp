/*
5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오.
1) 객체 포인터 배열 사용
2) 객체 배열 사용 -> 이걸로 하겠다!
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Grade
{
    char* name;         // 포인터를 사용하고 있다.
    int kor;
    int mat;
    int eng;

public:
    Grade() {
        name = NULL;
        kor = 0;
        mat = 0;
        eng = 0;
    }
    Grade(const char* myname, int mykor, int myeng, int mymat)
    {
        name = new char[strlen(myname) + 1];
        strcpy(this->name, myname);
        kor = mykor;
        eng = myeng;
        mat = mymat;
    }
    void AddStudent(char* myname, int mykor, int myeng, int mymat)
    {
        name = myname;
        kor = mykor;
        eng = myeng;
        mat = mymat;
    }
    ~Grade()
    {
        printf("소멸자 호출\n");
    }
    int getKor()
    {
        return kor;
    }
    int getMat()
    {
        return mat;
    }
    int getEng()
    {
        return eng;
    }
    int sum() const
    {
        int sum = kor + eng + mat;
        return sum;
    }
    double avr() const
    {
        double avr = sum() / 3.0;
        return avr;
    }
};

int main(void)
{
   // Grade gradeArr[3] = {};            // 객체 배열 생성 시 생성자 호출됨!

    char name[20];
    int inKor, inMat, inEng;
    cout << "성적처리 학생 수 : " << endl;
    cin >> num;

    // 1. 입력을 받는다.
    for (int i = 0; i < 3; i++) {
        cout << "이름 : ";
        cin >> name;

        cout << "국어점수 : ";
        cin >> inKor;

        cout << "영어점수 : ";
        cin >> inEng;

        cout << "수학점수 : ";
        cin >> inMat;
        cout << endl;

        //cout << name << inKor << inEng << inMat << endl;
        //2. 객체 생성 : 5개의 객체 생성, 객체 배열 or 객체  포인터 배열 중 뭘 쓸 것인가.. 이번엔 객체 배열을 쓰겠다
        gradeArr[i].AddStudent(name, inKor, inEng, inMat);
    }

    int korSum = 0;
    int EngSum = 0;
    int Matsum = 0;
    for (int i = 0; i < 3; i++) {
        korSum += gradeArr[i].getKor();
        EngSum += gradeArr[i].getEng();
        Matsum += gradeArr[i].getMat();
    }

    for (int i = 0; i < 3; i++)
    {
        //cout << "총점 : " << gradeArr[i]->sum() << endl << "평균 : " << gradeArr[i]->avr() << endl << endl;
        printf("%d번째 학생 총점 : %d,   평점 : %0.1f\n", i + 1, gradeArr[i].sum(), gradeArr[i].avr());
    }

    printf("\n");
    printf("국어 총점 : %d, 국어 평균 : %.1f\n", korSum, korSum / float(size(gradeArr)));
    printf("영어 총점 : %d, 영어 평균 : %.1f\n", EngSum, EngSum / float(size(gradeArr)));
    printf("수학 총점 : %d, 수학 평균 : %.1f\n\n", Matsum, Matsum / float(size(gradeArr)));

    for (int i = 0; i < 3; i++) {
        printf("객체 할당 소멸자 호출\n");
    }
    return 0;
}