#include <iostream>
#include <numeric>
#include <iomanip>
#include <math.h>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int n, int d) const {
        while (d != 0) {
            int temp = d;
            d = n % d;
            n = temp;
        }
        return n;
    }

    void simplify() {
        int gcdValue = gcd(abs(numerator), abs(denominator));
        numerator /= gcdValue;
        denominator /= gcdValue;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction(int num = 0, int denom = 1) {
        if (denom == 0) {
            cout << "Denominator cannot be zero. Setting fraction to default value 0/1." << endl;
            numerator = 0;
            denominator = 1;
        } else {
            numerator = num;
            denominator = denom;
        }
        simplify();
    }

    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator/(const Fraction& other) const {
        if (other.numerator == 0) {
            cout << "Cannot divide by zero. Returning fraction 0/1." << endl;
            return Fraction(0, 1);
        }
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Fraction(num, denom);
    }

    friend ostream& operator<<(ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }
};

int main() {
    int num1, denom1, num2, denom2;

    cout << "Enter the numerator of the first fraction: ";
    cin >> num1;
    cout << "Enter the denominator of the first fraction: ";
    cin >> denom1;
    cout << "Enter the numerator of the second fraction: ";
    cin >> num2;
    cout << "Enter the denominator of the second fraction: ";
    cin >> denom2;

    Fraction f1(num1, denom1);
    Fraction f2(num2, denom2);

    cout << "The sum of the fractions is: " << (f1 + f2) << endl;
    cout << "The difference of the fractions is: " << (f1 - f2) << endl;
    cout << "The product of the fractions is: " << (f1 * f2) << endl;
    cout << "The quotient of the fractions is: " << (f1 / f2) << endl;

    return 0;
}
