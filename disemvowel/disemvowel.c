#include <stdlib.h>

#include "disemvowel.h"
#include <cstring>

char *disemvowel(char *str) {
	int len, i, vowels, r, nlength;
	char *newword;

	vowels = 0;
	len = strlen(str);
        // for loop to count the number of vowels the input has
	for (i=0; i<len; ++i) {
	if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' ||
			str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
	vowels = vowels + 1;
	}}
	// the for loop above this should probably be a helper function
        
	// number of consonants/other characters = length - # of vowels
	// important to make sure we allocate only the memory we need
	nlength = len - vowels;

	// counter variable
	r = 0;
        
        // memory allocation for our disemvoweled input
	newword = (char*) calloc(nlength+1, sizeof(char));

	// whenever we encounter non-vowels, throw them into our array of newly allocated memory
	for(i=0; i<len; ++i){
	if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' &&
		str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U'){
	newword[r] = str[i];
	++r;
	}
	}
	// slap on the null terminator that we need at the end
	newword[nlength]= '\0';
	
  // send that pointer right on back to whoever called this.
  // They will be responsible for freeing this memory
  return newword;
}
