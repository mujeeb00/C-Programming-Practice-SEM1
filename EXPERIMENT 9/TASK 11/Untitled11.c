
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == 'a') {
            sentence[i] = 'A';
        }
    }

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
