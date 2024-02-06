#include "../../../../src/ara/core/vector.h"


int main() {

	int n = 4;
	ara::core::Vector v(n);
	for (int i = 0; i< n; ++i) {
    v.set(i,i);
  }  

  v.push_back(15);
  v.push_back(17);
  v.push_back(19);
  v.print();
  v.insert(2, 0);
  v.print();

	return 0;
}