#include<iostream>
using namespace std;
int main(){
	char name[5];
	int i=0;
	cout<<"enter the  name"<<endl;
	while(1){
		cin>>name[i];
		if(name[i]=='#') break;
		i++;
	}
	i=0;
	cout<<"the name you just entered is "<<endl;
	while(name[i]='#'){
		cout<<name[i];
		i++;
	}
	
}
