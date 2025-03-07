#include <stdio.h>

#define MAX_VALUE 100

int main(void) {
    char c, *p, *q, terminating_char, words[MAX_VALUE] = {0};

    // Input: Read the sentence until a newline or terminating character (.!?)
    printf("Enter a sentence: ");
    for (p = words; (c = getchar()) != '\n' && p < words + MAX_VALUE; p++) {
        if (c == '.' || c == '!' || c == '?') {
            terminating_char = c;  // Save the terminating character
            break;
        }
        *p = c;  // Store characters in the words array
    }

    // Output: Reverse the words and print them
    printf("Reversal of sentence: ");
    while (p >= words) {
        // Find the end of the current word
        while (*--p != ' ' && p != words)
            ;
        
        // Set the start of the word
        q = p == words ? words : p + 1;

        // Print the word
        while (*q != ' ' && *q != '\0')
            putchar(*q++);
        
        // Print space between words (only if there are more words left)
        if (p >= words)
            putchar(' ');
    }

    // Print the terminating character
    printf("\b%c\n", terminating_char);

    return 0;
}
