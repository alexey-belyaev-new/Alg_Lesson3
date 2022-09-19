#include <iostream>

using namespace std;

void isPrime(int a) {

	bool prime{};
	
	for (int i = 2; i * i <= a; i++)
	{
		if (a % i == 0) {			
			prime = false;
			break;
		}
		prime = true;
	}
	
	if (prime == true) cout << a << " is a prime number." << endl;
	else cout << a << " not prime number." << endl;
}

int main()
{
	int n;
	cout << "Enter number: "; cin >> n;
	isPrime(n);

}
