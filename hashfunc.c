#include "hashfunc.h"
int ord(char a) {
    int b = (int)a;
    return b;
}

int calHashFunc(char name[]) {
    int i = 0;
    int first;
    int index = 0;
    while(name[i] != '\0') {
        first = ord(name[i]);
        index += first;
        ++i;
    }
    return index % 10; 
}