#include <string.h>

/*
Author: Sean Feigis
Last updated: October 27. 2019
Purpose: replaces all the digits in a line with a blank space
*/


int replaceDigits( char *line) {
   int currentChar;
   int i;
   int total = 0;

   for (i = 0; i < strlen(line); i++){
      currentChar = line[i];

      if (currentChar > 47 && currentChar < 58) {

         (line[i]) =' ';
	 total++;
      } 
   }

   return ( total );
}


