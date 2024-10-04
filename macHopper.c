/* C program to change your IP address */

// lets call some libraries
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

// making the work easier
typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long int int64;

// this struct holds mac address
struct s_mac
{
	int64 addr:48;
};
typedef struct s_mac Mac;	// struct renamed to 'Mac'

Mac generate_mac(void);
int main(int, char**);

Mac generate_mac()	// returns a 48 bit number
{
	int64 a, b;
	Mac mac;

	a = random();
	a = random();
	mac.addr = ((a * b) % 281474976710656);

	return mac;
}

int main(int argc, char *argv[])
{
	Mac mac;
	srand(getpid());	// initialises a random seed

	mac = generate_mac();
	printf("0x%lx\n", mac.addr);

	return 0;
}
