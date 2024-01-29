#include<iostream>
#include<string>
using namespace std;

class Railways {
private:
    int train_num;
    char train_name; 
    char source; 
    char location; 
    int train_time;
    int search_train;
    int trains; 
    
public:
    Railways(int train_num,char train_name,char source,char location, int train_time, int search_train) {
        this->train_num=train_num;
        this->train_name=train_name;
        this->source=source;
        this->location=location;
        this->train_time=train_time;
        this->search_train=search_train; 
    }
	void addRecords(){
        cout<<"You are now adding Train Details .." << endl;
        cout<<"Enter Train Number : ";
        cin>>this->train_num;
        cout<<"Enter Train Name : ";
        cin>>this->train_name;
        cout<<"Enter Train Source : ";
        cin>>this->source;
        cout<<"Enter Train Destination : ";
        cin>>this->location;
        cout<<"Enter Train Arrival Time : ";
        cin>>this->train_time;
    }
	void displayRecords(){
        cout<<"-------------------------------------------" << endl;
        cout<<"\t Train Number is : " << this->train_num << endl;
        cout<<"\t Train Name is : " << this->train_name << endl;
        cout<<"\t Train Source is : " << this->source << endl;
        cout<<"\t Train Last Destination is : " << this->location << endl;
        cout<<"\t Train Arrival Time is : " << this->train_time << endl;
        cout<<"-------------------------------------------" << endl;
    }

    void specificTrain(){
        int trainno,i;
        cout<<"Enter the Train Number you want the Details of : ";
        cin>>trainno;
        for(i=0;i<search_train;i++){
            if(trains[i]==trainno){
                
            }
        }
    }
};

int main() {
    int u,n;
    cout<<"Enter the Number of Train Details You Want to Enter : "<<endl;
    cin>>n;
    if(n<3){
        cout<<"You need to Enter At least 3 Train Details "<<endl;
    }
    Railways r[n];
	for(i=0;i<n;i++){
        r[i].addRecords();
    }
	for(i=0;i<n;i++){
        r[i].displayRecords();
    }
    return 0;
}

