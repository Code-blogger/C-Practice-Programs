/* ptr = (cast-type*) malloc(byte-size)

For Example:
ptr = (int*) malloc(100 * sizeof(int));
*/
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
  
  
    int* ptr; 
    int n, i, sum = 0; 
  
printf("Enter the value of N");
scanf("%d",&n);
    //n = 5; 
    printf("Enter number of elements: %d\n", n); 
   
    ptr = (int*)malloc(n * sizeof(int)); 
  
    
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
       
        printf("Memory successfully allocated using malloc.\n"); 
  
        for (i = 0; i < n; ++i) { 
            ptr[i] = i + 1; 
        } 
   
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
    } 
  
    return 0; 
} 

