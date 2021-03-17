#include <iostream>
// 1
#define CHECK(num, limit) ((num < 0) ? 0 : (num < limit) ? 1 : 0) 
// 2
#define _TWO_ARRAY(array, x, y)  (*(*(array + x) + y)) 
// 3
#define SIZE_ARRAY(type,array) sizeof(array)/sizeof(type)


int main(int argc, char *argv[]){
// 1	
	int a;
	std::cin >> a;
	std::cout << CHECK(a, 10) << std::endl;
// 2
	int **quadr = new int*[3];
	quadr[0] = new int[3] {11, 12, 13};
	quadr[1] = new int[3] {21, 22, 23};
	quadr[2] = new int[3] {31, 32, 33};
	std::cout << _TWO_ARRAY(quadr,1,2) << std::endl;
	delete[] quadr;
// 3
	char array[] = "Hello World";
	std::cout << SIZE_ARRAY(char,array) << std::endl;


	return 0;
}