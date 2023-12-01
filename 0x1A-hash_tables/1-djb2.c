#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing djb2 algorithm.
 * Description:Hash function implementing djb2 algorithm.
 * @str: The string to hash
 * Return: hash.
 */



unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int i;

    hash = 5381;
    while ((i = *str++))
    {
        hash = ((hash << 5) + hash) + i; /* hash * 33 + c */
    }
    return (hash);
}
