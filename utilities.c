#include "utilities.h"

int charCount(char* str) {
    int i = 0;
    int strCount = 0;

    while (str[i] != '\0') {
        strCount++;
        i++;
    }

    return strCount;
}