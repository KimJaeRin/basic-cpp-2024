#include <iostream>
#include <cstring>
#include "test11_BookClass.cpp"
#include "test12_Handphoneclass.cpp"
#include "test13_ComputerClass.cpp"
using namespace std;

// 상품을 나타내는 기본 클래스
class Product {
protected:
    int id;
    double price;
    string producer;
public:
    Product(int _id, double _price, string _producer) : id(_id), price(_price), producer(_producer) {}

    // 가상 함수를 이용하여 파생 클래스에서 재정의 가능한 printInfo 함수 정의
    virtual void printInfo() const {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << endl;
        cout << endl;
    }

    int getID() const {
        return id;
    }

    // 가상 소멸자 추가
    virtual ~Product() {}
};


int main() {
    vector<Product*> products; // Product 객체를 담는 벡터 선언

    int choice;
    while (true) {
        cout << "상품관리 프로그램" << endl;
        cout << "1. 상품추가 2. 상품출력 3. 상품검색 0. 종료" << endl;
        cout << "선택: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 0: // 종료
            // 동적 할당한 객체들 삭제
            for (auto& product : products) {
                delete product;
            }
            return 0;
        case 1: // 상품 추가
            addProduct(products);
            break;
        case 2: // 상품 출력
            printProducts(products);
            break;
        case 3: // 상품 검색
            searchProduct(products);
            break;
        default:
            cout << "잘못된 선택입니다. 다시 선택해주세요." << endl;
            break;
        }
    }

    return 0;
}

// 상품 추가 함수
void addProduct(vector<Product*>& products) {
    int productType;
    cout << "1. 책 2. 핸드폰 3. 컴퓨터" << endl;
    cout << "상품 종류 선택: ";
    cin >> productType;
    cout << endl;

    int id;
    double price;
    string producer;
    cout << "ID: ";
    cin >> id;
    cout << "Price: ";
    cin >> price;
    cout << "Producer: ";
    cin >> producer;

    if (productType == 1) { // 책
        string ISBN, author, title;
        cout << "ISBN: ";
        cin >> ISBN;
        cout << "Author: ";
        cin >> author;
        cout << "Title: ";
        cin >> title;
        cout << endl;
        products.push_back(new Book(id, price, producer, ISBN, author, title));
    }
    else if (productType == 2) { // 핸드폰
        string model;
        int ram;
        cout << "Model: ";
        cin >> model;
        cout << "RAM: ";
        cin >> ram;
        cout << endl;
        products.push_back(new Handphone(id, price, producer, model, ram));
    }
    else if (productType == 3) { // 컴퓨터
        string model, cpu;
        int ram;
        cout << "Model: ";
        cin >> model;
        cout << "CPU: ";
        cin >> cpu;
        cout << "RAM: ";
        cin >> ram;
        cout << endl;
        products.push_back(new Computer(id, price, producer, model, cpu, ram));
    }
}

// 상품 출력 함수
void printProducts(const vector<Product*>& products) {
    cout << "상품 출력" << endl;
    for (const auto& product : products) {
        product->printInfo();
        cout << endl;
    }
}

// 상품 검색 함수
void searchProduct(const vector<Product*>& products) {
    cout << "상품 검색" << endl;
    int searchId;
    cout << "검색할 상품의 ID를 입력하세요: ";
    cin >> searchId;
    cout << endl;


    bool found = false;
    for (const auto& product : products) {
        if (product->getID() == searchId) {
            product->printInfo();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "해당 ID의 상품을 찾을 수 없습니다." << endl;
        cout << endl;
    }
}

/*
프로그램 돌렸을때 3 상품 검색
// 상품 검색 함수
void searchProduct(const vector<Product*>& products) {
    cout << "상품 검색" << endl;
    int searchId;
    cout << "검색할 상품의 ID를 입력하세요: ";
    cin >> searchId;
    cout << endl;

    bool found = false;
    for (const auto& product : products) {
        if (product->getID() == searchId) {
            product->printInfo();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "해당 ID의 상품을 찾을 수 없습니다." << endl;
        cout << endl;
    }
}

*/