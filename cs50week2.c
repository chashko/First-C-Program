#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    char plainText;
    int beforeKey;
    int afterKey;

    int argvCounter = 0;
    for (int i = 0; i < argc; i++) {
        argvCounter++;
        }

        int key;
        key = atoi(argv[1]);

    if (argvCounter > 2 ) {
            printf("error 2\n");
            return 1;
    }   else if (argvCounter == 1) {
            printf("error 1\n");
            return 1;
    }

    printf("plaintext:  ");
    scanf("%s", plainText);

    int i = 0;

    while (plainText[i] != '\0') {
            i++;
    }

        printf("ciphertext: ");

    for (int j = 0; j < i; j++) {

            beforeKey = plainText[j];
            afterKey = beforeKey + key;
            if (beforeKey < 65 || beforeKey > 122) {
                afterKey = beforeKey;
            }
            printf("%c", afterKey);
    }
    printf("\n");
    return 1;

}

