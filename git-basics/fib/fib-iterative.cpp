#include<iostream>
using namespace std;

// iterative version
int Fibonacci_I(int n)
{
	int fib[] = {0,1,1};
	for(int i=2; i<=n; i++)
	{
		fib[i%3] = fib[(i-1)%3] + fib[(i-2)%3];
		cout << "fib(" << i << ") = " << fib[i%3] << endl;
	}
	return fib[n%3];
}

int main(void)
{		
	int a;
	cout << "a = ";
	cin >> a;


	// or calculate fib(a) once and output the intermediate results from the looping version
	cout << "From iterative function" << endl;
	Fibonacci_I(a);

	cout << endl;
	return 0;
}