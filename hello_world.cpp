// hello_world.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int main(int argc, char* argv[]) // int main () is also ok if you are not taking
// command line arguments.
{
	std::cout << "Hello world!\n"; // "\n" and std::endl are both acceptable.
	// std::endl flushes the output bufffer, '\n' does not.
		return 0;
}
