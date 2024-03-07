#include <iostream>
#include <cstring>
using namespace std;

class Grade {
private:
    char* name;
    int kor;
    int math;
    int eng;
    int total;
    double average;

public:
    Grade()
    { 
        cout << "생성자 호출" << endl;
    }
    // 생성자: 학생의 이름과 세 과목의 점수를 받아 초기화
    Grade(const char* name, int kor, int math, int eng) {
        // 이름 복사
        size_t len = strlen(name) + 1;
        this->name = new char[len];
        strcpy_s(this->name, len, name);

       
   
        this->kor = kor;
        this->math = math;
        this->eng = eng;

        // 총점과 평균 계산
      Total();
       Average();
    }

    // 소멸자: 동적으로 할당된 메모리 해제
    ~Grade() {
        delete[] name;
    }

    // 총점 계산 함수
    void Total() {
        total = kor + math + eng;
    }

    // 평균 계산 함수
    void Average() {
        average = total / 3.0;
    }

    // 이름 반환 함수
    const char* getName() const {
        return name;
    }

    // 국어 점수 반환 함수
    int getKor() const {
        return kor;
    }

    // 수학 점수 반환 함수
    int getMath() const {
        return math;
    }

    // 영어 점수 반환 함수
    int getEng() const {
        return eng;
    }

    // 총점 반환 함수
    int getTotal() const {
        return total;
    }

    // 평균 반환 함수
    double getAverage() const {
        return average;
    }

    void ShowPersonInfo() const
    {
        cout << " 이름 : " << name << " 국어 : " << kor << "수학 : " << math << " 영어 :" << eng << endl;
    }
    };

int main(void) {
    Grade gradeAry[5];
    const int STUDENTS = 5;
    char name[20];
    int inko, inEng, inmath;
    //Grade* gradeAry[STUDENTS];    // 학생 객체를 포인터 배열
  
    for (int i = 0; i < STUDENTS; i++) {
       

        cout << "이름: ";
        cin >> name;
        cout << "국어: ";
        cin >> inko;
        cout << "수학: ";
        cin >> inmath;
        cout << "영어: ";
        cin >> inEng;
        cout << endl;

        gradeAry[i].ShowPersonInfo();

        

       
 
    }

    return 0;
}