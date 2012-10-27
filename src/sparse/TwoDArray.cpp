#include "TwoDArray.h"
#include <iostream>
#include <assert.h>
#include <string>
#include "Node.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
	rows = r;
	cols = c;
	default0 = def;
	theRows = new Node<T>*[r];
	theCols = new Node<T>*[c];
	for (int i = 0; i < r; ++i)
		theRows[i] = 0;
	for (int j = 0; j < c; ++j)
		theCols[j] = 0;
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
	Node<T>* newNode = new Node<T>(r, c, value);
	if (theRows[r] != 0){
		if ((theRows[r])->getCol() > c){
			newNode->setColNext(theRows[r]);
			theRows[r] = newNode;
		}
		else if ((theRows[r])->getCol() < c){
			Node<T>* curr = theRows[r];
			Node<T>* prev = curr;
			while (curr->getColNext() !=0 && (curr->getCol()) < c){
				prev = curr;
				curr = curr->getColNext();
			}
			newNode->setColNext(curr);
			prev->setColNext(newNode);
		}
	}
	else
		theRows[r] = newNode;

	if (theCols[c] != 0){
		if ((theCols[c])->getRow() > r){
			newNode->setRowNext(theCols[c]);
			theCols[c] = newNode;
		}
		else if ((theCols[c])->getRow() < r){
			Node<T>* curr = theRows[r];
			Node<T>* prev = curr;
			while (curr->getRowNext() !=0 && (curr->getRow()) < r){
				prev = curr;
				curr = curr->getRowNext();
			}
			newNode->setRowNext(curr);
			prev->setRowNext(newNode);
		}
	}
	else
		theCols[c] = newNode;
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
	Node<T>* curr = theRows[r];
	while (curr !=0 && (curr->getCol()) != c){
		curr = curr->getColNext();
	}
	if (curr == 0)
		return default0;
	else
		return curr->getValue();
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
	Node<T>* across = theRows[r];
	Node<T>* prevA = across;
	if (across->getCol() == c)
		theRows[r] = across->getColNext();
	else{
		while (across !=0 && (across->getCol()) != c){
			prevA = across;
			across = across->getColNext();
		}
		if (across == 0)
			return;
		prevA->setColNext(across->getColNext());
	}

	Node<T>* down = theCols[c];
	Node<T>* prevD = down;
	if (down->getRow() == r)
		theCols[c] = down->getRowNext();
	else{
		while (down !=0 && (down->getRow()) != r){
			prevD = down;
			down = down->getRowNext();
		}
		prevD->setRowNext(down->getRowNext());
	}
}

template <typename T>
void TwoDArray<T>::print(){
	for(int i = 0; i < rows; ++i) {
		if (theRows[i] == 0){
			for (int j = 0; j < cols; ++j)
				std::cout << default0 << " ";
		}
		else{
			Node<T>* curr = theRows[i];
			for (int j = 0; j < cols; ++j){
				if (curr->getCol() == j){
					std::cout << (curr)->getValue() << " ";
					if (curr->getColNext() !=0)
						curr = curr->getColNext();
				}
				else
					std::cout << default0 << " ";
			}
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
