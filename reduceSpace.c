#include <string.h>

/*
Author: Sean Feigis
Last Updated: October 27, 2019
Purpose: To reduce all the extra white space
*/

int reduceSpace( char *line) {
	int j;
   int i;
   int total;

   for (i = 0; i < strlen(line); i++){

      if (line[i] == 9) {
         for (j = i;  j < strlen(line); j++) {
	         line[j] = line[j+1]; 
	      }	
         total++;	
      } 
      if (line[i] == 32 && line[i+1] == 32) {
	      for (j = i;  j < strlen(line); j++) {
	         line[j] = line[j+1]; 
	      }	
         total++;	
      }
   }
   return ( total );
}


