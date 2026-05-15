#pragma once

#include <cstddef>
#include <memory>

template <class T>
class DynamicArray
{
private:
    std::size_t m_size = 0;
    std::size_t m_capacity = 0;
    std::unique_ptr<T[]> m_data = nullptr;

    void reallocation(); // void resize(size_t new_size)
public:
    DynamicArray(size_t size = 0): m_size(size), m_capacity(size) {
        if(size > 0) {
            m_data = std::make_unique<T[]>(size);
        }
    }
    ~DynamicArray() = default;

    void reserve(std::size_t capacity);
    T& operator[](std::size_t idx);
    void push_back(T elem);
    T pop_back();

    std::size_t size() const { return m_size; }
    std::size_t capacity() const { return m_capacity; }
};
