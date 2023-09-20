#include <stdio.h>
#include <unistd.h>
/**
 * main - a c programme that prints a line onto the standard error
 * Return: 1 (the programmed should return 1, which in this case is success
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
