#include <stdio.h>

int main() {
    int X, Y;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if (X > Y) {
        printf("%d", X);
    } else {
        printf("%d", Y);
    }
    
    return 0;
}
