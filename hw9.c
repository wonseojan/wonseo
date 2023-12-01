#include <stdio.h>

int main() {
    char input[1000];

    printf("Input> ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + 32;
        }
        else if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - 32;
        }
    }

    printf("Output> %s", input);

    return 0;
}