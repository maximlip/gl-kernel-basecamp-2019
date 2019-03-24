#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int d, r;
    
    srand(time(NULL));
    printf("Enter number 0-9>");
    scanf("%d", &d);
    r = rand()%10;
   // printf("%d %d\n", d, r);
    if (d == r) {
        printf("You win\n");
    }
    else {
        printf("You loose\n");
    }
    
    return 0;
  
}

