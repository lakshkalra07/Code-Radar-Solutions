int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If divisible, it's not prime
    }
    return 1; // Otherwise, it's prime
}
