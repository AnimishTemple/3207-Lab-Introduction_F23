#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){

	int random_index = rand() % 26;
	char random_alphabet = 'A' + random_index;
	return random_alphabet;
}
