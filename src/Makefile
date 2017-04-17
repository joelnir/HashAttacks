DIR_FLAGS = -I ../lib

libs = ../lib/*.a
SRC = main.cpp FileHandler.cpp FileHandler.h ../lib/hashlibpp.h ../lib/libhl++.a Attack.h DictAttack.h DictAttack.cpp StringModifier.h Attack.cpp NumModifier.h NumModifier.cpp SpecialCharModifier.h SpecialCharModifier.cpp
OBJECTS = $(SRC:.cpp=.o)

EXE_NAME = hasher

all : hasher

hasher : cpp_comp $(SRC)

cpp_comp : $(SRC)
	g++ -std=c++11 -o $(EXE_NAME) $^ -L $(libs) $(DIR_FLAGS)
