#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[]){

    if (argc != 2){
        printf("Bad or No Entry\n");
        return 1;
    }
    else if (argc % 1 == !0){
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int k = atoi(argv[1]);

    if (k < 0){
        printf("No Negative Entries\n");
        return 1;
    }

    string plainText = get_string("Message: ");
    printf("plaintext: %s\n", plainText);
    printf("ciphertext: ");
        for (int i = 0; i < strlen(plainText); i++)
        {
            if (islower(plainText[i])){
            printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
            }
            else if (isupper(plainText[i])){
            printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
            }
            else{
            printf("%c", plainText[i]);
            }
        }
    printf("\n");
}
