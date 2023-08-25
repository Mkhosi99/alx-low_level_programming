#include <stdio.h>

void beat(void) __attribute__ ((constructor));

/**
 * beat - Outputs sentence before the main
 * function is executed
 */
void beat(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
