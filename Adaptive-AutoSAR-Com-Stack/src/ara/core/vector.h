#ifndef ARA_CORE_VECTOR_H_
#define ARA_CORE_VECTOR_H_


#include<iostream>
#include <cassert>
#include"Std_Types.h"

// using namespace std;

namespace ara {
  namespace core {
    class Vector {
      private:
      	ara::core::Std_Types::uint16_t *arr = nullptr;
      	ara::core::Std_Types:: uint16_t size = 0;     // user size
      	ara::core::Std_Types:: uint16_t capacity = 0; // actual size

      public:
			Vector(ara::core::Std_Types::uint16_t size);
			~Vector();
			void expand_size();
			// void swap (ara::core::Std_Types::uint16_t *op1, ara::core::Std_Types::uint16_t *op2);

			ara::core::Std_Types:: uint16_t get_size();
			ara::core::Std_Types:: uint16_t get_front();
			ara::core::Std_Types:: uint16_t get_back();
			ara::core::Std_Types:: uint16_t get(ara::core::Std_Types::uint8_t idx);
			void set(ara::core::Std_Types::uint8_t idx, ara::core::Std_Types::uint16_t val);

			void print();
			ara::core::Std_Types:: uint16_t find(ara::core::Std_Types::uint16_t value);
			void push_back(ara::core::Std_Types::uint16_t value);
			void insert(ara::core::Std_Types::uint8_t idx , ara::core::Std_Types::uint16_t val);
		};


	void ara::core::Vector::expand_size () {
		  // Double the actual array size
      capacity *= 2;
      std::cout<< " ";
      ara::core::Std_Types:: uint16_t * arr2 = new ara::core::Std_Types:: uint16_t [capacity];
      for(ara::core::Std_Types:: uint16_t i = 0; i < size; i++) {
          arr2[i] = arr[i];
      }
      std::swap(arr2, arr);
      // ara::core::Vector::swap(arr2, arr);
      delete [] arr2;
	}
	// void ara::core::Vector::swap (int *op1, int *op2) {
	//   int *swap;
	//   swap = op1;
	//   op1= op2;
	//   op2 = swap;
	// }

  ara::core::Vector::Vector(ara::core::Std_Types::uint16_t size) : size(size) {
    if (size < 0) {
     size = 1;
		}
		capacity = size + 10;
    arr = new ara::core::Std_Types::uint16_t[capacity] { };
	}
  
  ara::core::Vector::~Vector() {
  	delete[] arr;
  	arr = nullptr;
	}

  ara::core::Std_Types::uint16_t ara::core::Vector::get_size() {
		return size;
	}

  ara::core::Std_Types::uint16_t ara::core::Vector::get(ara::core::Std_Types::uint8_t idx) {
  	assert(0 <= idx && idx < size);
  		return arr[idx];
  }

    void ara::core::Vector:: set(ara::core::Std_Types::uint8_t idx, ara::core::Std_Types::uint16_t val) {
        assert(0 <= idx && idx < size);
        arr[idx] = val;
    }

    void ara::core::Vector::print() {
    	for (ara::core::Std_Types::uint8_t i = 0; i < size; ++i)
    		std::cout << arr[i] << " ";
    	std::cout << "\n";
    }

    ara::core::Std_Types::uint16_t ara::core::Vector:: find(ara::core::Std_Types::uint16_t value) {
    	for (ara::core::Std_Types::uint8_t i = 0; i < size; ++i) {
    		if (arr[i] == value) {
    			return i;
				}
			}
    	return -1;	// -1 for NOT found
		}
    
    ara::core::Std_Types::uint16_t ara::core::Vector:: get_front() {
    	return arr[0];
		}
    
    ara::core::Std_Types::uint16_t ara::core::Vector:: get_back() {
    	return arr[size-1];
    }

	  void ara::core::Vector:: push_back(ara::core::Std_Types::uint16_t val) {
			if(size == capacity) {
			  expand_size();
			}
			arr[size++] = val;
	  }

		void ara::core::Vector::insert(ara::core::Std_Types::uint8_t idx , ara::core::Std_Types::uint16_t val) {
			// check validitiy of the input
      assert(0 <= idx && idx< size);
      // we can't add any more
      if(size == capacity) {
        expand_size();
      }
      // shift right the data
      for(int i = size-1; i >= idx; i--) {
        arr[i+1] = arr[i];
      }
      arr[idx] = val;
      ++size; 
		}

  }// core
}// ara
#endif /* ARA_CORE_VECTOR_H_ */