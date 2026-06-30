#include "../../../../src/ara/core/vector.h"


int main() {

	int n = 4;
	ara::core::Vector<int> v(n);
	ara::core::Vector<char> v2(n);
	for (int i = 0; i< n; ++i) {
    v.set(i,i);
  }  

  v2.insert(0, 'a');
  v2.insert(1, 'b');
  v2.insert(2, 'c');
  // v2.push_back('a');
  // v2.push_back('b');
  // v2.push_back('c');
  v2.print();
  v2.insert(0, 'k');
  v2.print();

	return 0;
}