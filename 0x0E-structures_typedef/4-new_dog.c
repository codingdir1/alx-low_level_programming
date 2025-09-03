#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *d;
  char *_name, *_owner;

  _name = malloc(sizeof(char) * (_strlen(name) + 1));
  _owner = malloc(sizeof(char) * (_strlen(owner) + 1));
  if (_name == NULL || _owner == NULL)
  {
    return NULL;
  }
  _strcpy(name, _name);
  _strcpy(owner, _owner);

  d = malloc(sizeof(dog_t));
  if (d == NULL)
  {
    return NULL;
  }
  d->name = _name;
  d->age = age;
  d ->owner = _owner;

  return d;
}

unsigned int _strlen(char *s)
{
  unsigned int len;

  len = 0;
  while (*(s + len) != '\0')
  {
    len++;
  }
  return len;
}

char *_strcpy(char *source, char *dest)
{
  unsigned int i;

  i = 0;
  while (*(source + i) != '\0')
  {
    *(dest + i) = *(source + i);
    i++;
  }
  *(dest + i) = '\0';
  return dest;
}
