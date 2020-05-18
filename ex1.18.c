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
	int i = 0, j = 0;
	int max;
	char line[MAXLINE];
	int len_buf[SIZE];
	char lp[MAXLINE];
	char buf[SIZE][MAXLINE];
	char op[SIZE][MAXLINE];

	max = 0;
	printf("Start entering text until EOF \n");
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (line[i] == ' ')
			printf("detected leading space\n");
		copy(buf[i], line);
		len_buf[i] = len;
		i++;
		max++;
	}
	i = 0;
	puts("The entered lines of text are");
	while(i < max) {
		printf("%d:%s",len_buf[i], buf[i]);
		i++;
	}
	printf("\n");
#if 0
	for (i = 0; i < max; i++) {
		for(j = 0; j < len_buf[i]; j++) {
			if (j == 0) {
				/* Skip spaces */
				if (buf[i][j] == ' ')
					continue;
			}			
			printf("%c\n", buf[i][j]);
			op[i][j] = buf[i][j];
		}
	}
	i = 0;
	puts("The expected output is");
	while(i < max) {
		printf("%s", op[i]);
		i++;
	}
#endif
	return 0;
}

int getLine(char s[], int lim)
{
	int c, i, j = 0, len = 0, off = 0;
	/* Loop until EOF AND newline is encountered */
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
			s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	len = i;
	s[i] = '\0';
	i = 0;
	while (s[i] != ' ') {
		off++;
	}
		
	return len;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
