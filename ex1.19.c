/* A Program to reverse a character string input line by line  */
#include<stdio.h>

#define MAX 100

/* Function prototyping section */
char *reverse_string(char *c, int len);
int getLine(char s[], int lim);

/* Global Variable declaration section */
char reversed_string[MAX];

int main(void)
{
	char s[MAX], c, *base;
	int i = 0, n = 0;
	printf("Enter a string \n");
	while ((n = getLine(s, MAX)) > 0) {
		base = &s[0];
		base = reverse_string(base, n - 1);
		i = 0;
		printf("The reversed string is:");
		while (i < n) {
			printf("%c", *base);
			base++;
			i++;
		}
	n = 0;
	}
	printf("\n");

	return 0;
}

int getLine(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

char *reverse_string(char *c, int len)
{
	int i = 0;

	c = c + len;
	while (i < (len + 1)) {
		reversed_string[i++] = *c;
		c--;
	}
	reversed_string[i] = '\0';

	return reversed_string;
}
