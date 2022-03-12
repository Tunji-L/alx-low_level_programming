#include <unistd.h>
/**
 * main - Simplicity
 *
 * Return: 1 to end the code
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, 59);
	return (1);
}
