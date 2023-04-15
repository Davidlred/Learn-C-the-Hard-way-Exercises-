#include <stdio.h>
/**
 * main - A function that prints the inputs of a user into the command line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for(i = 1; i < argc; i++) {
		printf("Arg %d: %s\n", i, argv[i]);
	}

	char *states[] = {"Lagos", "Imo", "Kano", "Abuja"};

	int num_state = 4;

	for(i = 0; i < num_state; i++) {
		printf("States %d: %s\n", i, states[i]);
	}

	return 0;

}

