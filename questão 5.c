
#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);

    int len = strlen(string);
    for (int i = 0; i < len / 2; i++) {
        char temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }

    printf("String invertida: %s", string);

    return 0;
}
