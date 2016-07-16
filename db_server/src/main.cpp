#include	"db_header.h"
#include	"socket_class.h"
#include	"daemon_class.h"

int main(int argc, char **argv)
{
	//Application log
	std::cout << "DataBase Server Version 0.1"  << std::endl;
	
	std::cout << "Creating Database Server Socket" << std::endl;
	
	Daemon db_deamon_svr;

	Socket db_svr_sock;
	int sock_fd;
	//log to create socket
	std::cout << "Creating Socket" << std::endl;
	try{
		sock_fd = db_svr_sock.create_socket();
		std::cout << "Socket Created" << std::endl;
	}
	catch( const char *exp_msg){
		//log_msg
		std::cout << exp_msg  << std::endl;
		return EXIT_FAILURE;
	}
	//lOG deamon invoke
	try{
		db_deamon_svr.start_daemon_process(sock_fd);			
		
	}
	catch( const char *exp_msg)
	{
		//log msg
		std::cout << exp_msg << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_FAILURE;

}































