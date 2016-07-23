#include <db_header.h>
#include <connection_handler_class.h>
#include <daemon_class.h>
#include <logger.h>

void ConnectionHandler::db_connection_handler(int db_sock_fd)
{
	Logger logger;	
	while(1)
	{
		logger.log_toconsole(Severity::INFO, 
				std::vector<std::string>{"Waiting For Request.."});
	
		memset(query_string, 0, QUERYSIZE);


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









