#include "main.h"
#include <stdlib.h>

char **strtow(char *str)
{
  unsigned int i, num_of_words, _i, _words_i;
  char **words;

  words = malloc(sizeof(char*) * (num_words(str) + 1));

  if (words == NULL)
  {
    return NULL;
  }
  num_of_words = 0;

  for (i = 0; *(str + i) != '\0'; i++)
  {
    if (*(str + i) != ' ')
    {
      _words_i = 0;
      _i = i;
      while (*(str + _i) != ' ')
      {
        _i++;
      }

      *(words + num_of_words) = malloc(sizeof(char) * (_i + 1));
      if (*(words + num_of_words) == NULL)
      {
        return NULL;
      }
      while (i < _i)
      {
        *(*(words + num_of_words) + _words_i) = *(str + i);
	i++;
	_words_i++;
      }
      *(*(words + num_of_words) + _words_i) = '\0';
      num_of_words++;
    }
  }
  *(words + num_of_words) = NULL;

  return words;
}

int num_words(char *str)
{
  unsigned int i, word_start, num_of_words;

  word_start = 0;
  num_of_words = 0;

  for (i = 0; *(str + i) != '\0'; i++)
  {
    if (*(str + i) != ' ' && word_start == 0)
    {
      word_start = 1;
      num_of_words++;
    } else if (*(str + i) == ' ' && word_start == 1)
    {
      word_start = 0;
    }
  }
  return num_of_words;
}
