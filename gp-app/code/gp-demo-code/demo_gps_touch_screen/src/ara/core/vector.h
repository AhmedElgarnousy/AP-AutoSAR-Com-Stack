#ifndef ARA_CORE_VECTOR_H_
#define ARA_CORE_VECTOR_H_


#include<iostream>
#include <cassert>
#include"StdCppImplementationDataType.h"

namespace ara{
  namespace core{
  
    class Vector {
      private:
      	ara::core::StdCppImplementationDataType::uint16_t *arr = nullptr;
      	ara::core::StdCppImplementationDataType:: uint16_t size = 0;

      public:
      	Vector(ara::core::StdCppImplementationDataType::uint16_t size) :
      		size(size) {
        	if (size < 0)
        		size = 1;
        		arr = new ara::core::StdCppImplementationDataType::uint16_t[size] { };
        	}

        	~Vector() {
        		delete[] arr;
        		arr = nullptr;
        	}

        	ara::core::StdCppImplementationDataType::uint16_t get_size() {
        		return size;
        	}

        	ara::core::StdCppImplementationDataType::uint16_t get(ara::core::StdCppImplementationDataType::uint8_t idx) {
        		assert(0 <= idx && idx < size);
        		return arr[idx];
        	}

        	void set(ara::core::StdCppImplementationDataType::uint8_t idx, ara::core::StdCppImplementationDataType::uint8_t val) {
        		assert(0 <= idx && idx < size);
        		arr[idx] = val;
        	}

        	void print() {
        		for (ara::core::StdCppImplementationDataType::uint8_t i = 0; i < size; ++i)
        			std::cout << arr[i] << " ";
        		std::cout << "\n";
        	}

        	ara::core::StdCppImplementationDataType::uint16_t find(ara::core::StdCppImplementationDataType::uint16_t value) {
        		for (ara::core::StdCppImplementationDataType::uint8_t i = 0; i < size; ++i)
        			if (arr[i] == value)
        				return i;
        		return -1;	// -1 for NOT found
        	}

        	ara::core::StdCppImplementationDataType::uint16_t get_front() {
        		return arr[0];
        	}

        	ara::core::StdCppImplementationDataType::uint16_t get_back() {
        		return arr[size-1];
        	}

	        void push_back(ara::core::StdCppImplementationDataType::uint8_t value) {
	        	
	        	ara::core::StdCppImplementationDataType::uint16_t *arr2 = new ara::core::StdCppImplementationDataType::uint16_t[size + 1];		// size+1 steps
	        	
	        	for (ara::core::StdCppImplementationDataType::uint8_t i = 0; i < size; ++i)		// 3size+1 steps
	        		arr2[i] = arr[i];
	        	
	        	arr2[size++] = value;				
	        	
	        	std::swap(arr, arr2);					
	        	
	        	delete[] arr2;						
	        	// Total: 5size + 7 ==> approximately size steps
	        }

};

  }// core
}// ara


#endif /* ARA_CORE_VECTOR_H_ */