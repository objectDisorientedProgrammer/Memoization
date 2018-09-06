CC=gcc
CFLAGS=-std=c99
INPATH=src/
APPNAME=app

all: main

fct: ${INPATH}factorial.c
	${CC} ${CFLAGS} -c ${INPATH}factorial.c
	mv factorial.o ${INPATH}
	
main: fct ${INPATH}main.c
	${CC} ${CFLAGS} ${INPATH}main.c ${INPATH}factorial.o -o ${APPNAME}

clean:
	rm ${APPNAME} ${INPATH}*.o

test: all
	./${APPNAME}

.PHONY: all
