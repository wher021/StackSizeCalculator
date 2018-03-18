//============================================================================
// Name        : DynamicAllocation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;


int *pa, *pb;
int cnt = 0;

class car
{
public:
	int a;
	int b;
};

void f()
{
	int b = 3;
	car a2;
	car a;


	if(cnt == 0)
	{
		pa = &b;
	}



	if (cnt > 0)
	{
		pb = &b;
		std::cout << "memory for one iteration = ";
		std::cout << sizeof(int) * abs(pa - pb)  << "\n";
		if(cnt == 100000)
		{
			return;
		}

	}
	cnt++;
	f();
}



int main() {

	f();
}

//	MyCLass** myArray = new MyCLass*[10];
//	MyCLass *myArray2 = new MyCLass[10];
//
//	for(int i = 0; i<10; i++)
//	{
//		myArray[i] = new MyCLass[10];
//	}
//
//	for(int i = 0; i<10; i++)
//	{
//		for(int j = 0; j<10; j++)
//		{
//			myArray[i][j].name = "www";
//			std::cout<<myArray[i][j].name;
//		}
//		cout<<std::endl;
//	}

//
//	MyCLass* a1 = new MyCLass();
//	myArray2[0] = *a1;
//	std::cout<<myArray2[0].name;
