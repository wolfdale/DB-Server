#include <db_header.h>
#include <connection_handler_class.h>
#include <daemon_class.h>
#include <logger.h>
#include <thread>

void client_handler(int& port);

void client_handler(int& port){


	std::cout << std::this_thread::get_id() << std::endl;
	std::cout << port << std::endl;
	std::cout << std::thread::hardware_concurrency() << std::endl;

}
void ConnectionHandler::db_connection_handler(int db_sock_fd)
{
	Logger logger;	
//	QueryEngine 
	
	std::thread client_thread[100];
	int thread_count = 0;		
	while(1)
	{
		logger.log_toconsole(Severity::INFO, 
				std::vector<std::string>{"Waiting For Request.."});
	
		std::cout << std::this_thread::get_id() << std::endl;
		memset(query_string, 0, QUERYSIZE);


		query_len = recvfrom(db_sock_fd, query_string, QUERYSIZE, 0, 
				(struct sockaddr*)&clientaddr, &length);
		
		std::cout << query_string << std::endl;
		
	//	int client_thread[100];
	//	int thread_count = 0;		
		int port = 5555;//port generation utility

		//Check if Correct Query is sent to server [Query Engine]
		//Generate Port for communication
		std::cout << "Thread Count" << thread_count << std::endl; 
		client_thread[thread_count] = std::thread(&client_handler,  std::ref(port));
		client_thread[thread_count].join();
		thread_count++;

		//Detach Thread
	


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









