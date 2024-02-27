//Write a program to count the number of occurrences of any two vowels in succession in a line of text. For example, in the following sentence:“Read the question meticulously” //
#include <stdio.h>
#include <ctype.h>


int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countSuccessiveVowels(const char *text) {
    int count = 0;

    while (*text != '\0') {
        if (isVowel(*text) && isVowel(*(text + 1))) {
            count++;
            printf("%c%c\n", *text, *(text + 1)); 
        }
        text++;
    }

    return count;
}

int main() {
    char text[100];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    int result = countSuccessiveVowels(text);

    printf("\nNumber of occurrences of two vowels in succession: %d\n", result);

    return 0;
}
