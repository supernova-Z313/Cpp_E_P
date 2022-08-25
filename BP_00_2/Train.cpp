#include<iostream>
using namespace std;

int main(){

long long int a, b, c;
cin>>a>>b>>c;

if (a == 1){
    cout<<abs(b - c);
}

else if (((b/a) == (c/a)) && (abs(b - c) <= a/2)){
    cout<<abs(b - c)<<endl;
}
else{



int boy = b / a;
if ((b - (boy * a)) > (((boy+1) * a) - b) && (b >= 0)){
    boy++;
}
else if((b - (boy * a)) == (((boy + 1) * a) - b) && (c > b) && (b >= 0)){
    boy++;
}
else if (abs(b - (boy * a)) > abs(((boy - 1) * a) - b) && (b < 0)){
    boy--;
}
else if((b - (boy * a)) == (((boy - 1) * a) - b) && (c < b) && (b < 0)){
    boy--;
}




int girl = c / a;
if ((c - (girl * a)) > (((girl+1) * a) - c) && (c >= 0)){
    girl++;
}
else if((c - (girl * a)) == (((girl+1) * a) - c) && (b > c) && (c >= 0)){
    girl++;
}
else if (abs(c - (girl * a)) > abs(((girl - 1) * a) - c) && (c < 0)){
    girl--;
}
else if((c - (girl * a)) == (((girl - 1) * a) - c) && (b < c) && (c < 0)){
    girl--;
}



int road1 = abs(b - (boy * a));
int road2 = abs(c - (girl * a));

int long_step = abs(((boy * a) - (girl * a)) / a);
if ((long_step + road1 + road2) > abs(b - c)){
    cout<<abs(b - c);
}
else {
    cout<<(long_step + road1 + road2);
}
}


return 0;
}
