#include <iostream>
using namespace std;


int calculateExponent(int a, int b){
	if (b < 2){
		return a;
	}
	else if (b == 2){
		return a * a;
	}
	else{
		return a * calculateExponent(a, b-1);
	}
}

int calculateFibonacci(int a){
	if (a == 0){
		return 1;
	}
	else if (a == 1){
		return 1;
	}
	else{
		return calculateFibonacci(a-1) + calculateFibonacci(a-2);
	}
}

int calculateFactorial(int a){
	if (a == 0){
		return 1;
	}
	else if (a == 1){
		return 1;
	}
	else{
		return a * calculateFactorial(a-1);
	}
}

int calculateGCD(int a, int b, int c = 0){
	if (c == 0){
		c = min(a, b);
	}
	if (a % b == 0 || b % a == 0){
		return min(a, b);
	}
	else if (a%c == 0 && b%c == 0){
		return c;
	}
	else{
		return calculateGCD(a, b, c-1);
	}
}

int main(){
	cout<<calculateExponent(2, 5)<<endl;
	cout<<calculateFibonacci(5)<<endl;
	cout<<calculateFactorial(3)<<endl;
	cout<<calculateGCD(36, 24)<<endl;

	return 85;
}
