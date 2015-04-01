# Annuity
#include <iostream>
#include <vector>
#include <string>
using namespace std; 
int main(){
	string type; 
	while(type != "quit"){
	cout<<"Discrete or Continous? ";
	getline(cin, type); 
	if(type =="Discrete"){
		string type1; 
		while(type1 !="quit"){
			

			cout<<"Whole Life, Deffered, Term, Pure Endowment, or Endowment? ";
			getline(cin, type1);
			if(type1 =="Whole Life"){
				double interest;
				cout<<"Interest rate: ";
				cin>>interest;
				interest= interest/100;
				int age;
				cout<<"Age at start of annuity: ";
				cin>>age;
				int years; 
				cout<<"Length of annuity: ";
				cin>>years; 
				double v;
				v = pow(1 + interest, years + 1); 
				double tpx;
				
				
			}
			else if(type1 =="Deffered"){
				double interest;
				cout<<"Interest rate: ";
				cin>>interest;
				interest= interest/100;
				int age;
				cout<<"Age at start of annuity: ";
				cin>>age;
				int years; 
				cout<<"Length of annuity: ";
				cin>>years; 
			}
			else if(type1 =="Term"){
				double interest;
				cout<<"Interest rate: ";
				cin>>interest;
				interest= interest/100;
				int age;
				cout<<"Age at start of annuity: ";
				cin>>age;
				int years; 
				cout<<"Length of annuity: ";
				cin>>years; 
			}
			else if(type1 =="Pure Endowment"){
				double interest;
				cout<<"Interest rate: ";
				cin>>interest;
				interest= interest/100;
				int age;
				cout<<"Age at start of annuity: ";
				cin>>age;
				int years; 
				cout<<"Length of annuity: ";
				cin>>years; 
			}
			else if(type1 =="Endowment"){
				double interest;
				cout<<"Interest rate: ";
				cin>>interest;
				interest= interest/100;
				int age;
				cout<<"Age at start of annuity: ";
				cin>>age;
				int years; 
				cout<<"Length of annuity: ";
				cin>>years; 
			}
			else if(type1 =="quit"){
			}
			else{
				cout<<"Unrecognized command"<<endl; 
			}
		}
	}
	else if(type =="Continous"){
	}
	else if(type =="quit"){
	}
	else{
		cout<<"Unrecognized command"<<endl; 
	}
	}


	return 0;
}