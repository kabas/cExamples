#include <strings.h>
#include <stdio.h>

void swap_strings_in_place( char *str1, char *str2){
  printf("Frist string is: %s\n", str1);
  printf("Second string is: %s\n", str2);	

  int i = 0;
  while( ( i <= strlen(str1) ) && ( i <= strlen(str2) ) ){
    str1[i] = str1[i] ^ str2[i];
    str2[i] = str2[i] ^ str1[i];
    str1[i] = str1[i] ^ str2[i];
    i++;
  } 

  printf("\nNow 1st is: %s\n",str1);
  printf("And 2nd is: %s\n",str2);
}

int main (int argc, char **argv){
  if(argc < 3)
    printf("wrong arguments: swpInPlace <1st_str> <2nd_str>");
  
  swap_strings_in_place(argv[1],argv[2]);
  
  return 1;
}

