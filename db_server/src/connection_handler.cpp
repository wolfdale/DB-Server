#include <db_header.h>
#include <connection_handler_class.h>

void ConnectionHandler::db_connection_handler(int db_sock_fd)
{
	
	while(1)
	{
		query_len = recvfrom(db_sock_fd, query_string, QUERYSIZE, 0, 
				(struct sockaddr*)&clientaddr, &length);
		
		std::cout << query_string << std::endl;
		
		if (query_sting[0] != "$")
		{
			//Log Special Query
			// Display Databaase status 
		}
		else
		{
			// decode_query(query_string);		
		}
	}


}









