#include <iostream>
using namespace std;

int main (){
	int a,b,hasil;
	
	cout<<"masukkan bilangan yang akan dibagi : ";
	cin>>a;
	
	cout<<"masukkan bilangan pembagi : ";
	cin>>b;
	if(b==0)
	{
		cout<<"bilangan pembagi tidak boleh nol"<<endl;
		
	}
	else{
		hasil=a/b;
		cout<<"hasilnya adalah : "<<a/b<<endl;
	}
	return 0;
}
