/* A Program to print all input lines longer than 80 characters */
#include <stdio.h>

#define ARBITARY 80
#define SIZE 100
#define MAXLINE 1000
/* maximum input line length */
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len;
	int cut_off = 9;
	int i = 0;
	int len_buf[SIZE];
	int max;
	char line[MAXLINE];
	char longer_lines[SIZE][MAXLINE];
	char longest[MAXLINE];

	max = 0;
	printf("Start entering text until EOF \n");
	while ((len = getLine(line, MAXLINE)) > 0)
		if (len > ARBITARY) {
			copy(longer_lines[i], line);
			len_buf[i] = len;
			i++;
			max++;
		}
	i = 0;
	while (i < max) {
		printf(" length of line is: %d: %s", len_buf[i], longer_lines[i]);
		i++;
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
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
