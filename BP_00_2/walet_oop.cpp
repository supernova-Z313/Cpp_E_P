#include<iostream>
using namespace std;


class walet {
    private:
        float saving;
        int total;

    public:
    walet(int x = 0, float y = 0):total(x), saving(y) {}
    int account_balance(){
            return total;
        }

    float account_saving_balance(){
	    return saving;
    }

    void save(int x, float y){
	saving += x * y;
	total += x - (x*y);
	cout<<x*y<<" saved!"<<endl;
    }

    void add(int x){
            if (x > 0){
                total += x;
                cout<<"Deposit was successfully. "<<endl;
            }
            else{
                cout<<"Deposit was not  successfully, please try again."<<endl;
            }
        }

    void withdraw(int x){
	if (x > total){
	    cout<<"Low account balance! "<<endl;
	}
	else{
	    total -= x;
	    cout<<x<<" withdrawed was successfully"<<endl;
	    if (total <= 50){
		cout<<"Warning: \naccount balance less than 50$"<<endl; 
	    }
	}
    }
};

int main(){

    walet a(20, 30);
    cout<<a.account_balance()<<endl;
    a.add(-5);
    a.add(10);
    cout<<a.account_balance()<<endl;
    a.save(100,0.1);
    cout<<a.account_balance()<<endl;
    a.withdraw(140);
    a.withdraw(105);

    return 85;
}
