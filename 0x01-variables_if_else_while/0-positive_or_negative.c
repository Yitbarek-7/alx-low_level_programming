#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc function main goes there */
int main(void)
{int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your goes there */
	return (0);
}
