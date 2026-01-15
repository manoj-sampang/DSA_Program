#include <stdio.h>
#include "hashfunc.h"

int main() {
    char ch[50];
    printf("--- This program calculates index from (0 - 9) ---\n");
    printf("Enter name to find its hash function or hash index: ");
    scanf("%s", ch);
    int index = calHashFunc(ch);

    printf("The Hash Index of [%s]: %d\n", ch, index);
    return 0;
}