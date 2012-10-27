BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: main_test.cpp 2dArray.o
	$(CPP) $(CPPFLAGS) -o test1 main_test.cpp 2dArray.o

2dArray.o: TwoDArray.h TwoDArray.cpp Node.o
	$(CPP) $(CPPFLAGS) -c 2dArray.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c Node.cpp
clean:
	rm -f test1
	rm -f *.o
	rm -f *~
	# rm -f $(BUILD)/main
