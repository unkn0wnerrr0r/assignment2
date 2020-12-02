#include<iostream>
using namespace

int main(){
	string str;
	cout << "If you enter 'exit', the program will exit";
	cin >> str;
	if(str == "exit")
		exit(100);
	return 0;
}
