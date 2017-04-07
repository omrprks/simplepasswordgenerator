#include <iostream>
#include <random>
#include <ctime>

static const char alpha[] =
"0123456789"
"~`!@#$%^&*()[]{}?<>:;-+_=,"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int length = sizeof(alpha) - 1;

char
generate() { return(alpha[rand() % length]); }

int
main(int argc, char *argv[]) {
	int i;
	srand(time(nullptr));

	for(i = 0; i < 21; ++i) { std::cout << generate(); }
	std::cout << "\n";

	return(0);
}