#include <stdio.h>

void main(){
    char name[50] = "";

    fgets(name, sizeof(name), stdin);

    puts(name);
}
