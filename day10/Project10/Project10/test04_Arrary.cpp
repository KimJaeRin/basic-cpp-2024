#include <iostream>
using namespace std;


int main()
{

	int arr[5] = { 1, 2, 3, 4, 5 };      //int 형태의 배열.
	int* parr = arr;                     // 배열의 이름은 주소이다.


	printf("arr 주소 : %p\n", arr);
	printf("arr 크기 : %u\n", sizeof(arr));    // int 크기 4x 방 갯수 5 = 20 byte

	printf("arr [0] 주소 : %p\n", &arr[0]);     // 0번 방, 첫번 째방 주소,
	printf("arr[1] 주소 : %p\n", &arr[1]);
	printf("arr + 1 : %p\n", arr + 1);

	printf("parr 주소 : %p\n ", &parr);
	printf("parr 데이터 : %p\n ", parr);             //배열 arr의 주소를 저장하고 있음.
	printf("parr + 1 : %p\n", parr + 1);
	printf("parr : %d\t, *pa : %d\n",parr[0], *parr);     







	return 0;
}