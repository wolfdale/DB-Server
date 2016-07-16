
CC=g++
FLAGS= -c -g -std=c++0x


BIN=../bin/
SRC=../src/
OBJ=../obj/
INCLUDE=-I../include/
HEADER=../include/


$(BIN)DB_SERVER:$(OBJ)main.o $(OBJ)socket.o $(OBJ)daemon.o
	$(CC) -o $(BIN)DB_SERVER $(OBJ)main.o $(OBJ)daemon.o $(OBJ)socket.o $(INCLUDE) 


$(OBJ)main.o:$(SRC)main.cpp $(HEADER)db_header.h $(HEADER)socket_class.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)main.cpp -o $(OBJ)main.o


$(OBJ)socket.o:$(SRC)create_socket.cpp $(HEADER)db_header.h $(HEADER)socket_class.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)create_socket.cpp -o $(OBJ)socket.o


$(OBJ)daemon.o:$(SRC)db_daemon.cpp $(HEADER)db_header.h $(HEADER)socket_class.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)db_daemon.cpp -o $(OBJ)daemon.o



















