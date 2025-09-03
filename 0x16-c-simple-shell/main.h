#ifndef HEADER
#define HEADER

char **split_string(char *str, char *separators);
unsigned int num_tokens(char *str, char *separators);
char is_separator(char c, char *separators);
void free_array(char **tokens);
void file_exists(char *filename, char **pathnames);
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);
int is_variable(const char *name, char *environment);
char *new_env_variable(const char *name, const char *value);


#endif
