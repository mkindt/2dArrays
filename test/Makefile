BUILD = ./build
TEST = ./test
LIB = ./lib
AR = ./src/array
VR = ./src/vray

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/array_gtest.cpp

$(BUILD)/main: $(AR)/2dArray.cpp $(AR)/2dArray.o
	cd $(AR); $(MAKE)

$(BUILD)/main: $(VR)/2dArray.cpp $(VR)/2dArray.o
	cd $(VR); $(MAKE)

$(TEST)/array_test: $(TEST)/array_gtest.cpp $(AR)/2dArray.o
	cd $(TEST); $(MAKE)

clean:
	cd $(AR); $(MAKE) clean
	cd $(VR); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
