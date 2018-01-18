#include "SeanVector.h"

SeanVector::SeanVector() {
    int CAPACITY = 2;
    int ARROW = 0; // The index at which the next `push_back` value will be stored. Incremented every call.
    
    int* svArrayPtr = new int[CAPACITY];
}

SeanVector::SeanVector(int cap) {
    int* svArrayPtr = new int[cap];
	
	int CAPACITY = cap;
	int ARROW = 0;
}

int SeanVector::size() {
    // How would we know where the values actually stop, and the following zeroes in the array aren't actually values that are supposed to be part of the array?
}

int SeanVector::capacity() {
    return CAPACITY;
}

int SeanVector::clear() {
    CAPACITY = 2; // Reset total capacity.
    
    delete[] svArrayPtr; // Dispose of the old array.
    
    svArrayPtr = new int[CAPACITY]; // Allocate new array.
}

void SeanVector::push_back(int v) {
    svArrayPtr[ARROW] = v;
    ARROW++;
}

int SeanVector::at(int i) {
    return svArrayPtr[i];
}

SeanVector::~SeanVector() {
	delete[] svArrayPtr;
}
