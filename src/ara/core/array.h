#ifndef ARA_CORE_ARRAY_H_
#define ARA_CORE_ARRAY_H_


#include <iostream>
#include <stdexcept>

// namespace ara{
//   namespace core
//   {


template <typename T, size_t N>
class Array {
    T data[N];

public:
    using value_type = T;
    using pointer = T*;
    using const_pointer = const T*;
    using reference = T&;
    using const_reference = const T&;
    using iterator = T*;
    using const_iterator = const T*;
    using size_type = size_t;
    using difference_type = std::ptrdiff_t;

    // Capacity
    constexpr size_type size() const noexcept { return N; }
    constexpr size_type max_size() const noexcept { return N; }
    constexpr bool empty() const noexcept { return N == 0; }

    // Element access
    reference operator[](size_type pos) {
        if (pos >= N) throw std::out_of_range("Array: index out of range");
        return data[pos];
    }

    const_reference operator[](size_type pos) const {
        if (pos >= N) throw std::out_of_range("Array: index out of range");
        return data[pos];
    }

    reference at(size_type pos) {
        if (pos >= N) throw std::out_of_range("Array: index out of range");
        return data[pos];
    }

    const_reference at(size_type pos) const {
        if (pos >= N) throw std::out_of_range("Array: index out of range");
        return data[pos];
    }

    reference front() { return data[0]; }
    const_reference front() const { return data[0]; }

    reference back() { return data[N - 1]; }
    const_reference back() const { return data[N - 1]; }

    T* data() noexcept { return data; }
    const T* data() const noexcept { return data; }

    // Iterators
    iterator begin() noexcept { return data; }
    const_iterator begin() const noexcept { return data; }
    iterator end() noexcept { return data + N; }
    const_iterator end() const noexcept { return data + N; }

    // Other functions
    void fill(const T& value) {
        for (size_type i = 0; i < N; ++i) {
            data[i] = value;
        }
    }

    void swap(Array& other) noexcept {
        for (size_type i = 0; i < N; ++i) {
            std::swap(data[i], other.data[i]);
        }
    }
};



    // Comparison operators
    template <typename T, size_t N>
    bool operator==(const Array<T, N>& lhs, const Array<T, N>& rhs) {
        for (size_t i = 0; i < N; ++i) {
            if (lhs[i] != rhs[i]) return false;
        }
        return true;
    }

    template <typename T, size_t N>
    bool operator!=(const Array<T, N>& lhs, const Array<T, N>& rhs) {
        return !(lhs == rhs);
    }


//   }// core
// }// ara


#endif /* ARA_CORE_ARRAY_H_ */