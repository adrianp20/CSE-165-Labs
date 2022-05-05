/*
Finding Prime Numbers 
Write a program that reads in an integer N and prints out all the prime numbers strictly
less than N. These should be printed one per line.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void find_primes(int n) {
    int i;
    for (i = 2; i < n; i++) {
        is_prime(i);
    }
}

void display_only_primes(int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    find_primes(n);
    display_only_primes(n);
    return 0;
}