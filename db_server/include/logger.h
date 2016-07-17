#ifndef LOGGER_CLASS
#define LOGGER_CLASS

#include<vector>
#include<string>
#include<fstream>
#include "log_color.h"
#include "log_severity.h"

class Logger{
	
public:
	
	Logger()
	{
		log_stream.open("../db_log/database_logs.txt", std::ios_base::out | std::ios_base::app);
	}

	~Logger()
	{
		log_stream.close();
	}
	
	void log_tostream(Severity level, std::vector<std::string> log_msg);
	void log_toconsole(Severity level, std::vector<std::string> log_msg);


private:
	std::fstream log_stream;		

};




#endif






