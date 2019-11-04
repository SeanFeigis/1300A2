#include <string.h>

/*
Author: Sean Feigis
Last Updated: October 27, 2019
Purpose: converts all characters to lower case, if applicable
*/


int convertLowerCase( char *line) {
   int currentChar;
   int i;

   for (i = 0; i < strlen(line); i++){
      currentChar = line[i];

      if (currentChar > 64 && currentChar < 91) {

         (line[i]) += 32;

      } 
   }

   return ( 0 );
}



