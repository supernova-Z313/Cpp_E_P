#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int fact(int a){
	int ans = 1;
	if(a == 0){
		return 1;
	}
	for(int i = 1; i <= a; i++){
		ans	*= i;
	}
	return ans;
}


double costeta(double a){
	double rad = a * 3.14 / 180;
	double anw = 0;
	for(int i = 0; i <= 10; i++){
		anw += (pow(-1, i) * pow(rad, 2*i))/fact(2*i);
	}
	return anw;
}


int main(){
	cout<<fixed<<setprecision(2);
	double F, D, T;
	cin>>F>>D>>T;
	cout<<F*D*costeta(T);

	return 85;
}
