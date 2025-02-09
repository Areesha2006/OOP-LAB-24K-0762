#include<iostream>
using namespace std;
class TeaMug{
    string brand,color;
    int capacity=0,currentFillLevel=100;
    public:
        void sip_tea(){
            if(currentFillLevel>0){
                cout<<"Tea sipped successfully"<<endl;
                currentFillLevel-=10;
                capacity+=10;
            }
            else{
                cout<<"Sorry you do not have more tea. You need to make a fresh cup"<<endl;
            }
        }
        void refill(){
            if(capacity!=0){
                currentFillLevel+=capacity;
                capacity=0;    
                cout<<"Cup refilled successfully"<<endl;
            }
            else{
                cout<<"The cup is already fully filled"<<endl;    
            }
        }
};
int main(){
    TeaMug mug1;
    int c;
    do{
        cout<<"Press the appropriate key according to the function you want to perform\n1.Sip (Cup will get empty in 10 sips)\n2.Refill (Will fully refill the cup)\nAny other key to exit\nEnter: ";
        cin>>c;
        switch(c){
            case 1:
                mug1.sip_tea();
                break;
            case 2:
                mug1.refill();
                break;
            default:
                cout<<"Exited successfully";
                return 0;
        }
        cout<<endl;
    }while(c==1||c==2);
}