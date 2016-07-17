#ifndef CONNECTION_HANDLER_CLASS
#define CONNECTION_HANDLER_CLASS

	class ConnectionHandler{
	
	private:
		socklen_t length;
		int query_len;
		struct sockaddr_in clientaddr;
		char query_string[QUERYSIZE];
		
	public:
		void db_connection_handler(int);		
	};



#endif






