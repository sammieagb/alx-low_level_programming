#include "main.h"

/**
 * get_endianness - determines whether a machine is large or tiny endian
 * Return: 0 for large, 1 for small
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
