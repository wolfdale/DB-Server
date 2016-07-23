
CC=g++
FLAGS= -c -g -std=c++0x

BIN=../bin/
SRC=../src/
OBJ=../obj/
HEADER=../include/
INCLUDE=-I../include/

$(BIN)db_client:$(OBJ)client_main.o
	$(CC) -o $(BIN)db_clinet $(OBJ)client_main.o $(INCLUDE)


$(OBJ)client_main.o:$(SRC)client_main.cpp $(HEADER)client_header.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)client_main.cpp -o $(OBJ)client_main.o












