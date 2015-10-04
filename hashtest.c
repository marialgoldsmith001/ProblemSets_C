#include <stdio.h>
#include <string.h>
#define HASH_SIZE 65536

int hash_func(char* word);

int main(void)
{
    int index = hash_func("end");
    printf("%i\n", index);
}

int hash_func(char* word)
{
    int hash = 0;
    for(int i=0, n=strlen(word) ; i <n; i++)
    {
        hash = (hash << 2)^ word[i];
        printf("hash = %i, word[i] = %c, i = %i\n", hash, word[i], i);
    }
    return hash % HASH_SIZE;
}

