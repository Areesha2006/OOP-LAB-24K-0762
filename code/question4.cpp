#include<iostream>
using namespace std;
class Laptop{
    int RAM,storage,processor;
    string brand,model;
    public:
        void turn_on_or_off(int turn){
            if(turn){
                cout<<"Laptop turned on"<<endl;
                run_program();
            }
            else{
                cout<<"Laptop turned off"<<endl;
            }
        }
        void run_program(){
            char close;
            cout<<"Enter the brand: ";
            cin>>brand;
            cout<<"Enter the model: ";
            cin>>model;
            cout<<"Check and enter the RAM: ";
            cin>>RAM;
            cout<<"Check and enter the storage: ";
            cin>>storage;
            cout<<"Check and enter the size of your procssor (in bits): ";
            cin>>processor;
            cout<<"Do you want to close the laptop? Enter 'y' or 'Y' for yes or any other key for no: ";
            cin>>close;
            if(close=='y'||close=='Y'){
                turn_on_or_off(0);
            }
            else{
                cout<<"You laptop is still turned on"<<endl;
            }
        }
        void check_specification(Laptop bilal_laptop){
            int bilal_score=0,ayesha_score=0;
            if(bilal_laptop.processor>processor){
                bilal_score++;
            }
            else{
                if(processor>bilal_laptop.processor){
                    ayesha_score++;
                }
            }
            if(bilal_laptop.RAM>RAM){
                bilal_score++;
            }
            else{
                if(RAM>bilal_laptop.RAM){
                    ayesha_score++;
                }
            }
            if(bilal_laptop.storage>storage){
                bilal_score++;
            }
            else{
                if(storage>bilal_laptop.storage){
                    ayesha_score++;
                }
            }
            if(bilal_score>ayesha_score){
                cout<<"Bilal's laptop is more efficient";
            }
            else if(bilal_score<ayesha_score){
                cout<<"Ayesha's laptop is more efficient";
            }
            else{
                cout<<"Both the laptops are equally efficient";
            }
        }
};
int main(){
    Laptop bilal_laptop,ayesha_laptop;
    cout<<"For Bilal's Laptop "<<endl;
    bilal_laptop.turn_on_or_off(1);
    cout<<endl;
    cout<<"For Ayesha's Laptop "<<endl;
    ayesha_laptop.turn_on_or_off(1);
    cout<<endl<<"Result pf the comparison"<<endl;
    ayesha_laptop.check_specification(bilal_laptop);
    return 0;
}