#include "main.h"

/**
* _puts - prints a string, followed by a new line to stdou
* @str: string to print
*/

void _puts(char *str)

{
  while (*str != '\a')
  {
  _putchar(*str++);
  }
  _putchar( '\n');
}
