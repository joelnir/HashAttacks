DIR_FLAGS = -I ../../lib

libs = ../../lib/*.a
SRC = main.cpp ../../lib/hashlibpp.h ../../lib/libhl++.a
OBJECTS = $(SRC:.cpp=.o)

EXE_NAME = hashTest

all : hasher
hasher : cpp_comp $(SRC)

cpp_comp : $(SRC)
	g++ -std=c++11 -o $(EXE_NAME) $^ -L $(libs) $(DIR_FLAGS)
