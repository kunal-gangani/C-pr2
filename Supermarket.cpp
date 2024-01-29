#include<iostream>
using namespace std;
class Supermarket{
	int user_id;
	int user_pass;
	int ver_id;
	int ver_pass;
	int item_num;
	char item_name[25];
	int quantity;
	int price;
	int discount;
	public:
		void introDuction(){
			cout<<"|--------------------------------------------------------|"<<endl;
			cout<<"\t\tSupermarket Billing System"<<endl;
			cout<<"|--------------------------------------------------------|"<<endl;
		}
		void setCredentials(){
			cout<<"|--------------------------------------------------------|"<<endl;
			cout<<"Register Yourself "<<endl;
			cout<<"Enter your User ID : ";
			cin>>user_id;
			cout<<"Enter your User Password : ";
			cin>>user_pass;
			cout<<"|--------------------------------------------------------|"<<endl;
		}
		void verifyUser(){
			cout<<"|--------------------------------------------------------|"<<endl;
			cout<<"Re-Enter Your Details "<<endl;
			cout<<"Enter your User ID : ";
			cin>>ver_id;
			cout<<"Enter your User Password : ";
			cin>>ver_pass;
			cout<<"|--------------------------------------------------------|"<<endl;
		}
		void Verify(){
			cout<<"|--------------------------------------------------------|"<<endl;
			if(user_id==ver_id && user_pass==ver_pass){
				cout<<"You have Successfully Logged In the System ."<<endl;
			}else{
				cout<<"Kindly Enter Correct Username And Password ."<<endl;
				verifyUser();
			}
			cout<<"|--------------------------------------------------------|"<<endl;
		}
		void takeInput(){
			cout<<"|--------------------------------------------------------|"<<endl;
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
			cout<<"|--------------------------------------------------------|"<<endl;
		}
		void Billing(){
			cout<<"|--------------------------------------------------------|"<<endl;
			cout<<item_num<<" : "<<item_name<<" "<<quantity<<" Pieces "<<" $"<<price<<" With $";
            cout<<discount<<" Discount "<<endl;
            cout<<"|--------------------------------------------------------|"<<endl;
		}
};
int main(){
    int i, n;
    cout<<"Enter the Number of Items you have chosen : ";
    cin>>n;
    Supermarket s[n];
    s[i].introDuction();
    s[i].setCredentials();
    s[i].verifyUser();
    s[i].Verify();
    for(i=0;i<n;i++){
        cout<<"Item No. :" << i+1 << endl;
        s[i].takeInput();
    }
    cout<<"*--------------------------------------------------------*"<<endl;
    for(i = 0; i < n; i++){
        s[i].Billing();
    }
    return 0;
}

