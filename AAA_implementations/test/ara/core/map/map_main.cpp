// #include "map.h"
#include "../../../../src/ara/core/map.h"
#include <iostream>
using namespace std;

int main()
{
	Map map;

	// 1st way of insertion
	map[132] = 3;
	map[34] = 5;
	map[42] = -97;
	map[22] = 10;
	map[12] = 42;

	// 2nd way of insertion
	map.insert(-2,44);
	map.insert(0,90);

	// accessing elements
	cout<<"Value at key 42 before updating = "
		<<map[42]<<endl;
	cout<<"Value at key -2 before updating = "
		<<map[-2]<<endl;
	cout<<"Value at key 12 before updating = "
		<<map[12]<<endl;

	// Updating value at key 42
	map[42] = -32;

	// Updating value at key -2
	map.insert(-2,8);

	// Updating value at key 12
	map.update(12,444);

	// accessing elements
	cout<<"Value at key 42 after updating = "
		<<map[42]<<endl;
	cout<<"Value at key -2 after updating = "
		<<map[-2]<<endl;
	cout<<"Value at key 12 after updating = "
		<<map[12]<<endl;
	cout<<"Value at key 0 = "<<map[0]<<endl; 
	return 0;
}
