#include "db_header.h"
#include "socket_class.h"
#include "logger.h"

int Socket :: create_socket()
{
	Logger logger;
	
	logger.log_toconsole(Severity::INFO, 
			std::vector<std::string>{"Socket Creation Module Invoked.."});
	sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
	
	if (CHECK > sock_fd)
	{
		logger.log_toconsole(Severity::ERROR, 
			std::vector<std::string>{"Socket System Call Failure !!"});
		throw "Socket Sys call Failed.";
	}
	
	memset(&new_addr, 0, sizeof(new_addr));	
	new_addr.sin_family = AF_INET;
	new_addr.sin_port = INIT_PORT;
	new_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	
	bind_status = bind(sock_fd, (struct sockaddr*)&new_addr, sizeof(new_addr));

	if (CHECK > bind_status)
	{
		logger.log_toconsole(Severity::ERROR, 
			std::vector<std::string>{"Bind System Call Failed !!"});
		throw "Socket Sys call Failed.";
	}

	return(sock_fd);

}



