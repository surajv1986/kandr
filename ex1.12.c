/* A C Program to print each word of an input statement on a new line */
#include<stdio.h>
#include<stdlib.h>

#define SIZE 1000

int main(void)
{
	char ip[SIZE], c;
	/* loop variables */
	int i = 0, n = 0;

	puts("Enter a string terminated by a newline");
	while ((c = getchar()) != '\n') {
		ip[i++] = c;
		n++;
	}
	ip[n] = '\0';
	puts("The desired output is ");
	/* Reset loop variable */
	i = 0;
	while (i < n) {
		if (ip[i] == ' ')
			puts("");
		else
			putchar(ip[i]);
		i++;
	}
	puts("");

	return 0;
}
