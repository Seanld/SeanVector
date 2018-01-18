#pragma once

class SeanVector {
	public:
	    SeanVector();
		SeanVector(int);
		
		int size();
		int capacity();
		int clear();
		void push_back(int v);
		int at(int i);
		
		~SeanVector();
	private:
		int CAPACITY;
		int ARROW;
		int* svArrayPtr;
};
