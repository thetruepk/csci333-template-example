CPP = g++
CFLAGS = -Wall -Wextra -Werror

test: node_test.cpp Node.o
	$(CPP) $(CFLAGS) -o test $^

Node.o: Node.h Node.cpp
	$(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f *.o;
	rm -f test;
	rm -f *~;
