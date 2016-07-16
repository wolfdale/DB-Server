#ifndef SOCKET_OPS_CLASS
#define SOCKET_OPS_CLASS

	class Socket{
		

	private:
		int sock_fd;
		int bind_status;
		struct sockaddr_in new_addr;
		struct sockaddr_in sin;

	public:
		int create_socket(); 
			
		Socket(){
			sock_fd = -1;
			bind_status = -1;
		}
	};

#endif










