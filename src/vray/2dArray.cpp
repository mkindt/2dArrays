#include "2dArray.h"
#include <iostream>
#include <assert.h>
#include <string>
#include <vector>
using std::vector;

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
	rows = r;
	cols = c;
	default0 = def;
	for (int i = 0; i < r; ++i){
		theArray.push_back(vector<T>());
		for (int j = 0; j < cols; ++j){
			theArray[i].push_back(def);
		}
	}

}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
	theArray[r][c] = value;
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
	return theArray[r][c];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
	theArray[r][c] = default0;
}

template <typename T>
void TwoDArray<T>::print(){
	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < cols; ++j) {
			std::cout << theArray[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

template <typename T>
int TwoDArray<T>::getNumRows(){
	return rows;
}

template <typename T>
int TwoDArray<T>::getNumCols(){
	return cols;
}


template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
