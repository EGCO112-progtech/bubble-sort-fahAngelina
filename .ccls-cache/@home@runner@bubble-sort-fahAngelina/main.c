
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc ,char *argv[]) {

  int i,*a,n,j=0,*prime;
  n=argc-1;
  a=(int*)malloc(sizeof(int)*n);
  prime=(int*)malloc(sizeof(int)*n);
   for(i=0;i<n;i++) {
       a[i]=atoi(argv[i+1]);
       if(Isprime(a[i])) {
         prime[j]=a[i];
         j++;
         }
     }
   n=j;
  if(n==0) printf("No prime\n");
  else{
   display(prime,n);
  bubbleSort(prime,n); 
   //insertion(a,N);

  // selectionSort(a,N);
   display(prime,n);
    }
 return 0;
}


