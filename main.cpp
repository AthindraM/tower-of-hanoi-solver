#include <iostream>

// t_o = 0;
// t_n = 2^n - 1, for n=>0

int main() {
	std::cout << "[Welcome to the Tower of Hanoi Solver!]\n";

	std::cout << "\nEnter the number of disks you want to move\n";
	int disks {};
	std::cin >> disks;

	std::cout << "You entered in " << disks << " disks!\n";
}
