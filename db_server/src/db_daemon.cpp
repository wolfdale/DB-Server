#include	"db_header.h"
#include	"db_connection_class.h"
#include	"daemon_class.h"


int Daemon::start_daemon_process(int svr_sock_fd)
{

//	ConnectionHandler conn_init;	

	//LOG
	std::cout << "Deamon Module" << std::endl;
	process_id = fork();
	if (CHECK > process_id)
	{
		//log fork unsuccessful
		std::cout << "Fork Failed" << std::endl;
		return EXIT_FAILURE;
	}
	
	if (CHECK < process_id)
	{
		//log kill parent process
		std::cout << "Kill Parent" << std::endl;
		exit(EXIT_SUCCESS);
	}
	
	//log fork success
	
	std::cout << "Fork Sys Call Complete" << std::endl;
	//log close all i/o & error streams
	

	close(STDOUT_FILENO);
	close(STDIN_FILENO);
	close(STDERR_FILENO);

	//LOG BLOCK ALL SIGNAL
	signal(SIGTTOU, SIG_IGN);
	signal(SIGTTIN, SIG_IGN);
	signal(SIGCHLD, SIG_IGN);

//	conn_init.db_connection_handler(svr_sock_fd);	

//	return EXIT_SUCCESS;

	while(1){}

}


