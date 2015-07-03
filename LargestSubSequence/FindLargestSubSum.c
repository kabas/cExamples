#include <stdio.h>

int findMax(int array[]){
  int maxSum = 0;
  int currSum = 0;
  int i;
  
  if(array == NULL){
    printf("ERROR Finding sum for null array!");
    return -1;
  }

  for(i=0; i<10; i++){
    currSum = currSum + array[i];
    if(currSum > maxSum){
      maxSum = currSum;
    }else if( (currSum + maxSum) <= 0){
	currSum = 0;
    }
  }

  return maxSum;
}

int main(){
  int a1MaxSum, a2MaxSum, a3MaxSum;
  int a1[10] = {0,-1,12,0,4,19,-5,-29,9,99};
  int a2[10] = {0,-6,10,0,4,11,-5,-3,9,4};
  int a3[10] = {0,-1,15,0,-4,-19,-5,-9,-9,9};

  printf("Test 1: [%d,%d,%d,%d,%d,%d,%d,%d,%d,%d]\n",
	a1[0],a1[1],a1[2],a1[3],a1[4],a1[5],a1[6],a1[7],
	a1[8],a1[9]);
  a1MaxSum = findMax(a1);
  printf("Max Sum of Array 1 is: %d\n",a1MaxSum);

  printf("Test 2: [%d,%d,%d,%d,%d,%d,%d,%d,%d,%d]\n",
        a2[0],a2[1],a2[2],a2[3],a2[4],a2[5],a2[6],a2[7],
        a2[8],a2[9]);
  a2MaxSum = findMax(a2);
  printf("Max Sum of Array 2 is: %d\n",a2MaxSum);

  printf("Test 3: [%d,%d,%d,%d,%d,%d,%d,%d,%d,%d]\n",
        a3[0],a3[1],a3[2],a3[3],a3[4],a3[5],a3[6],a3[7],
        a3[8],a3[9]);
  a3MaxSum = findMax(a3);
  printf("Max Sum of Array 3 is: %d\n",a3MaxSum);

  return 0;
}
