#include <stdio.h>

void uppercaseString(char str[]) {
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }else{
         str[i] = str[i] + 32;
        }
        i++;
    }
}


void main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    uppercaseString(str);
    printf("Uppercase string: %s", str);
}