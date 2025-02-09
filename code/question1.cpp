#include<iostream>
using namespace std;
class MarkerPen{
    string brand,color;
    int inkLevel=100,refillability=0;
    public:
        void write(){
            if(inkLevel>0){
                cout<<"Content written successfully"<<endl;
                inkLevel-=10;
                refillability+=10;
            }
            else{
                cout<<"Sorry you do not have sufficient amount of ink to write"<<endl;
            }
        }
        void refill(){
            if(refillability!=0){
                inkLevel+=refillability;
                refillability==0;    
                cout<<"Ink refilled successfully"<<endl;
            }
            else{
                cout<<"The ink is already fully filled"<<endl;    
            }
        }
};
int main(){
    MarkerPen marker1;
    int c;
    do{
        cout<<"Press the appropriate key according to the function you want to perform\n1.Write (Ink will be finished after writting 10 times)\n2.Refill (Will refill the ink fully)\nAny other key to exit\nEnter: ";
        cin>>c;
        switch(c){
            case 1:
                marker1.write();
                break;
            case 2:
                marker1.refill();
                break;
            default:
                cout<<"Exited successfully";
                return 0;
        }
        cout<<endl;
    }while(c==1||c==2);
}