//Program checks if string has unique characters
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void merge(char *str, int size, int half_size){
  int x,y,z;
  char *new_string = malloc(size * sizeof(char));

  for(x=0, y=half_size, z=0; z < size ; z++){
    if( x == half_size){
      new_string[z] = str[y++];
    }else if (y == size){
      new_string[z] = str[x++];
    }else if (str[y] < str[x]){
      new_string[z] = str[y++];
    }else{
      new_string[z] = str[x++];
    }
  }

  for(x=0; x < size; x++){
    str[x] = new_string[x];
    if( x > 0){
      int prev = x - 1;
      if(str[x] == str[prev]){
        printf("Not Unique!");
        exit(0);
      }
    }
  }
  
  free(new_string);
}

void check_unique_char(char *str, int size){
  if(size < 2){
    return;
  }
  int half_size = size / 2;
  //left half recurse
  check_unique_char(str, half_size);
  //right half recurse
  check_unique_char(str + half_size, size - half_size); 
  merge(str, size, half_size);
}

int main(int argc, char **argsv){
  if(argc > 2 || argc < 2){
    printf("invalid use only one string at a time: ./bin <str>");
    return -1;
  }
  char *string = argsv[1];
  int string_length = strlen(string);

  if(string_length == 1){
    printf("Definitely, only one character.");
    return 0;
  }

  check_unique_char(string, string_length);
  printf("It's unique!");

  return 0;
}
