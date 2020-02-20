#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int wordCount(string x);
int letterCount(string x);
int sentenceCount(string z);

int main(void)
{
string text = get_string("Text: ");

int index =round(0.0588 * (100 * letterCount(text) / wordCount(text)) - 0.296 * (100 * sentenceCount(text) / wordCount(text)) - 15.8);

if (index >= 16){
    printf("Grade 16+\n");
    }
    else if (index <1){
        printf("Before Grade 1");
    }
    else {
        printf("Grade %i\n", index);
    }

}

int wordCount(string x)
{
    int word = 0;
    for (int i = 0; i < strlen(x); i++)
        if (isblank(x[i]) == true){
            word++;
        }
    return (word + 1);
}

int letterCount(string y)
{
    int letter = 0;
    for (int i = 0; i < strlen(y); i++)
        if (isalpha(y[i]) != 0){
            letter++;
        }
    return letter;
}

int sentenceCount(string z)
{
    int sentence = 0;
    for (int i = 0; i < strlen(z); i++)
        if(z[i] == '!' ||z[i] == '?' || z[i] == '.'){
            sentence++;
        }
    return sentence;
}

# cs50
