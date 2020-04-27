#include <stdio.h>

#define SIZE 100
#define MAXLINE 1000
/* maximum input line length */
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len;
	int cut_off = 9;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0)
	if (len > max) {
		max = len;
		copy(longest, line);
	}
	if (max > 0) /* there was a line  */
		printf("%s", longest);
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
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
