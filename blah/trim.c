#include <string.h>

/*
Author: Sean Feigis
Last Updated" October 27, 2019
Purpose: Trims all the white space from the beginning and end of each line
*/

int trim( char *line) {
   int i;
   i = line[strlen(line) -1];
   while (i != -1) {
		if (line[i] == ' ') {
	   		line[i] = '\0';
	   		i--;
		} else {
		return (-1);
		}
   }
   return (0);
}


