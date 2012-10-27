BUILD = ../build
AR = ./array
CPP = g++
CPPFLAGS = -Wall -Wextra

main: main_test.cpp 2dArray.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main main_test.cpp 2dArray.o

2dArray.o: 2dArray.cpp
	$(CPP) $(CPPFLAGS) -c $(AR)/2dArray.cpp

clean:
	rm -f *.o
	rm -f *~
	# rm -f $(BUILD)/main
