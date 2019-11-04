#include <string.h>
#include <stdio.h>

#define MAXSIZE 500

/*
Author: Sean Feigis
Last Updated: October 27, 2019
Purpose: To print out the number of times each word is seen, alphabetically
*/


int main( int argc, char *argv[] ) {
   char line[MAXSIZE];
   int count = 1;
   char currentIteration[MAXSIZE];
   char lastIteration[MAXSIZE];

	strcpy(lastIteration,"");
   while ( fgets ( line, MAXSIZE, stdin ) != NULL ) {
      strcpy(currentIteration, line);
	   if ( strcmp(currentIteration, lastIteration) == 0) {
	      count++;
	   } else { 
         if (strcmp(lastIteration, "") != 0) {
            printf ("%03d %s", count, lastIteration);
            strcpy(lastIteration, currentIteration);
            count = 1;
         } else {
         strcpy(lastIteration, currentIteration);
         }
      }
   }
   printf ("%03d %s", count, currentIteration);
   return(0);
} 
