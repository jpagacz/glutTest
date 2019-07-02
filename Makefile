TARGET="test"
CC=gcc
CFLAGS=-Wall -std=c99
OBJ=main.c
GLFLAGS=-lglut -lGLU -lGL

helloworld: $(OBJ)
		$(CC) -o helloworld $(OBJ) $(LDFLAGS) $(GLFLAGS)



clean :
	rm helloworld
