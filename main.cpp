#include <iostream>

// EQUATIONS
// eq. 1: t_o = 0;
// eq. 2: t_n = 2^n - 1, for n=>0
// eq. 3: t_n = 2 * t_(n-1) + 1, for n > 0

uint64_t solve(int n) {
	if (!n) 
		return 0; // eq. 1
	else {
		return 2 * solve(n-1) + 1; // eq. 3
	}
}

int main() {
	std::cout << "[Welcome to the Tower of Hanoi Solver!]\n";

	std::cout << "\nEnter the number of disks you want to move\n";
	int disks {};
	std::cin >> disks;

	std::cout << "A tower of "<< disks << " disks would require " << solve(disks) << " moves!\n";
}
