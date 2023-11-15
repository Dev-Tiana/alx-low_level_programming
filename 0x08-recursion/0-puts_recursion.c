#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0') {
        // Base case: end of string
        printf("\n");
        return;
    }

    // Print the current character
    printf("%c", *s);

    // Make a recursive call with the rest of the string
    _puts_recursion(s + 1);
}

int main() {
    char secretMessage[] = "She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget";
    
    // Call the recursive function to print the string
    _puts_recursion(secretMessage);

    return 0;
}
