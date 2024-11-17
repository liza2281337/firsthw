#include <stdio.h>
 
unsigned str_len(char* str) {
    unsigned length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char string[] = "meow";
    printf("Длина строки \"%s\" = %u\n", string, str_len(string));
    return 0;
}

