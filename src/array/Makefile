CPP = g++
CFLAGS = -Wall -Wextra -Werror



test: array_gtest.cpp 2dArray.o 
	$(CPP) $(CFLAGS) -o test22 $^

2dArray.o: 2dArray.h 2dArray.cpp
	$(CPP) $(CFLAGS) -c 2dArray.cpp


clean:
	rm -f *.o;
	rm -f test; rm -f ltest;
	rm -f *~;