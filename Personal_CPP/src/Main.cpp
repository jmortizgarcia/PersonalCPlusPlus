#include <iostream>

#define LOG(x) std::cout << x << std::endl

#pragma region POINTER_REFERENCES_EXAMPLE

int Pointer_References_Example()
{
	//Pointer Example
	int var = 8;
	//Access memory adress
	int* ptr = &var;
	//Access data of the pointer and modify
	*ptr = 10;
	//var = 10 now;

	//Ref Example
	int a = 5;
	int b = 8;

	//int& ref = a;
	//ref = b;
	//int* ref = &a;
	//*ref = 2;
	//ref = &b;
	//*ref = 1;

	LOG(a);
	LOG(b);

	std::cin.get();
	return 0;
}

#pragma endregion

int main()
{
	
	std::cin.get();
	return 0;
}