#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
  	
    for (int i = n - 1; i >= -n + 1; i--) {
        for (int j = -n + 1; j <= n - 1; j++) {
            if (abs(i) >= abs(j)) {
                printf("%d ", abs(i) + 1);
            }
            else {
                printf("%d ", abs(j) + 1);
            }
        }
        printf("\n");
    }
    
    return 0;
}
