#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    // Loop from a to b inclusive
    for (int i = a; i <= b; i++) {
        // Check if the number is between 1 and 9
        if (i >= 1 && i <= 9) {
            switch(i) {
                case 1: printf("one\n"); break;
                case 2: printf("two\n"); break;
                case 3: printf("three\n"); break;
                case 4: printf("four\n"); break;
                case 5: printf("five\n"); break;
                case 6: printf("six\n"); break;
                case 7: printf("seven\n"); break;
                case 8: printf("eight\n"); break;
                case 9: printf("nine\n"); break;
            }
        } 
        // Check if the number is greater than 9
        else if (i > 9) {
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}



