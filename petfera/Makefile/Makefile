INC_DIR	= ../include
SRC_DIR	= ../src
OBJ_DIR = ../build
LIB_DIR	= ../lib
LST_OBJS = $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/tratador.o $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/animal.o $(OBJ_DIR)/animalsilvestre.o $(OBJ_DIR)/animalexotico.o $(OBJ_DIR)/animalnativo.o $(OBJ_DIR)/anfibio.o $(OBJ_DIR)/anfibionativo.o $(OBJ_DIR)/anfibioexotico.o $(OBJ_DIR)/mamifero.o $(OBJ_DIR)/mamiferonativo.o $(OBJ_DIR)/mamiferoexotico.o $(OBJ_DIR)/reptil.o $(OBJ_DIR)/reptilnativo.o $(OBJ_DIR)/reptilexotico.o $(OBJ_DIR)/ave.o $(OBJ_DIR)/avenativo.o $(OBJ_DIR)/aveexotico.o $(OBJ_DIR)/petfera.o

CC		= g++
# CXXFLAGS= -Wall -std=c++11 -ansi
CXXFLAGS= -Wall -W -ansi -std=c++11 -g
# all: petfera mamiferonativo.o
# all: animal.o tratador.o funcionario.o veterinario.o animalsilvestre.o animalnativo.o animalexotico.o anfibio.o mamifero.o reptil.o ave.o anfibionativo.o anfibioexotico.o mamiferonativo.o mamiferoexotico.o reptilnativo.o reptilexotico.o avenativo.o aveexotico.o petfera.o petfera
all: petfera

#CLASSES PRINCIPAIS
# petfera: $(OBJ_DIR)/animal.o $(OBJ_DIR)/animalsilvestre.o $(OBJ_DIR)/animalnativo.o $(OBJ_DIR)/anfibio.o $(OBJ_DIR)/anfibionativo.o $(OBJ_DIR)/petfera.o $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/tratador.o
# 	$(CC) $(CXXFLAGS) $^ ../main.cpp -o ../main
# 	# $(CC) $(CXXFLAGS) ../main.cpp $(OBJ_DIR)/petfera.o $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/tratador.o -o ../main

# petfera: $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/tratador.o $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/animal.o $(OBJ_DIR)/animalsilvestre.o $(OBJ_DIR)/animalexotico.o $(OBJ_DIR)/animalnativo.o $(OBJ_DIR)/anfibio.o $(OBJ_DIR)/anfibionativo.o $(OBJ_DIR)/petfera.o
petfera: funcionario.o tratador.o veterinario.o animal.o animalsilvestre.o animalexotico.o animalnativo.o anfibio.o anfibionativo.o anfibioexotico.o mamifero.o mamiferonativo.o mamiferoexotico.o reptil.o reptilnativo.o reptilexotico.o ave.o avenativo.o aveexotico.o petfera.o
	$(CC) $(CXXFLAGS) $(LST_OBJS) ../main.cpp -o ../main

petfera.o: $(SRC_DIR)/petfera.cpp $(INC_DIR)/petfera.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

#RELACIONADO AS DEMAIS CLASSES
anfibionativo.o: $(SRC_DIR)/anfibionativo.cpp $(INC_DIR)/anfibionativo.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

anfibioexotico.o: $(SRC_DIR)/anfibioexotico.cpp $(INC_DIR)/anfibioexotico.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

mamiferonativo.o: $(SRC_DIR)/mamiferonativo.cpp $(INC_DIR)/mamiferonativo.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

mamiferoexotico.o: $(SRC_DIR)/mamiferoexotico.cpp $(INC_DIR)/mamiferoexotico.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

reptilnativo.o: $(SRC_DIR)/reptilnativo.cpp $(INC_DIR)/reptilnativo.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

reptilexotico.o: $(SRC_DIR)/reptilexotico.cpp $(INC_DIR)/reptilexotico.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

avenativo.o: $(SRC_DIR)/avenativo.cpp $(INC_DIR)/avenativo.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

aveexotico.o: $(SRC_DIR)/aveexotico.cpp $(INC_DIR)/aveexotico.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

#RELACIONADO A ANIMAIS BASES (2)
anfibio.o: $(SRC_DIR)/anfibio.cpp $(INC_DIR)/anfibio.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

mamifero.o: $(SRC_DIR)/mamifero.cpp $(INC_DIR)/mamifero.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

reptil.o: $(SRC_DIR)/reptil.cpp $(INC_DIR)/reptil.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

ave.o: $(SRC_DIR)/ave.cpp $(INC_DIR)/ave.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

#RELACIONADO A ANIMAIS BASES (1)
animalexotico.o: $(SRC_DIR)/animalexotico.cpp $(INC_DIR)/animalexotico.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

animalnativo.o: $(SRC_DIR)/animalnativo.cpp $(INC_DIR)/animalnativo.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

animalsilvestre.o: $(SRC_DIR)/animalsilvestre.cpp $(INC_DIR)/animalsilvestre.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

animal.o: $(SRC_DIR)/animal.cpp $(INC_DIR)/animal.h
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@


# RELACIONADO A FUNCIONÁRIOS
tratador.o: $(INC_DIR)/tratador.h $(SRC_DIR)/tratador.cpp
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@
	
veterinario.o: $(INC_DIR)/veterinario.h $(SRC_DIR)/veterinario.cpp
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@

funcionario.o: $(INC_DIR)/funcionario.h $(SRC_DIR)/funcionario.cpp
	$(CC) $(CXXFLAGS) -c $(SRC_DIR)/$*.cpp -o $(OBJ_DIR)/$@