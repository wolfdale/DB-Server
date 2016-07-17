#include	"db_header.h"
#include	"socket_class.h"
#include	"daemon_class.h"
#include	"logger.h"

int main(int argc, char **argv)
{
	Logger logger;
	Daemon db_deamon_svr;
	Socket db_svr_sock;
	int sock_fd;
	
	logger.log_toconsole(Severity::INFO, 
		std::vector<std::string>{"DataBase Server Version 0.1"});
	logger.log_tostream(Severity::INFO, 
		std::vector<std::string>{"DataBase Server Version 0.1"});
	
	logger.log_toconsole(Severity::INFO, 
		std::vector<std::string>{"Creating Database Server Socket..."});
	logger.log_tostream(Severity::INFO, 
		std::vector<std::string>{"Creating DataBase Server Socket..."});

	try{
		sock_fd = db_svr_sock.create_socket();
		logger.log_toconsole(Severity::INFO, 
			std::vector<std::string>{"Socket Created Successfully.."});
		logger.log_tostream(Severity::INFO, 
			std::vector<std::string>{"Socket Created Successfully.."});
	}
	catch(const char *exp_msg){
		logger.log_toconsole(Severity::ERROR, 
			std::vector<std::string>{"Socket Failed. Database Shutdown !"});
		logger.log_tostream(Severity::ERROR, 
			std::vector<std::string>{"Socket Failed. Database Shutdown !"});
		return EXIT_FAILURE;
	}
	try{
		logger.log_toconsole(Severity::INFO, 
			std::vector<std::string>{"Invoking Database as Daemon Process..."});
		logger.log_tostream(Severity::INFO, 
			std::vector<std::string>{"Invoking Database as Daemon Process..."});
		db_deamon_svr.start_daemon_process(sock_fd);			
		
	}
	catch(const char *exp_msg)
	{
		logger.log_toconsole(Severity::ERROR, 
			std::vector<std::string>{"Daemon Module Failed. Database Shutdown !"});
		logger.log_tostream(Severity::ERROR, 
			std::vector<std::string>{"Daemon Module Failed. Database Shutdown !"});
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;

}































