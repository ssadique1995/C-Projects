#include <iostream>

using namespace std;

int isPrime(int x) {
int factor=2;
while (x%factor!=0) factor++;
return factor;
}

int main(){
	int n;
	cout << "Enter a number greater than 1: " << endl;
    cin >> n;
    if (n == isPrime(n)) cout << "That is prime.";
    else cout << "That is not prime.";
    n++;
    cout << endl;
   return 0;
}


