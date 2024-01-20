#include<iostream>
#include<string.h>
using namespace std;
class Railways{
	int train_num;
	char train_name[30];
	char location[30];
	int train_time;
	int search_train;
	public:
		void UserInput(){
			cout<<"Enter The Train Number : ";
			cin>>this->train_num;
			cout<<"Enter The Train Name : ";
			cin>>this->train_name;
			cout<<"Enter The Train Destination : ";
			cin>>this->location;
			cout<<"Enter The Train Arrival Time : ";
			cin>>this->train_time;
		}
		void  SearchRecord(){
			cout<<"Enter the Train Number you want the Details of : ";
			cin>>search_train;
			if(search_train==train_num){
				
			}
		}
};
int main(){
	int i,n;
	cout<<"Enter the Number of Train Details You Want to Enter : ";
	cin>>n;
	if(n<3){
		cout<<"It must be More than 3";
	}
}
