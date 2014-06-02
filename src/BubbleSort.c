#include <stdio.h>
#include "BubbleSort.h"




 
void swap(int array[], int index1, int index2){

 int temp;

 if( array[index1]> array[index2]){
    temp= array[index1];
   array[index1]=array[index2];
   array[index2]=temp;
	}
   }
 

  
 
void singleBubbleSort ( int array[], int size, int lenght){
  
  int i=0;  
  int j=0;

  for (i=0; i< size; i++){ 
    for(j=0; j<size-1;j++){
      swap( array, j, j+1);
    }
  }
}
  

  
void bubbleSort( int array[], int lenght){

  int space = lenght;

  singleBubbleSort ( array, space, space);
  
 }

 