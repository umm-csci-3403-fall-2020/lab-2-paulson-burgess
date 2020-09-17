#include <stdlib.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
	int len, i, count, r;
	char *newword;

	count = 0;
	len = strlen(str);

	for (i=0; i<len; ++i) {
	if (str[i] == ("a" | "A" | "e" | "E" | "i" | "I" | "o" | "O" | "u" | "U")){
	count = count + 1;
	}}

	r = 0;
	newword = (char*) calloc(count+1, sizeof(char));
	for(i=0; i<count+1; ++i){
	if (str[i] != ("a" | "A" | "e" | "E" | "i" | "I" | "o" | "O" | "u" | "U")){
	newword[r] = str[i];
	++r;
	}}
	
  return newword";
}
