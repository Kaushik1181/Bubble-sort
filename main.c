#include <stdio.h>

void swap(int *a,int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp; 
}

void bubbleSort(int *A,int n) {
  for(int k=1;k<n;k++){
    int flag = 0;
    for(int i=0;i<n-k;i++) {
      if(A[i]>A[i+1]) {
        swap(&A[i],&A[i+1]);
        flag++;
      }
    }
    if(flag==0) break;
  } 
}

int main(void) {
  int A[] = {7,5,3,9,4,2,5,3,9,5,10};
  int size = sizeof(A)/sizeof(A[0]);
  bubbleSort(A,size);
  for(int i=0;i<size;i++){
    printf("%d ",A[i]);
  }
  return 0;
}