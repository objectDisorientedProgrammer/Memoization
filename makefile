CC=gcc
CFLAGS=-std=c99
INPATH=src/
#OUTPATH=bin/

all: main

fct: ${INPATH}factorial.c
	${CC} ${CFLAGS} -c ${INPATH}factorial.c
	mv factorial.o ${INPATH}
	
main: fct ${INPATH}main.c
	${CC} ${CFLAGS} ${INPATH}main.c ${INPATH}factorial.o -o app

clean:
	rm app ${INPATH}*.o

.PHONY: clean
.PHONY: all
