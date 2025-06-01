
all: bin
	gcc -c src/Common.c -o Common.o
	gcc src/Cliente.c Common.o -o bin/client
	gcc src/Servidor.c Common.o -o bin/server

bin:
	mkdir -p bin
