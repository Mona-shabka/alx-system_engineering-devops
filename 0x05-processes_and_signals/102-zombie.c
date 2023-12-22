#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - A function that used to creates
 *			an infinite loop to make the program hang
 * Return: always 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - A function that used to creates 5 zombie processes.
 * Return: always 0.
 */

int main(void)
{
	int m;
	pid_t zomb;

	for (m = 0; m < 5; m++)
	{
		zomb = fork();
		if (!zomb)
			return (0);
		printf("Zombie process created, PID: %d\n", zomb);
	}
	infinite_while();
	return (0);
}
