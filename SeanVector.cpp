#include "MyVector.h"

MyVector::MyVector() {
	CAPACITY = 2;
	ARROW = 0; // The index at which the next `push_back` value will be stored. Incremented every call.

	svArrayPtr = new int[CAPACITY];
	svArrayPtrBackup = nullptr;
}

MyVector::MyVector(int cap) {
	svArrayPtr = new int[cap];

	CAPACITY = cap;
	ARROW = 0;
}

int MyVector::size() {
	return ARROW + 1;
}

int MyVector::capacity() {
	return CAPACITY;
}

void MyVector::clear() {
	CAPACITY = 2; // Reset total capacity.
	ARROW = 0;

	delete[] svArrayPtr; // Dispose of the old array.

	svArrayPtr = new int[CAPACITY]; // Allocate new array.
}

void MyVector::push_back(int v) {
	if ((ARROW + 1) >= CAPACITY) { // We need to expand the array.
		CAPACITY *= 2;
		svArrayPtrBackup = new int[CAPACITY];

		for (int i = 0; i < (CAPACITY / 2); i++) { // Copy contents of original vector over to the new one.
			svArrayPtrBackup[i] = svArrayPtr[i];
		}

		delete[] svArrayPtr; // Delete original data from memory, then...
		svArrayPtr = svArrayPtrBackup;
		svArrayPtrBackup = nullptr; // Move the pointer back to original pointer, and reset backup one.
	}

	svArrayPtr[ARROW] = v;
	ARROW++;
}

int MyVector::at(int i) {
	if (i >= (CAPACITY-1)) {
		throw i;
	}
	else {
		return svArrayPtr[i];
	}
}

MyVector::~MyVector() {
	delete[] svArrayPtr;
}
