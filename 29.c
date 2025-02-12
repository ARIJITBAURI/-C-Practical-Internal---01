/*1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5*/

  #include <stdio.h>

  int main() {
      int rows = 6, columns = 5;
  
      
      for (int i = 1; i <= rows; i++) {
          
          for (int j = 1; j <= columns; j++) {
              printf("%d ", j); 
          }
          printf("\n");  
      }
  
      return 0;
  }
  