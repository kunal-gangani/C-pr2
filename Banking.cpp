#include<iostream>
#include<string.h>
using namespace std;
class Banking{
	char name[20];
	int account_num;
	int phone_num;
	char email[20];
	int choice1;
	char choice2[5];
	int choice3;
	int cash;
	int total;
	int acc2;
	public:
		void introDuction(){
			cout<<"--------------------------------------------------------"<<endl;
			cout<<"\t\t-: Banking Management System :-"<<endl;
			cout<<"--------------------------------------------------------"<<endl<<endl;
			cout<<"\t\t-: Designed & Programmed By :-"<<endl;
			cout<<"--------------------------------------------------------"<<endl<<endl;	
			cout<<"\t\t KUNAL GANGANI "<<endl<<endl;
			cout<<"\t\t-: Trainer :-"<<endl;
			cout<<"--------------------------------------------------------"<<endl<<endl;
			cout<<"\t\t GAURAV KANANI  "<<endl;
		}
		void toContinue(){
			cout<<"\t\tEnter Any Key N to Continue ...";
			cin>>choice1;
			switch(choice1){
				case 1:
					if(sizeof(choice1)==4){
						cout<<"--------------------------------------------------------"<<endl;
						logIn();
					}else{
						cout<<"Enter A Digit to Continue .";
					}
			}
		}
		void logIn(){
			cout<<"\t\t-: Press A to Log In as Administrator OR S to log in as Staff : " ;
			strcpy(this->choice2=choice2);
			cin>>choice2;
			switch(choice2){
				case 'A':
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\t\tWelcome as Administrator ."<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					break;
				case 'S':
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\t\tStaff ."<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					break;
				case 'a':
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\t\tWelcome as Administrator ."<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					break;
				case 's':
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\t\tWelcome as Staff ."<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					break;
				default:
					cout<<"Invalid Choice .";
			}
		}
		void setData(){
			cout<<"\tEnter The Name of Staff : ";
			cin>>name;
			cout<<"\tEnter The Account Number of Staff : ";
			cin>>account_num;
			cout<<"\tEnter The Phone Number of Staff : ";
			cin>>phone_num;
			cout<<"\tEnter The Email of Staff : ";
			cin>>email;
		}
		void getData(){
			cout<<"--------------------------------------------------------"<<endl;
			cout<<"\t\tName : \t\t"<<name;
			cout<<"\t\tAccount Number : \t\t"<<account_num;
			cout<<"\t\tPhone Number : \t\t"<<phone_num;
			cout<<"\t\tE-Mail : \t\t"<<email;
		}
		void Transaction(){
			total=1000000;
			cout<<"\t\tEnter [1] to Deposit Money : "<<endl;
			cout<<"\t\tEnter [2] to Withdraw Money : "<<endl;
			cout<<"\t\tEnter [3] to Transfer Money : "<<endl;
			cout<<"\t\t Choice: ";
			cin>>choice3;
			switch(choice3){
				case 1:
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\t\tWithdraw the Money : ";
					cin>>cash;
					cout<<"--------------------------------------------------------"<<endl;
					if(total>=cash){
						cout<<"Your Actual Amount is : "<<total<<endl;
						cout<<"Congratulations Your Amount has been Withdrawn Successfully "<<endl;
						total-=cash;
						cout<<"Your Account Balance is : "<<total;
					}else{
						cout<<"Insufficient Balance"<<endl;
					}
					break;
				case 2:
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\t\tDeposit the Money : ";
					cin>>cash;
					cout<<"--------------------------------------------------------"<<endl;
						cout<<"Your Actual Amount is : "<<total<<endl;
						cout<<"Congratulations Your Amount has been Deposited Successfully "<<endl;
						total+=cash;
						cout<<"Your Account Balance is : "<<total;
					break;
				case 3:
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\t\tTransfer the Money : ";
					cin>>cash;
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"Enter the Account Number you want to Transfer to : ";
					cin>>acc2;
						cout<<"Your Actual Amount is : "<<total<<endl;
						cout<<"Congratulations Your Amount has been Transfered Successfully "<<endl;
						total-=cash;
						acc2+=cash;
						cout<<"Your Account Balance is : "<<total;
						break;
				default:
						cout<<"Invalid Choice ";
						break;
			}
		}
	
};
int main(){
	Banking b;
	b.introDuction();
	b.toContinue();
	b.logIn();
	b.setData();
	b.getData();
	b.Transaction();
	return 0;
	
}
