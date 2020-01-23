#include <iostream>
#include <cstdlib>

using namespace std;

long long fib(int n, int *ct) {
    (*ct)++;
	if (n<=1) return n;	
	return fib(n-1, ct) + fib(n-2, ct);
}

int main(int argc, char **argv) {
    int ct = 0;
	cout << fib(atoi(argv[1]), &ct) << " ";
	cout << ct << endl;
	return 0;
}
