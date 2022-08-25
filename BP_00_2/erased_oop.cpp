#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


class Complex{
public:
	double real, img;
	Complex(double x, double y):real(x), img(y) {}
};

Complex constructComplex(double x, double y){
	return Complex(x, y);
}

Complex conjugate(Complex x){
	return Complex(x.real, x.img * -1);
}

Complex add(Complex x, Complex y){
	return Complex((x.real + y.real), (x.img + y.img));
}

Complex sub(Complex x, Complex y){
	return Complex((x.real - y.real), (x.img - y.img));
}

Complex mul(Complex x, Complex y){
	return Complex(((x.real * y.real) - (x.img * y.img)), ((x.real * y.img) + (x.img * y.real)));
}

void printPolarForm(Complex x){
	float r = sqrt((pow(x.real, 2))+(pow(x.img, 2)));
	float teta = atan2(x.img, x.real)*(180 / 3.14);
	cout<<r<<"e^(i"<<teta<<")";
};

int main(){
	cout<<fixed<<setprecision(2);
	double x1, x2, y1, y2;
	cin>>x1>>y1>>x2>>y2;
	Complex c = constructComplex(x1, y1);
	Complex c2 = constructComplex(x2, y2);
	Complex c3 = conjugate(c);
	cout<<c3.real<<" "<<c3.img<<"\n";
	Complex c4 = add(c, c2);
	cout<<c4.real<<" "<<c4.img<<"\n";
	Complex c5 = sub(c, c2);
	cout<<c5.real<<" "<<c5.img<<"\n";
	Complex c6 = mul(c, c2);
	cout<<c6.real<<" "<<c6.img<<"\n";
	printPolarForm(c);
	
	return 85;
}