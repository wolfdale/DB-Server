#include "db_header.h"
#include "log_severity.h"
#include "logger.h"
//#include "log_color.h"

void Logger::log_toconsole(Severity level, std::vector<std::string> log_msg)
{
	switch(level){
		case Severity::INFO:
			std::cout << Color::yellow;
			break; 
		case Severity::WARN:
			std::cout << Color::magenta;
			break;
		case Severity::ERROR:	
			std::cout << Color::red;
			break;
	}
	
	for(auto itr = log_msg.begin() ; itr != log_msg.end(); ++itr)
	{
		std::cout << *itr << " ";
	
	}
	std::cout << Color::reset << std::endl;	
}

void Logger::log_tostream(Severity level, std::vector<std::string> log_msg)
{
	log_stream << "||" << __DATE__ << "||" << __TIME__ << "||";		
	switch(level){
		case Severity::INFO:
			log_stream << "--" << "INFO" << "--";
			break; 
		case Severity::WARN:
			log_stream << "--" << "WARN" << "--";
			break;
		case Severity::ERROR:	
			log_stream << "--" << "ERROR" << "--";
			break;
	}
	
	for(auto itr = log_msg.begin() ; itr != log_msg.end(); ++itr)
	{
		log_stream << *itr << " ";

	}
	log_stream << std::endl;
}









