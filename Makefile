CC=g++
CFLAGS=-I. -isystem /cs/class/cs130a/googletest/googletest/include -std=c++0x
LDFLAGS=-pthread /cs/class/cs130a/googletest/libgtest.a

all:	avl_test

avl_default_test:
	$(CC) avl.cc main.cc -o $@ $(CFLAGS) $(LDFLAGS)

avl_test:
	$(CC) avl.cc test.cc -o $@ $(CFLAGS) $(LDFLAGS)

.PHONY:	clean

clean:
	rm -rf avl_test
	rm -rf avl_default_test
