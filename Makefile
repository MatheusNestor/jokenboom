all:

gcc -wall -c common.c
gcc -wall client.c common.o -o client
gcc -wall server.c common.o -o server
