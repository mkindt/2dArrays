#include "Node.h"
#include <iostream>
#include <assert.h>
#include <string>


template <typename T>
Node<T>::Node(int r, int c, T v) {
  value = v;
  rowNext = 0;
  colNext = 0;
  row = r;
  col = c;
}

template <typename T>
T Node<T>::getValue() {
  return value;
}

template <typename T>
Node<T>* Node<T>::getColNext() {
  return colNext;
}
template <typename T>
Node<T>* Node<T>::getRowNext() {
  return rowNext;
}

template <typename T>
void Node<T>::setColNext(Node<T>* n) {
  colNext = n;
}

template <typename T>
void Node<T>::setRowNext(Node<T>* n) {
  rowNext = n;
}

template <typename T>
int Node<T>::getRow(){
	return row;
}

template <typename T>
int Node<T>::getCol(){
	return col;
}

template <typename T>
void Node<T>::setRow(int r) {
  row = r;
}

template <typename T>
void Node<T>::setCol(int c) {
  col = c;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;

