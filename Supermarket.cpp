#include<iostream>
using namespace std;
class Supermarket{
	int user_id;
	int n;
	int user_pass;
	int ver_id;
	int ver_pass;
	int item_num;
	char item_name[25];
	int quantity[100];
	int price;
	int discount;
	public:
		void introDuction(){
			cout<<"--------------------------------------------------------"<<endl;
			cout<<"\t\tSupermarket Billing System"<<endl;
			cout<<"--------------------------------------------------------"<<endl;
		}
		void setCredentials(){
			cout<<"Register Yourself "<<endl;
			cout<<"Enter your User ID : ";
			cin>>user_id;
			cout<<"Enter your User Password : ";
			cin>>user_pass;
		}
		void verifyUser(){
			cout<<"Re-Enter Your Details "<<endl;
			cout<<"Enter your User ID : ";
			cin>>ver_id;
			cout<<"Enter your User Password : ";
			cin>>ver_pass;
		}
		void Verify(){
			if(user_id==ver_id && user_pass==ver_pass){
				cout<<"You have Successfully Logged In the System ."<<endl;
			}else{
				cout<<"Kindly Enter Correct Username And Password ."<<endl;
				verifyUser();
			}
		}
		void takeInput(){
			cout<<"Enter the Item Number : ";
			cin>>item_num;
			cout<<"Enter the Item Name : ";
			cin>>item_name;
			cout<<"Enter the Quantity of Item : ";
			cin>>quantity;
			cout<<"Enter the Price of Item : ";
			cin>>price;
			cout<<"Enter the Discount Written on your Coupon : ";
			cin>>discount;
		}
		void Billing(){
			cout << item_num[i] << " : " << item_name[i] << " " << quantity[i] << " Pieces " << " $" << price[i] << " With $";
            cout << discount[i] << " Discount " << endl;
		}
};
int main(){
    int i, n;
    Supermarket s1;
    s1.introDuction();
    s1.setCredentials();
    s1.verifyUser();
    s1.Verify();
    cout<<"Enter the Number of Items you have chosen : ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Item No. :" << i+1 << endl;
        s1.takeInput();
    }
    for(i = 0; i < n; i++){
        s1.Billing();
    }
    return 0;
}

