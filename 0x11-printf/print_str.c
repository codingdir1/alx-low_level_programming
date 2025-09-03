#include "main.h"
#include <stdlib.h>

void append_str(char *buffer, char *s, unsigned int *pos_addr)
{
  int i;

  i = 0;
  while (*(s + i) != '\0')
  {
    if (*(s + i) == '\\')
    {
      append_escape(buffer, *(s + i + 1), pos_addr);	
    } else 
    {
      append_char(buffer, *(s + i), pos_addr);
    }
    i++;
  }
}

void append_Str(char *buffer, char *s, unsigned int *pos_addr)
{
  int i;
  char *hex;

  i = 0;
  while (*(s + i) != '\0')
  {
    if (*(s + i) == '\\')
    {
      append_escape(buffer, *(s + i + 1), pos_addr);	
    } else 
    {
      if (*(s + i) >= 33 && *(s + i) <= 126)
      {
        append_char(buffer, *(s + i), pos_addr);
      } else 
      {
        append_char(buffer, '\\', pos_addr);
	append_char(buffer, 'x', pos_addr);
	hex = to_hex(*(s + i), 'X');
	if (*(hex + 1) == '\0')
	{
          append_char(buffer, '0', pos_addr);
          append_char(buffer, *hex, pos_addr);	  
	} else 
	{
	  append_char(buffer, *hex, pos_addr);
	  append_char(buffer, *(hex + 1), pos_addr);
	}
	free(hex);
      }
    }
    i++;
  }
}