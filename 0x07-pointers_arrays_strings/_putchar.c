#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charcter c to stdout
 * 0c: the character to print
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
