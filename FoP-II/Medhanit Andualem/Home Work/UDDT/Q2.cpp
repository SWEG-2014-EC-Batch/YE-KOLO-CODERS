#include<iostream>
using namespace std;
struct complex
{
    double real;
    double imaginary;
};
complex add(complex N1, complex N2)
{
    complex sum;
    sum.real=N1.real+N2.real;
    sum.imaginary=N1.imaginary+N2.imaginary;
    return sum;
}
complex subtract(complex N1, complex N2)
{
    complex difference;
    difference.real=N1.real-N2.real;
    difference.imaginary=N1.imaginary-N2.imaginary;
    return difference;
}
complex multiple(complex N1, complex N2)
{
    complex product;
    product.real = (N1.real * N2.real) - (N1.imaginary * N2.imaginary);
    product.imaginary = (N1.real * N2.imaginary) + (N1.imaginary * N2.real);
    return product;
}
complex division (complex N1, complex N2)
{
    complex quotient;
    double denominator = (N2.real * N2.real) + (N2.imaginary * N2.imaginary);
    quotient.real= quotient.real = ((N1.real * N2.real) + (N1.imaginary * N2.imaginary)) / denominator;
    quotient.imaginary=((N1.imaginary * N2.real) - (N1.real * N2.imaginary)) / denominator;
    return quotient;
}
int main()
{
    complex N1={1.0,2.0};
    complex N2={3.0,4.0};

    complex sum=add(N1,N2);
    complex difference=subtract(N1,N2);
    complex product=multiple(N1,N2);
    complex quotient=division(N1,N2);
cout << "Sum: " << sum.real << " + " << sum.imaginary << "i" << endl;
cout << "Differnece: " << difference.real << " + " << difference.imaginary << "i" << endl;
cout << "Product: " << product.real << " + " << product.imaginary << "i" << endl;
cout << "Quotient: " <<quotient.real<< " + " << quotient.imaginary << "i" << endl;
return 0;
}
