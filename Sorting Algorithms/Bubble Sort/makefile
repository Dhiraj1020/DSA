# Bubble sort Makefile
CXX		 = g++
CXXFLAGS = -Wall -std=c++11
TARGET	 = Bubble_Sort_demo
SRC		 = BubbleSort.cpp source.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)