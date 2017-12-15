#include <stdint.h>
#include <stdio.h>
#include "Word.h"

Word read_Word(FILE *fp)
{
  Word toReturn;
  for (intmax_t byte = 0; byte < 4; ++byte)
  {
    const uint8_t character = fgetc(fp);
    toReturn = (toReturn << 8) + character;
  }
  return toReturn;
}
