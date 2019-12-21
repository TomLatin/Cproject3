CC=gcc
FLAGS=-Wall -g

all: isort txtfind

isort:mainisort.o isort.o
	$(CC) $(FLAGS) -o isort mainisort.o isort.o

txtfind:maintxt.o txtfind.o
	$(CC) $(FLAGS) -o txtfind maintxt.o txtfind.o

mainisort.o:mainisort.c 
	$(CC) $(FLAGS) -c mainisort.c 

maintxt.o:maintxt.c 
	$(CC) $(FLAGS) -c maintxt.c 

isort.o:isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c 

.PHONY:clean all

clean:
	rm -f *.o isort txtfind