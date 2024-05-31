#include <string.h>
#include <stdio.h>

#define TABLE_SIZE 100000
unsigned int hash(const char *key)
{
    unsigned long int value = 0;
    unsigned int key_len = strlen(key);

    for (unsigned int i = 0; i < key_len; ++i)
    {
        value = value * 37 + key[i];
    }

    value = value % TABLE_SIZE;

    return value;
}

int main(void)
{
    printf("%d\n", hash("hassan"));
    return 0;
}
