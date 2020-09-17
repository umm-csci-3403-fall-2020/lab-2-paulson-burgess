#include <stdlib.h>

#include "disemvowel.h"
#include <cstring>

char *disemvowel(char *str) {
	int len, i, vowels, r, nlength;
	char *newword;

	vowels = 0;
	len = strlen(str);

	for (i=0; i<len; ++i) {
	if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' ||
			str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
	vowels = vowels + 1;
	}}
	// the for loop above this should probably be a helper function

	nlength = len - vowels;
	r = 0;
	newword = (char*) calloc(nlength+1, sizeof(char));
	for(i=0; i<len; ++i){
	if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' &&
		str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U'){
	newword[r] = str[i];
	++r;
	}
	}
	newword[nlength]= '\0';
	
  return newword;
}
