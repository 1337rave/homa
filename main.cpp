#include "Header.h"

int main() {
    Complex num1, num2;

    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> num1.real;

    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> num1.imaginary;

    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> num2.real;

    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> num2.imaginary;

    std::cout << "First complex number: " << num1.real << " + " << num1.imaginary << "i" << std::endl;
    std::cout << "Second complex number: " << num2.real << " + " << num2.imaginary << "i" << std::endl;

    Complex sum = addComplex(num1, num2);
    std::cout << "Sum: " << sum.real << " + " << sum.imaginary << "i" << std::endl;

    Complex difference = subtractComplex(num1, num2);
    std::cout << "Difference: " << difference.real << " + " << difference.imaginary << "i" << std::endl;

    Complex product = multiplyComplex(num1, num2);
    std::cout << "Product: " << product.real << " + " << product.imaginary << "i" << std::endl;

    Complex quotient = divideComplex(num1, num2);
    std::cout << "Quotient: " << quotient.real << " + " << quotient.imaginary << "i" << std::endl;

    return 0;
}
