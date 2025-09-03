#ifndef HEADER
#define HEADER

struct dog
{
  char *name;
  float age;
  char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
unsigned int _strlen(char *s);
char *_strcpy(char *source, char *dest);
void free_dog(dog_t *d);

#endif
