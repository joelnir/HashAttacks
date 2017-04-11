DIR_FLAGS = -I ../lib

libs = ../lib/*.a
SRC = main.cpp test1.cpp test1.h ../lib/hashlibpp.h ../lib/libhl++.a
OBJECTS = $(SRC:.cpp=.o)

EXE_NAME = hasher

all : hasher

hasher : cpp_comp $(SRC)

cpp_comp : $(SRC)
	g++ -o $(EXE_NAME) $^ -L $(libs) $(DIR_FLAGS)
