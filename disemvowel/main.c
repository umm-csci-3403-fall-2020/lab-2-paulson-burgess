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
    //memory needs to be freed in disemvowel, but we can't do so until the end of our while loop.
    //problem with that is disemvowel doesn't know when it won't be called anymore.
    disemvoweled = disemvowel(line);
    printf("%s\n", disemvoweled);
    free(disemvoweled);
  }
  free(line);
}
