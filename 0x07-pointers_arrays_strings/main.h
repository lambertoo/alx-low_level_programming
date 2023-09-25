#ifndef _MAIN_H
#define _MAIN_H

int main(void);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*a)[]);
void print_diagsums(int *, int);
void set_string(char **,char *);

#endif
