#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    public:
        Complex(double real, double image) : real(real), image(image) {};

        Complex operator+ (const Complex &c2) const;
        Complex operator- (const Complex &c2) const;
        Complex operator* (const Complex &c2) const;
        Complex operator/ (const Complex &c2) const;

        double getReal();
        double getImage();
        void setReal(double real);
        void setImage(double image);
    private:
        double real, image;
};

#endif // !COMPLEX_H