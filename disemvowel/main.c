#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
  char *disemvoweled;
  
  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
    // capture the pointer to our memory that disemvowel returns
    disemvoweled = disemvowel(line);
    printf("%s\n", disemvoweled);
    // free the memory that disemvowel returns
    free(disemvoweled);
  }
  // free the memory that was passed to disemvowel
  free(line);
}
