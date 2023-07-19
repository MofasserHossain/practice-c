#include <stdio.h>

// copyString() function definition
void copyString(char dest[], const char src[]) {
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


// reverseString() function definition
void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// uppercaseString() function definition
void uppercaseString(char str[]) {
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

// lowercaseString() function
void lowercaseString(char str[]) {
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    scanf("%s", source);

    copyString(destination, source);
    printf("Copied string: %s\n", destination);

    return 0;
}
