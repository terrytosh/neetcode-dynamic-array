#include <iostream>
#include "da.h"

// Initalize an empty DynamicArray object with capacity and size = 0
DynamicArray::DynamicArray() : array(nullptr), capacity(0), size(0) {
    std::cout << "Empty dynamic array created successfully" << std::endl;
}

// Initliaze an empty array with a capacity of 'init_capacity', must be > 0
DynamicArray::DynamicArray(int init_capacity) {
    if (init_capacity <= 0) {
        std::cerr << "Capacity parameter must be > 0..." << std::endl;
    }
    else {
        array = new int[init_capacity];
        capacity = init_capacity;
        size = 0;
        std::cout << "Dynamic array of capacity " << init_capacity << " created successfully..." << std::endl;
    }
}

// Returns the element at index i, assume i is valid for now
int DynamicArray::get(int i) {
    return array[i];
}

// Set the element at index i to n, assume i is valid for now
void DynamicArray::set(int i, int n) {
    array[i] = n;
}

void DynamicArray::pushback(int n) {
    // If the array is full, call resize()
    if (size == capacity) {
        resize();
    }
    array[size] = n;
    size++;
}

// Pop and return the element at the end of the array, assume non-empty for now
int DynamicArray::popback() {
    int output = array[size - 1];
    size--;
    return output;
}

// Double the capacity of the array
void DynamicArray::resize() {
    capacity *= 2;
    int *temp = new int[capacity];
    for (int i = 0; i < size; i++) {
        temp[i] = array[i];
    }
    delete[] array;
    array = temp;
}

// Returns number of elements in the array
int DynamicArray::getSize() {
    return size;
}

// Returns the capacity of the array
int DynamicArray::getCapacity() {
    return capacity;
}

// Release the memory
DynamicArray::~DynamicArray() {
    delete[] array;
    std::cout << "Dynamic array destroyed successfully..." << std::endl;
}