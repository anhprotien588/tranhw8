#include<iostream>
#include<string>
#include "bankAccount.h"
using namespace std;

int main(int argc, char* argv[]){
	BankAccount jackAccount("Jack Smith",50);
	BankAccount jillAccount("Jill Brian",100);
	BankAccount bankArray[3] = { BankAccount("Ralph Kramden",10), BankAccount("Alice Kramden",20), BankAccount("Ed Norton",30)};
	jackAccount.deposit(30);
	jillAccount.deposit(30);
	for(int i = 0; i < 3; i++){
		bankArray[i].deposit(30);
	}
	jackAccount.withdraw(20);
	jillAccount.withdraw(20);
	for(int i = 0; i < 3; i++){
		bankArray[i].withdraw(20);
	}
	
	cout << " name is " << jackAccount.getName() << ", balance " << jackAccount.getBalance() << " dollars. " << endl;
	cout << " name is " << jillAccount.getName() << ", balance " << jillAccount.getBalance() << " dollars. " << endl;
	for (int i = 0; i < 3; i++) {
		cout << " name is " << bankArray[i].getName() << ", balance " << bankArray[i].getBalance() << " dollars. " << endl;
	}
}
