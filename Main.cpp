#include <iostream>
#include "Header.h"

int main() {


	int x{ usrInp() };
	int y{ usrInp() };
	char z{};
	std::cout << "Enter an oprator" << std::endl;
	std::cin >> z;
	std::cout << "The calculated result is: " << resultCal(x, y, z);


	return 0;



}