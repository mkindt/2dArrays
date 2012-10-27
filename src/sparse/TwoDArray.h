#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__
#include "Node.h"

template <typename T>
class TwoDArray {
private:
	typedef Node<T>* nodePtr;
	nodePtr * theRows;
	nodePtr * theCols;
	int rows, cols;
	T default0;
public:
	TwoDArray<T>(int r, int c, T def);
	// ~TwoDArray<T>();
	void insert(int r, int c, T value); //insert the value v at index r,c
	T access(int r, int c); //get the value at index r,c
	void remove(int r, int c); //set the value at index r,c back to the default value
	void print(); //print the TwoDArray
	int getNumRows(); //getters for iteration
	int getNumCols();
};

#endif
