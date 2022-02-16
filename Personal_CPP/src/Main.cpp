#include <iostream>

#include "Log.cpp"

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

	//int* ref = a;
	//ref = b;
	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;

	std::cin.get();
	return 0;
}

#pragma endregion
#pragma region STATIC_OUTSIDE_CLASS_EXAMPLE
//extern int s_Variable = 10;
void Function() {}
#pragma endregion
#pragma region STATIC_INSIDE_CLASS_EXAMPLE

struct Entity_StaticClassExample
{
	static int x, y;
	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

//Required to compile since they only have one static instance shared across all Entity instances of the class 
//int Entity::x;
//int Entity::y;

//Example in Main -> Same values
// Entity e;
//Entity::x = 2;
//Entity::y = 3;
//Entity e1;
//Entity::x = 5;
//Entity::y = 8;
//Entity::Print();
//Entity::Print();

#pragma endregion
#pragma region VIRTUAL_FUNCTIONS_EXAMPLE

class Entity_ExamplePureVirtual
{
public:
	virtual std::string GetName() { return "Entity"; }
};

class Player_ExamplePureVirtual : public Entity_ExamplePureVirtual
{
private: 
	std::string m_Name;
public:
	Player_ExamplePureVirtual(const std::string& name)
		: m_Name(name) {}
	std::string GetName() override { return m_Name; }
};

void PrintName_ExamplePureVirtual(Entity_ExamplePureVirtual* entity)
{
	std::cout << entity->GetName() << std::endl;
}

//In Main
//Entity* e = new Entity();
//PrintName(e);
//Player* p = new Player("Player");
//PrintName(p);
//Result without virtual ////////// Result with wirtual method
	//Entity						//Entity
	//Entity						//Player
#pragma endregion

#pragma region ARRAY_EXAMPLE

//int example[5];
//int* ptr = example; //Points first Element
//*(ptr + 1);			//Points element 1
//&(*(ptr + 1));		//Memory address of element 1

////Create arrays in the heap
//int* another = new int[5];
//// MUST BE DELETED WITH delete[]
//delete[] another;
////Number of elements of Array
//int count = sizeof(example) / sizeof(int); //Count of elements

#pragma endregion

int main()
{
	//Log log; 
	//log.SetLevel(Log::LEVELERROR);
	//log.Warn("Hello!");
	//log.Error("Hello!");
	//log.Info("Hello!");

	std::cin.get();
	return 0;
}