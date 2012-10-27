#include "2dArray.h"
#include <iostream>

int main() {
	TwoDArray<int> i1(10, 5, 42);
	TwoDArray<double> d1(2, 9, 9.9);
	TwoDArray<std::string> s1(6, 8, "e");
	i1.insert(9, 4, 100);
	i1.insert(8, 1, 99);
	i1.insert(8, 2, 11);
	i1.insert(0, 0, 1);
	i1.print();
	d1.insert(1, 7, 100.001);
	d1.print();
	s1.insert(3, 4, "z");
	s1.print();
	std::cout << i1.access(8,1) << std::endl;
	std::cout << i1.access(8,2) << std::endl;
	std::cout << i1.access(9,1) << std::endl;
	i1.remove(8, 2);
	i1.remove(9, 4);
	i1.remove(0, 0);
	i1.print();

  return 0;
}