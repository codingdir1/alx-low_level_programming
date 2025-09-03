#include "main.h"

void append_char(char *s, char c, unsigned int *pos_addr)
{
  *(s + *pos_addr) = c;
  (*pos_addr)++;
}

void append_escape(char *buffer, char c, unsigned int *pos_addr)
{

  switch (c)
  {
    case 'a':
      append_char(buffer, '\a', pos_addr);
      break;
    case 'b':
      append_char(buffer, '\b', pos_addr);
      break;
    case 'f':
      append_char(buffer, '\f', pos_addr);
      break;
    case 'n':
      append_char(buffer, '\n', pos_addr);
      break;
    case 'r':
      append_char(buffer, '\r', pos_addr);
      break;
    case 't':
      append_char(buffer, '\t', pos_addr);
      break;
    case 'v':
      append_char(buffer, '\v', pos_addr);
      break;
    case '%':
      append_char(buffer, '%', pos_addr);
      break;
   }
}