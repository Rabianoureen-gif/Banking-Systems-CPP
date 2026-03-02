#include<iostream>
using namespace std;
int main(){
	double balance [3] = {1000.0  ,2000.0 ,3000.0 };
	int arraypin[3] = {1111,2222,3333};
  	
			int userid;
			cout<< "Enter a userid 0 :"<<endl;
			cout<< "Enter a userid 1 :"<<endl;
			cout<< "Enter a userid 2 :"<<endl;
			
			cin>> userid;
			
		
			int enteredpin;
			cout<<"enter a pin :"<<endl;
			cin>>enteredpin;
			
	 		if(userid>=0 && userid<3){

		 	cout<<"\n***Access Granted***" <<endl;
		 		if (enteredpin == arraypin[userid]){
		 		
		 			int choice = 0;
		 			cout<<"\n\n*****Enter your choice : *****" ;
		 	
		 			while(choice != 4){
		 			cout<< "\n\nEnter 1 for cheak balance :" <<endl;
					cout<< "Enter 2 for  deposit :" <<endl;
		 			cout<< "Enter 3 for  Withdrawl :" <<endl;
		 			cout<< "Enter 4 for  exit :" <<endl;
		 			cin >>choice;
					  
					  switch(choice){
					  	
					  	case 1 :
					  		cout<< "\n\n your balance : "<<balance[userid] <<endl;
					  		break;
					  
					    case 2 :
					    	double depositamount;
					    	cout << "Enter amount to deposit :" ;  
							cin>> depositamount;
							balance[userid] = balance[userid]+ depositamount;
							cout<<"***Deposit successfully***";
							break;
						
						case 3 :
							double withdrawlamount;
							cout << "Enter amount to withdrawl :"<<endl;
							cin >> withdrawlamount;
							
							if(withdrawlamount <= balance[userid]){
								balance[userid] = balance[userid] - withdrawlamount;
								cout << "\n\n***Withdrawl successfully!***" << endl ;
							}else{
								cout << "\n\n Insufficient amount";
							}
							break;
							
						case 4 :
							cout<< "Thank you! Goodbye." ;
							break ;
					 }
		 	}
		 		
				 }
			
	}
			else{
			cout<< "\n\n ***Invalid userid***";
	}

	
	
	return 0;
}
