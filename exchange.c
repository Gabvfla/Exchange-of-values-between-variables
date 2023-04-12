// Exchange of values between variables
#include <stdio.h>

int main() {
    // Variables declaration
    int v1, v2; // Variables for the two values
    int aux; // Auxiliary variable
    
    // Data Input
    printf("Enter the First value: ");
    scanf("%d", &v1);
    printf("Enter the Second value: ");
    scanf("%d", &v2);
    
    // Exchange processing
    aux = v1;
    v1 = v2;
    v2 = aux;
    
    // Data output
    printf("After the exchange the values are:\n");
    printf("First value: %d\n", v1);
    printf("Second value: %d\n", v2);
    
    return 0;
}
