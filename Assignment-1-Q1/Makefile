CC = gcc
CFLAGS = -Wall
OBJ = name.o name_reverse.o name_length.o

all: program

program: $(OBJ)
	$(CC) $(CFLAGS) -o program $(OBJ)

name.o: name.c name_reverse.h name_length.h
	$(CC) $(CFLAGS) -c name.c

name_reverse.o: name_reverse.c name_reverse.h
	$(CC) $(CFLAGS) -c name_reverse.c

name_length.o: name_length.c name_length.h
	$(CC) $(CFLAGS) -c name_length.c

clean:
	rm -f *.o program