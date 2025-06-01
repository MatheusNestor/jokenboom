INCLUDE  = include

all:
	gcc -c ../src/Common.c
	gcc ../src/Cliente.c Common.o -o client
	gcc ../src/Servidor.c Common.o -o server

