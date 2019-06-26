INC_DIR	= ../include
SRC_DIR	= ../src
OBJ_DIR = ../build
LIB_DIR	= ../lib
LST_OBJS = $(OBJ_DIR)/gerenciapetfera.o
# Caminho para a biblioteca petfera
LIB_CMH = ../../petfera/lib

CC		= g++
CXXFLAGS = -Wall -W -ansi -std=c++11 -g

gerenciapetfera: gerenciapetfera.o
	$(CC) $(CXXFLAGS) $(LST_OBJS) $(LIB_CMH)/petfera.a ../main.cpp -o ../../$@

gerenciapetfera.o:	$(SRC_DIR)/gerenciapetfera.cpp $(INC_DIR)/gerenciapetfera.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@