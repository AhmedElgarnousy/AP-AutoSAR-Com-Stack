#include<iostream>

#include"ara/core/vector.h"
#include"ara/core/array.h"


int main()
{

  // test vector
  int n = 4;
	ara::core::Vector v(n);
	for (ara::core::StdCppImplementationDataType::uint8_t i = 0; i < n; ++i)
		v.set(i, i);

	v.push_back(15);
	v.push_back(17);
	v.push_back(19);
	v.print();
	v.push_back(50);
	v.print();
	// 0 1 2 3 15 17 19

  std::cout<<"test adaptive";
	
  return 0;
}