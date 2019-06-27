
CXX = g++

CFLAGS = -Wall -O -g
TARGET = HttpTest

OBJS = HttpRequest.o main.o

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -ldl -o $(TARGET) $(CFLAGS) 
	#@clear
	
	
main.o: main.cpp HttpRequest.h
	$(CXX) $(CFLAGS) -c main.cpp
	
HttpRequest.o: HttpRequest.cpp HttpRequest.h
	$(CXX) $(CFLAGS) -c HttpRequest.cpp

clean:
	#@clear
	@echo 正在移除...
	rm -rf *.o 
	
