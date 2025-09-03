#ifndef HEADER
#define HEADER

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _str_len(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_number(char *string);
int num_len(char *string);
int to_num(char c);
char to_char(int c);

#endif
