#include <stdio.h>

int main() {
    int YY1, D1, LS1;    // To store the first student ID
    int YY, D, LS;        // To store subsequent student IDs
    int low_YY, high_D, low_LS;

    // Get the first student ID as input
    printf("Enter the ID: ");
    scanf("%d-%d-%d", &YY1, &D1, &LS1);
    
    // Initialize the "most senior" student with the first input
    low_YY = YY1;
    high_D = D1;
    low_LS = LS1;

    // Loop to continuously take inputs and find the most senior student
    while (1) {
        printf("Enter the ID: ");
        scanf("%d-%d-%d", &YY, &D, &LS);

        if (YY == 0) {
            break;  // Stop the loop when user enters 0 as the batch number
        }

        // Compare the current student ID with the most senior one based on the rules
        if (YY < low_YY || (YY == low_YY && D < high_D) || (YY == low_YY && D == high_D && LS < low_LS)) {
            low_YY = YY;
            high_D = D;
            low_LS = LS;
        }
    }

    // Output the most senior student ID
    printf("The senior is %d-%d-%d\n", low_YY, high_D, low_LS);

    return 0;
}
