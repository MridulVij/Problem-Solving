#include <stdio.h>


// Simple Swapping numbers with datatype only.
int main() {
   int a = 5, b = 3;
   printf("Before swapping a=%d and b=%d\n",a,b);
   int temp = a;
   a = b;
   b = temp;
   printf("After swapping a=%d and b=%d",a,b);
}


// Swapping numbers with functions.
#include <stdio.h>

int swap(int *a,int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
   }
int main() {
   int a = 5, b = 3;
   printf("Before swapping a=%d and b=%d\n",a,b);
   swap(&a,&b);
   printf("After swapping a=%d and b=%d",a,b);
}



// swapping numbers with
