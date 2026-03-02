#include<iostream>
#include<cstdlib>
using namespace std;

double withdrawamount(double currentbalance , double requestamount){
	
	if(requestamount <= currentbalance){
		currentbalance = currentbalance - requestamount;
		cout <<"\n-----AMOUNT WITHDRAW SUCCESSFULLY------!";
	
		return currentbalance;
	}	
	else{
		cout<< "Insufficient value!";
			return currentbalance;
	}
	
}

double deposit(double currentbalance , double depositamount){
	currentbalance = currentbalance  +  depositamount;
	cout<<"\n\n-------AMOUNT DEPOSIT SUCCESSFULLY!------"<<endl;
	return currentbalance;
}


int main(){
double mybalance , requestamount , depositamount ;
mybalance = 1000.0;	
  
 int secretpin = 1234;
 int userAttempt;
 
 cout <<"\nEnter your pin :";
 cin >> userAttempt;
 	
 	if(userAttempt == secretpin){
 			int choice;
		do{
			system("CLS");
			cout<< "\n\nEnter 1 for withdraw!" <<endl;
			cout<< "\nEnter 2 for deposit!"<< endl;
			cout<< "\nEnter 3 for cheak Balance!" << endl;
			cout<< "\nEnter 4 for exit!" << endl;
			cin>> choice;	
			
			
		switch(choice){
			
			case 1 :
					cout<< "\n Enter amount to withdraw :" <<endl;
					cin >> requestamount;
	

					 mybalance = withdrawamount(mybalance , requestamount);
					 system("pause");
					break;
					
			case 2 :
					
					cout<< "\n\n Enter  amount to deposit :" <<endl;
					cin >> depositamount;
					
 					mybalance = deposit(mybalance , depositamount);
 					 system("pause");
                    break;
                    
            case 3 :
            	 	cout<<"\n\nMy Balance is :" <<mybalance << endl;
            	 	 system("pause");
            	 	break;
            	 	
            case 4 :
            		 cout<<"\n***THANK YOU. GOODBYE!***" <<endl;
            		  system("pause");
            		 break;
            		 
            default :
            		cout <<"\n\n\n\a***CHOICE IS NOT CORRECT!*** " <<endl;
            		
				}
		}while(choice != 4); 

	 }else{
	 	cout <<"\n\n*****INCORRECT PIN. SYSTEM LOCKED!*****  " <<endl;
	 }
    
	return 0;
}
