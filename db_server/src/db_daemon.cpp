#include	"db_header.h"
#include	"connection_handler_class.h"
#include	"daemon_class.h"
#include 	"logger.h"

int Daemon::start_daemon_process(int svr_sock_fd)
{

	ConnectionHandler conn_init;	
	Logger logger;

	logger.log_toconsole(Severity::INFO, 
			std::vector<std::string>{"Froking Process.."});
//	process_id = fork();
	
//	if (CHECK > process_id)
//	{
		logger.log_toconsole(Severity::ERROR, 
			std::vector<std::string>{"Fork Failed.. Shutdown Database !"});
//		return EXIT_FAILURE;
//	}
	
//	if (CHECK < process_id)
//	{
		logger.log_toconsole(Severity::WARN, 
			std::vector<std::string>{"Killing Parent Process.."});
//		exit(EXIT_SUCCESS);
//	}
	
	logger.log_toconsole(Severity::INFO, 
		std::vector<std::string>{"Forking Complete .."});
	
	logger.log_toconsole(Severity::WARN, 
		std::vector<std::string>{"Closing All I/O Channels.."});
//	close(STDOUT_FILENO);
//	close(STDIN_FILENO);
//	close(STDERR_FILENO);

	logger.log_toconsole(Severity::WARN, 
		std::vector<std::string>{"Ignoring all signals.."});
//	signal(SIGTTOU, SIG_IGN);
//	signal(SIGTTIN, SIG_IGN);
//	signal(SIGCHLD, SIG_IGN);

	conn_init.db_connection_handler(svr_sock_fd);	

}

