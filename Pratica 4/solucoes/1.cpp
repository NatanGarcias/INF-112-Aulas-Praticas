#include <iostream>
#include <cstdlib>

using namespace std;

long long fat(int n) {
	if (n<=1) return 1;
	return n*fat(n-1);
}

int main(int argc, char **argv) {
	cout << fat(atoi(argv[1])) << endl;
	return 0;
}
