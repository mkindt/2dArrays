#include "../../lib/gtest-1.6.0/include/gtest/gtest.h"
#include "2dArray.h"

TEST(ArrayTest, Insert) {
	TwoDArray<int> i1(10, 5, 42);
	TwoDArray<double> d1(2, 9, 9.9);
	TwoDArray<std::string> s1(6, 8, "e");
	i1.insert(9, 4, 100);
	i1.insert(8, 1, 99);
	i1.insert(8, 2, 11);
	i1.insert(0, 0, 1);
	s1.insert(5, 7, "r");
  EXPECT_EQ(11, i1.access(8,2));
  EXPECT_EQ(100, i1.access(9,4));
  EXPECT_EQ(11, i1.access(8,2));
  EXPECT_EQ(1, i1.access(0,0));
  EXPECT_EQ("r", s1.access(5,7));	
}

TEST(ArrayTest, Access) {
	TwoDArray<int> i2(10, 5, 42);
	TwoDArray<double> d2(2, 9, 9.9);
	TwoDArray<std::string> s2(6, 8, "e");
  EXPECT_EQ(42, i2.access(8,2));
  EXPECT_EQ(42, i2.access(0,0));
  EXPECT_EQ("e", s2.access(5,7));
  EXPECT_EQ(9.9, d2.access(5,7));	
}

TEST(ArrayTest, Remove) {
	TwoDArray<int> i3(10, 5, 42);
	TwoDArray<double> d3(2, 9, 9.9);
	TwoDArray<std::string> s3(6, 8, "e");
	i3.insert(9, 4, 100);
	i3.insert(8, 1, 99);
	i3.insert(8, 2, 11);
	i3.insert(0, 0, 1);
	s3.insert(5, 7, "r");
	i3.remove(9, 4);
	i3.remove(8, 1);
	i3.remove(8, 2);
	i3.remove(0, 0);
	s3.remove(5, 7);	
  EXPECT_EQ(42, i3.access(9,4));
  EXPECT_EQ(42, i3.access(8,1));
  EXPECT_EQ(42, i3.access(8,2));
  EXPECT_EQ(42, i3.access(0,0));
  EXPECT_EQ("e", s3.access(5,7));
}

TEST(ArrayTest, getNumRows) {
	TwoDArray<int> i4(10, 5, 42);
	TwoDArray<double> d4(2, 9, 9.9);
	TwoDArray<std::string> s4(6, 8, "e");
  EXPECT_EQ(10, i4.access(8,2));
  EXPECT_EQ(2, d4.access(0,0));
  EXPECT_EQ(6, s4.access(5,7));	
}

TEST(ArrayTest, getNumCols) {
	TwoDArray<int> i5(10, 5, 42);
	TwoDArray<double> d5(2, 9, 9.9);
	TwoDArray<std::string> s5(6, 8, "e");
  EXPECT_EQ(5, i5.access(8,2));
  EXPECT_EQ(9, d5.access(0,0));
  EXPECT_EQ(8, s5.access(5,7));

}

// TEST(ArrayTest, Print) {
