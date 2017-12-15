#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "reading.h"
#include "util.h"
#include "Word.h"

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    printf("Usage: ./mips-emulator filename\n");
    exit(1);
  }
  else
  {
    const char *fileName = argv[1];
    FILE *file = fopen(fileName, "r");

    Word first = read_Word(file);

    //printBits is from stackoverflow
    printBits(sizeof(first), &first);
  }
};