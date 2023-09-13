#include <cstdlib>
#include <iostream>
using namespace std;

// malloc -> stands for memory allocation
// calloc -> stands for continuos allocation
// realloc -> stands for reallocation of memory
// free -> is used to free the allocated memory

int main() {
   int *ptr = (int *)calloc(5, sizeof(int));
   for (int i = 0; i < 5; i++) {
     ptr[i] = i*4;
     
   }
   for (int i = 0; i < 5; i++) {
      /* ptr[i] and *(ptr+i) can be used interchangeably */
      cout << ptr[i] << endl;
   }
   free(ptr);
   return 0;
}