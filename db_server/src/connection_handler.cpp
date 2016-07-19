#include <db_header.h>
#include <connection_handler_class.h>

void ConnectionHandler::db_connection_handler(int db_sock_fd)
{
	
	while(1)
	{
		query_len = recvfrom(db_sock_fd, query_string, QUERYSIZE, 0, 
				(struct sockaddr*)&clientaddr, &length);
		
		std::cout << query_string << std::endl;
	
		//Proposed Algorithm for Working
		//
		//First create a Session ID ( for client )
		//create thread arguments for threads [ Buffer size for comm. , 
		//		status = OK ]
		// Create a port address for communication.
		// Detach Thread
		// Send the status report to client in thread 
		//
		// Receive a request to create a table
		// make all necessary arrangements.
		// send status OK
		//  
		// Create two files on Database [Metadata] [actual data]

	}


}









