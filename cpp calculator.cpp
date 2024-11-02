#include<iostream>
using namespace std;

//cpp calculator
int main(){
	int n1,n2,result;
	cout<<"1.Sum\n"<<"2.Subtraction\n"<<"3.Multip\n"<<"4.Division"<<endl;
	
	cout<<"Enter a choice:"<<endl;
	int choice;
	cin>> choice;
	cout<<"Enter first integer:\n";
	cin>>n1;
	cout<<"Enter second integer:\n";
	cin>>n2;
	if (choice== 1){
		result=n1+n2;
	cout<<"Result:"<<result<<endl;	
	}
	else if(choice==2){
		if(n1>n2){
			result=n1-n2;
			cout<<"Result:"<<result<<endl;	}
			else{
				result=n2-n1;
				cout<<"Result:"<<result<<endl;	
			}
		}
	else if(choice==3){
		result=n1*n2;
		cout<<"Result:"<<result<<endl;	
	}
	else if(choice==4){
		if(n1%n2==0){
				result=n1/n2;
				cout<<"Result:"<<result<<endl;	
		}
		else if(n2==0){
				cout<<"No result:"<<result<<endl;
		}
		else if(n1%n2!=0){
			result=n1/n2;
				cout<<"Whole part result:"<<result<<endl;	//tam kýsým demek istedim
		}
		
		
	}
	else{
			cout<<"ERROR! Select a valid option";	
	}
	
	return 0;
}


