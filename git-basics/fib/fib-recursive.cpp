#include<iostream>
using namespace std;

/* Fibonacci: recursive version */
int Fibonacci_R(int n)
{
	if(n<=0) return 0;
	else if(n==1) return 1;
	else return Fibonacci_R(n-1)+Fibonacci_R(n-2);	
}

int main(void)
{		
	int a;
	cout << "a = ";
	cin >> a;

	// calculate the fib(i) from scratch for each i <= a using your recursive function
	cout << endl << "From recursive function" << endl;
	for(int i=1; i<=a; ++i)
	        cout << "fib(" << i << ") = " << Fibonacci_R(i) << endl;
	cout << endl;

	return 0;
}