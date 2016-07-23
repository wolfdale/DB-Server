#include	"client_header.h"


int main(int argc , char ** argv)
{
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Simple DataBase Test Client" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	
	//Work Toward Sending INITIAL MSG to server
	//Create UDP Socket
	//Send INIT_CONN MSG
	//Wait For Receive Signal
	//TimeOut can be use for Sending INIT_CONN msg again.(Future)

	char cmd[100];
	memset(cmd , 0 , 100);
	sprintf(cmd, "INIT_CONN");

	int sock_fd = -1;
	int bind_status = -1;
	struct sockaddr_in addr_to_server;	
	socklen_t length;
	length = sizeof(addr_to_server);	
	sock_fd = socket(AF_INET, SOCK_DGRAM, 0 );

	if(CHECK > sock_fd){
		return EXIT_FAILURE;
	}		
	
	memset(&addr_to_server, 0,sizeof(addr_to_server));
	addr_to_server.sin_family = AF_INET;
	addr_to_server.sin_port = SERVER_PORT;
	inet_aton("127.0.0.1", &addr_to_server.sin_addr);

	std::cout << "Server PORT :  " << SERVER_PORT << std::endl;
	std::cout << "DATABASE Command :  "<< cmd << std::endl;
	
	int len= sendto(sock_fd, cmd, 100, 0, (struct sockaddr*)&addr_to_server, length);

	std::cout << "MSG Sent"<< std::endl;		
	std::cout << "MSG Length : " << len << std::endl;		
}


