#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class tollbooth{
	int amount, number;
	public:
		tollbooth(){
			amount=0;
			number=0;
			}
		void payingcar(){
			amount+=5;
			number+=1;
			}
		void nopaycar(){
			number+=1;
			}
		void show(){
			cout<<"Total car passed: "<<number<<endl;
			cout<<"Total amount collected is: "<<amount<<endl;
			}	
};

int main() {
	int choice;
	tollbooth T;
	while(1){
	cout<<"*** MENU ***"<<endl;
	cout<<"1. Paying Car"<<endl<<"2. Non Paying Car"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
		switch(choice){
		case 1:
				T.payingcar();
				T.show();
		break;
		case 2:
				T.nopaycar();
				T.show();
		break;
		case 3:
				exit(0);
		break;
		default:
				cout<<"Enter number 1. or 2. or 3."<<endl;
		}
	}
getch();
}
				
	
	

