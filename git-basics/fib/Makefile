CC = g++
CFLAGS = -c -g -Wall -Wextra -Wunused
LFLAGS = -o fib

main: fib-iterative.cpp
		$(CC) $(LFLAGS)-it fib-iterative.cpp
		rm -f *.h.gch
		rm -f *.o

recursive: fib-recursive.cpp
		$(CC) $(LFLAGS)-rec fib-recursive.cpp
		rm -f *.h.gch
		rm -f *.o

complete: fib-complete.cpp
		$(CC) $(LFLAGS) fib-complete.cpp
		rm -f *.h.gch
		rm -f *.o

clean:
		rm -rf fib-it fib-rec fib-complete