#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int i = 0;

    if (b == NULL)
        return 0;

    while (b[i] != '\0')
    {
        if (b[i] == '0')
            num = num << 1;
        else if (b[i] == '1')
            num = (num << 1) | 1;
        else
            return 0; /* Invalid character */

        i++;
    }

    return num;
}

