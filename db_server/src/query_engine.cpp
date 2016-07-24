#include "db_header.h"
#include "logger.h"

//Query Engine Parser
//Algorithm Proposed
//Connection handler will pass query to query engine
//query engine will parse the client query 
//send it to the Database engine.
//database engine will perform file IO.
//results are send to Dispatcher to Send result to client.


// Query Validation/Parsing -> pass to DB Engine -> Pass to Dispatcher -> 
//							Send status to client 

// QUERY Structure - 
//
//	$INIT_CONN$ -- Server will Send OK status with Buffer Size
//	
//	$CREATE_T$<T_NAME> -- Server Make Metadata File & 
//			      Datafile<named after table> 
//
//	Data type of each col is -- <String>
//	$ADD_SCH$<NO_OF_COL>$<Name_of_Col>$ .. < > 
//
//	$ADD_DATA$<Data Wit COL_MAPPING>
//	
//

bool QueryEngine :: query_validator(string query)
{
		




}

vector<string> QueryEngine :: spliter(string query, char delim)
{
	



}




