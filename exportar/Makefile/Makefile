INC_DIR	= ../include
SRC_DIR	= ../src
OBJ_DIR = ../build
LIB_DIR	= ../lib

# Caminho para a biblioteca petfera
LIB_CMH = ../../petfera/lib

CC		= g++
CXXFLAGS = -Wall -W -ansi -std=c++11 -g

exporta:
	$(CC) $(CXXFLAGS) petfera.a ../exportar.cpp -o ../../$@

# gerenciapetfera.o:	$(SRC_DIR)/gerenciapetfera.cpp $(INC_DIR)/gerenciapetfera.h
# 	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@