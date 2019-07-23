#include "stdio.h"
#include <string.h>
#include "cJSON.h"

int parser(char *string, char *expected)
{
	int result;
	cJSON *root = cJSON_Parse(string);
	if ( root != NULL ) {
		cJSON *cat = cJSON_GetObjectItem(root, "cat");
		cJSON *message = cJSON_GetObjectItem(root, "message");
		if ( message != NULL ) {
			result = strcmp(message->valuestring, expected); 
			if ( result == 0) {
				return 1;            // success -> 1
			}
			else {
				return 0;           // failure -> 0
			}
		}
		
	}
	else {
		return -1;					// unable to parse -> -1
	}
	
}


