#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generates a random password
*Return: the generated password
*/
int main() {
    char password[15];
    int i;
    const char symbols[] = ",.\"'[]{}()!@#$%^&*";

    srand(time(NULL));

    for (i = 0; i < 15; i++) {
        int type = rand() % 4;
        if (type == 0) {
            password[i] = 'A' + rand() % 26;
        } else if (type == 1) {
            password[i] = 'a' + rand() % 26;
        } else if (type == 2){
            password[i] = '0' + rand() % 10;
        }
        else {
             password[i] = symbols[rand() % (sizeof(symbols) - 1)];
        }
    }

    password[15] = '\0';

    printf("%s\n", password);

    return 0;
}
