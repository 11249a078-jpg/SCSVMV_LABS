#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe, use fgets() in real code.

    len = strlen(str);
    j = 0;

    // Reverse the string manually
    for (i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s\n", rev);

    return 0;
}
