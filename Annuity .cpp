#include <iostream>
#include <vector>
#include <string>
using namespace std; 
int main(){
	string type; 
	while(type != "quit"){
	cout<<"Discrete or Continous? ";
	tolower(getline(cin, type)); 
	if(type =="discrete"){
		string type1; 
		while(type1 !="quit"){
			

			cout<<"Whole Life, Deffered, Term, Pure Endowment, or Endowment? ";
			getline(cin, type1);
			if(type1 =="Whole Life"){
				double interest;
				cout<<"Interest rate: ";
				cin>>interest;
				if(interest > 1){
					interest= interest/100;
				}
				else{
					interest = interest;
				}
				int age;
				cout<<"Age at start of annuity: ";
				cin>>age;
				int years; 
				cout<<"Length of annuity: ";
				cin>>years; 
				double v;
				v = pow(1 + interest, years + 1); 
				cout<<"V is "<<v<<endl;
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
			else if(type1 =="term"){
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
			else if(type1 =="pure endowment"){
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
			else if(type1 =="endowment"){
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
				cout<<"Unrecognized Command"<<endl; 
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
//hello

	return 0;
}
