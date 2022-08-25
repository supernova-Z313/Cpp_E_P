#include <iostream>
using namespace std;

int findMismatch(string s1, string s2){
	int mismatch = 0;
	if(s1.length() != s2.length()){
		return 2;
	}
	else{

		for (int i = 0; i < s1.length(); i++){
			s1[i] = tolower(s1[i]);}
		for (int i = 0; i < s2.length(); i++){
			s2[i] = tolower(s2[i]);}
		for (int i = 0; i < s1.length(); i++){
			if(s1[i] != s2[i]){
				mismatch += 1;
			}
		}
		if (mismatch > 2){
		return 2;}
		return mismatch;
	}
	
}

int main(){
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	cout<<findMismatch(str1, str2);

	return 85;
}