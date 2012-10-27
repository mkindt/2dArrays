BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: main_test.cpp 2dArray.o
	$(CPP) $(CPPFLAGS) -o test1 main_test.cpp 2dArray.o

2dArray.o: 2dArray.h 2dArray.cpp
	$(CPP) $(CPPFLAGS) -c 2dArray.cpp

clean:
	rm -f test1
	rm -f *.o
	rm -f *~
	# rm -f $(BUILD)/main
