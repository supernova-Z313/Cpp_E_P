#include<iostream>
using namespace std;

int prime(int x){
    for(int i=3; i<x; i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}

int magsom(int x){
    int n = 0;
    for(int i=3; i<=x; i = i+2){
        if(x%i == 0){
            int p = prime(i);
            if (p == 1){
                n++;
            }
        }
    }
    return n;
}

int beautifull(int x){
    int y = magsom(x);
    if ((y > 2) && (x%y == 0)){
        return 1;
    }
    return 0;
}

int axe(int x){
    int z = 0;
    while(x > 0){
    z *= 10;
    z += x%10;
    x /= 10;
    }

    return z;
}

int main(){
    int a;
    cin>>a;
    int all_numb1 = 0;
    if (a>=104){
        for(int i = 3; i<=a; i = i+2){
            int o = beautifull(i);
            if(o == 1){
            all_numb1 = all_numb1 + i;
            }
        }
    }

    if (all_numb1 == 0){
        cout<<"NOT FOUND!"<<endl;
    }
    else{
        cout<<axe(all_numb1)<<endl;
    }

    return 85;
}
