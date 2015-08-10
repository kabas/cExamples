/*
* Author: Kevin Abas
* Date:   August 2015
* Description: Program replaces space characters with the
*              string "%20", use double quotes for argument.
*/
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

char* urlify(char *in, int size) {
  int i, j, space_count;
  
  if( size == 0 ) {
    printf("Error empty string input.");
    return "";
  }

  i = size - 1;
  space_count = 0;
  while( i >= 0 ) {
    if( in[i] == ' ' ) {
      space_count++;
    }
    i--;
  }

  j = (size + (space_count * 2));
  i = size - 1;
  in[j] = '\0';
  while( i>=0 ){
    if( in[i] == ' ' ) {
      in[j-1] = '0';
      in[j-2] = '2';
      in[j-3] = '%';
      j = j - 3;
      i--;
    } else {
      in[j-1] = in[i];
      j--, i--;
    }
  }
    
  return in;
}

int main(int argc, char *argv[]) {

  if (argc != 2 ) {
    printf("Correct Syntax: ./urlify \"string\" ");
    exit(1);
  }

  int length = strlen(argv[1]);
  char *sentence = (char *) malloc( sizeof(char) * (length * 3 + 1) );
  sentence = argv[1];
  
  printf("Input: %s\n", sentence);
  printf("Output: %s\n", urlify(sentence, length));

  return 0;
}
