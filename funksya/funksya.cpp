#include <iostream>
using namespace std;



int cube(int number) {
    return number * number * number;
}

int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}

bool isPositive(int number) {
    return number > 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) return a / b;
    else return 0;  
}

int calculator(int a, int b, char operation) {
    switch (operation) {
    case 'W': return add(a, b);
    case 'S': return subtract(a, b);
    case 'A': return multiply(a, b);
    case 'D': return divide(a, b);
    default: return 0;
    }
}

void printSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int factorial(int number) {
    int fact = 1;
    for (int i = 1; i <= number; i++) {
        fact *= i;
    }
    return fact;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int sumInRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

int maxInArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    // 1. Ədədin kubunu hesablayır
    int number = 3;
    cout << "Cube of " << number << " is: " << cube(number) << endl;

    // 2. İki ədəddən böyüyünü tapır
    int a = 10, b = 20;
    cout << "Max of " << a << " and " << b << " is: " << maxNumber(a, b) << endl;

    // 3. Ədədin müsbət olub olmadığını yoxlayır
    cout << number << " is positive: " << (isPositive(number) ? "True" : "False") << endl;

    // 4. Kalkulyator funksiyası
    char operation = 'W'; // Toplama əməliyyatı
    cout << "Result of operation: " << calculator(a, b, operation) << endl;

    // 5. Kvadrat çap edir
    int size = 4;
    printSquare(size);

    // 6. Sadə ədəd olub olmadığını yoxlayır
    int primeCandidate = 11;
    cout << primeCandidate << " is prime: " << (isPrime(primeCandidate) ? "True" : "False") << endl;

    // 7. Ədədin faktorialını qaytarır
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;

    // 8. Ədədin qüvvətini qaytarır
    int base = 2, exponent = 3;
    cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;

    // 9. İki ədəd arasındakı ədədlərin cəmi
    cout << "Sum of numbers between 1 and 5 is: " << sumInRange(1, 5) << endl;

    // 10. Massivdəki ən böyük ədədi tapır
    int arr[] = { 3, 5, 7, 2, 8 };
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    cout << "Max in array is: " << maxInArray(arr, sizeArr) << endl;

    return 0;
}
