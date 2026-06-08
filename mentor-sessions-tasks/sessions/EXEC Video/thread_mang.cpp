#include <iostream>
#include <thread>

void func1() {
  std::cout<<" Beauty is only skin-deep"<<std::endl;
}

class Fctor {
  public:
      void operator()() {
        for (int i=0; i > -100; i-- ) {
            std::cout << "from t1: " << i << std::endl;
        }
      }
};

int main()
{
    std::thread t1 (func1); // t1 starts running
    // t1.detach();


    for (int i = 0; i < 100; i++) {
      std::cout << "from main: "<< i << std::endl;
    }

  return 0;
}