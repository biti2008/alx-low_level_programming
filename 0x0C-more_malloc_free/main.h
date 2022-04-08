#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
=======
#include <stdio.h>
#include <stdlib.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
>>>>>>> 13d7ed7fde0263dee13ab9965ade35ceaa1dcd06
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

<<<<<<< HEAD
#endif
=======
#endif 
>>>>>>> 13d7ed7fde0263dee13ab9965ade35ceaa1dcd06
