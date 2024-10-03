#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int n = 30;
    int primeCount = countPrimes(n);
    std::cout << "Number of prime numbers less than " << n << " is " << primeCount << std::endl;
    return 0;
}