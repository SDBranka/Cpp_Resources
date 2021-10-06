#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// srand(); is used to seed the random generator algorithm
	// you can use any integer to seed  the rand, or you can base
	// it off of the computer time by using
	// **Must be using the cstdlib and ctime libraries**
	srand(time(null));

	//will generate 24 random numbers
	for (int x = 1; x < 25; x++)
	{
		// this limits the number generated to
		// between 0 and 5 and then adds 1 so that
		// this will print a number between 1 and 6
		cout << 1 + (rand() & 6) << endl;
	}

	return 0;
}
