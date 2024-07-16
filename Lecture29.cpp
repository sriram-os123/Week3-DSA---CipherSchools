//this lecture is about this pointer on its explanation
#include<iostream>
using namespace std;
class bank_client{
private:
	int credit_card;
	char pin_number;
	string account_name;
public:
	void set_credit_number(int credit_card){
		this->credit_card=credit_card;
	}
	void get_credit_number(){
		cout<<credit_card;
	}
};
int main(){
    bank_client e;
e.set_credit_number(56789);
e.get_credit_number();
}
