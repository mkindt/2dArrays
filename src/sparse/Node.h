#ifndef __NODE_H__
#define __NODE_H__


template <typename T>
class Node {
private:
	Node * rowNext;
	Node * colNext;
	int row, col;
	T value;
public:
	Node(int r, int c, T v);
	T getValue();
	Node<T>* getColNext();
	Node<T>* getRowNext();
	void setColNext(Node<T>* n);
	void setRowNext(Node<T>* n);
	int getRow();
	int getCol();
	void setRow(int r);
	void setCol(int c);
};

#endif
