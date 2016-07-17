#include "log_severity.h"
#include "logger.h"
#include "log_color.h"

void Logging::log_toconsol(Severity level, std::vector<std::string> log_msg)
{

	switch(level){
		case Severity::INFO:
			std::cout << Color::yellow;
			break; 
		case Severity::WARN:
			std::cout << Color::magenta
			break;
		case Severity::ERROR:	
			std::cout << color::red
			break;
	}
	
	for(auto itr = log_msg.begin() ; itr != log_msg.end(); ++itr)
	{
		std::cout << *itr << " ";
	}	
}

void Logging::log_tostream(Severity level, std::vector<std::string> log_msg)
{
	


}









