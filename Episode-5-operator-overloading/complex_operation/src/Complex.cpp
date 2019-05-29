#include "Complex.h"

Complex Complex::operator+ (const Complex &c2) const {
    return Complex(real + c2.real, image + c2.image);
}

Complex Complex::operator- (const Complex &c2) const {
    return Complex(real - c2.real, image - c2.image);
}

Complex Complex::operator* (const Complex &c2) const {
    return Complex(
        real * c2.real - image * c2.image,
        real * c2.image + image * c2.real
    );
}

Complex Complex::operator/ (const Complex &c2) const {
    double denominator = c2.real * c2.real + c2.image * c2.image;

    if (denominator <= 0) {
        throw "\n\033[31m[ZeroDivisionError]\033[0m Divisor cannot be 0!";
    }

    return Complex(
        (real * c2.real + image * c2.image) / denominator,
        (image * c2.real - real * c2.image) / denominator
    );
}

double Complex::getReal() {
    return real;
}

double Complex::getImage() {
    return image;
}

void Complex::setReal(double real) {
    Complex::real = real;
}

void Complex::setImage(double  image) {
    Complex::image = image;
}