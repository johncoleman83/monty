#include "monty.h"

/**
 * main - main function for monty program
 * @argc: arguments count
 * @argv: arguments inventory (file path expected)
 *
 * Return: 0 always - success!
 */
int main(int argc, char **argv)
{
	char *buffer;

	if (argc != 2)
	{
		// failure message
		return (EXIT_FAILURE);
	}

	buffer = read_monty(argv[1]);
	_puts(buffer);

/**
 * (1) call read file function to read monty bytecode file
 *     -handle errors for no file, etc...
 * (2) add codes to a new stack that we need to create
 *     -handle errors for unknown codes, etc...
 * (3) sort through new stack of codes, and use the execute function to
 *     -handle errors for improper argument or no args for the given opcode
 * (4) call and execute each code one at a time while sorting through list
 * (5) after reading all input codes, terminate successfully
 */
	return (EXIT_SUCCESS);
}
