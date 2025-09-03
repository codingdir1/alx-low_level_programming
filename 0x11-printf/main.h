#ifndef HEADER
#define HEADER

int _printf(const char *format, ...);
void append_char(char *s, char c, unsigned int *pos_addr);
void append_str(char *buffer, char *s, unsigned int *pos_addr);
void append_Str(char *buffer, char *s, unsigned int *pos_addr);
void append_int(char *buffer, int n, unsigned int *pos_addr);
void append_unsigned(char *buffer, unsigned int u, unsigned int *pos_addr);
void append_escape(char *buffer, char c, unsigned int *pos_addr);
char *to_bin(unsigned long n);
char *to_oct(unsigned long n);
char *to_hex(unsigned long n, char c);
int print_buffer(char *buffer);

#endif
