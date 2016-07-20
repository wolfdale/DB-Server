
CC=g++
FLAGS= -c -g -std=c++0x


BIN=../bin/
SRC=../src/
OBJ=../obj/
INCLUDE=-I../include/
HEADER=../include/


$(BIN)DB_SERVER:$(OBJ)main.o $(OBJ)socket.o $(OBJ)daemon.o $(OBJ)logger.o $(OBJ)connection_handler.o
	$(CC) -o $(BIN)DB_SERVER $(OBJ)main.o $(OBJ)daemon.o $(OBJ)socket.o $(OBJ)logger.o $(OBJ)connection_handler.o $(INCLUDE)  


$(OBJ)main.o:$(SRC)main.cpp $(HEADER)db_header.h $(HEADER)socket_class.h $(HEADER)logger.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)main.cpp -o $(OBJ)main.o


$(OBJ)socket.o:$(SRC)create_socket.cpp $(HEADER)db_header.h $(HEADER)socket_class.h $(HEADER)logger.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)create_socket.cpp -o $(OBJ)socket.o


$(OBJ)daemon.o:$(SRC)db_daemon.cpp $(HEADER)db_header.h $(HEADER)socket_class.h $(HEADER)logger.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)db_daemon.cpp -o $(OBJ)daemon.o

$(OBJ)connection_handler.o:$(SRC)connection_handler.cpp $(HEADER)db_header.h $(HEADER)socket_class.h $(HEADER)logger.h $(HEADER)connection_handler_class.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)connection_handler.cpp -o $(OBJ)connection_handler.o

$(OBJ)logger.o:$(SRC)logging.cpp $(HEADER)logger.h
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)logging.cpp -o $(OBJ)logger.o


clean:
	rm -rf $(OBJ)*















