#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            if ((a & b) > max_and && (a & b) < k) {
                max_and = a & b;
            }
            if ((a | b) > max_or && (a | b) < k) {
                max_or = a | b;
            }
            if ((a ^ b) > max_xor && (a ^ b) < k) {
                max_xor = a ^ b;
            }
        }
    }
    
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
