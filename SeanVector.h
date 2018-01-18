#pragma once

class MyVector {
	public:
		MyVector();
		MyVector(int);

		int size();
		int capacity();
		void clear();
		void push_back(int v);
		int at(int i);

		~MyVector();
	private:
		int CAPACITY;
		int ARROW;
		int* svArrayPtr;
		int* svArrayPtrBackup; // Used to copy contents of original array when we are growing the array size.
};
