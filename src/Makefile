DIR_FLAGS = -I ../lib

libs = ../lib/*.a
SRC = main.cpp test1.cpp test1.h
OBJECTS = $(SRC:.cpp=.o)

EXE_NAME = hasher

all : hasher

hasher : link $(SRC)

link : $(SRC)
	g++ -o ../$(EXE_NAME) $^ -L $(libs) $(DIR_FLAGS)

#My own source files
#.cpp.o :
#	g++ -c -L $< $(libs) $(DIR_FLAGS)

#Library files
#hashlib :
#	make -f hashlib++/Makefile
