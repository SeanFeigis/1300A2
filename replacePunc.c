#include <string.h>

/*
Author: Sean Feigis
Last Updated: October 27, 2019
Purpose: replaces all punctuations in a line with a blank space
*/


int replacePunc( char *line ) {
   int n = 0;
   int i;
   int total = 0;
   for (i = 0; i < strlen(line); i++) {
      n = line[i];
      if ( n > 32 && n < 48) {
         line[i] = ' ';
	   total++;
      }
      if ( n > 57 && n < 65) {
         line[i] = ' ';
	   total++;
      }
      if ( n > 90 && n < 97) {
         line[i] = ' ';
	   total++;
      }
      if ( n > 122 && n < 256) {
         line[i] = ' ';
	   total++;
      }
   }
   return(total);
}


