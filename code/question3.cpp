#include<iostream>
using namespace std;
class Planner{
    string task[12][31];
    public:
        void add_task(int at_first=0){
            if(at_first){
                for(int i=0;i<12;i++){
                    for(int j=0;j<31;j++){
                        task[i][j]="-";
                    }
                }
            }
            else{
                int month,date;
                do{
                    cout<<"Enter the month (1-12): ";
                    cin>>month;
                    if(month<1||month>12){
                        cout<<"Invalid month"<<endl;
                    }
                    else{
                        break;
                    }
                }while(1);
                do{
                    cout<<"Enter the date (1-31): ";
                    cin>>date;
                    if(date<1||date>31){
                        cout<<"Invalid date"<<endl;
                    }
                    else{
                        break;
                    }
                }while(1);
                if(task[month-1][date-1]!="-"){
                    cout<<"Sorry a task is already reserved for this day"<<endl;                    
                }
                else{
                    cout<<"Enter the task: ";
                    cin>>task[month-1][date-1];
                    cout<<"Task added successfully"<<endl;
                }
            }
        }
        void remove_task(){
            int are_all_empty=1;
            for(int i=0;i<12;i++){
                for(int j=0;j<31;j++){
                    if(task[i][j]!="-"){
                        are_all_empty=0;
                        break;
                    }
                }
            }
            if(are_all_empty){
                cout<<"No task found"<<endl;
            }
            else{
                int month,date;
                do{
                    cout<<"Enter the month (1-12): ";
                    cin>>month;
                    if(month<1||month>12){
                        cout<<"Invalid month"<<endl;
                    }
                    else{
                        break;
                    }
                }while(1);
                do{
                    cout<<"Enter the date (1-31): ";
                    cin>>date;
                    if(date<1||date>31){
                        cout<<"Invalid date"<<endl;
                    }
                    else{
                        break;
                    }
                }while(1);
                for(int i=0;i<12;i++){
                    for(int j=0;j<31;j++){
                        if(i==month-1&&j==date-1){
                            if(task[i][j]!="-"){
                                task[i][j]="-";                        task[i][j]="-";
                                cout<<"Task removed successfully"<<endl;
                            }
                            else{
                                cout<<"No task found on this date and month so remove opeartion cannot be performed"<<endl;
                            }
                            break;
                        }
                    }
                }
            }
        }
        void display_task(){
            int are_all_empty=1;
            for(int i=0;i<12;i++){
                for(int j=0;j<31;j++){
                    if(task[i][j]!="-"){
                        are_all_empty=0;
                        cout<<endl<<j+1<<" ";
                        if(i+1==1){
                            cout<<"January ";
                        }
                        else if(i+1==2){
                            cout<<"Feburary ";
                        }
                        else if(i+1==3){
                            cout<<"March ";
                        }
                        else if(i+1==4){
                            cout<<"April ";
                        }
                        else if(i+1==5){
                            cout<<"May ";
                        }
                        else if(i+1==6){
                            cout<<"June ";
                        }
                        else if(i+1==7){
                            cout<<"July ";
                        }
                        else if(i+1==8){
                            cout<<"August ";
                        }
                        else if(i+1==9){
                            cout<<"September ";
                        }
                        else if(i+1==10){
                            cout<<"October ";
                        }
                        else if(i+1==11){
                            cout<<"November ";
                        }
                        else{
                            cout<<"December ";
                        }
                        cout<<"2025"<<endl<<"Task: "<<task[i][j]<<endl;
                    }
                }
            }
            if(are_all_empty){
                cout<<"No task found"<<endl;
            }
        }
};
int main(){
    int c;
    Planner plan;
    plan.add_task(1);
    while(1){
        cout<<"Enter appropriate key according to the fuction you want to perform\n1.Add task\n2.Remove task\n3.Display all tasks\nAny other key to exit\nEnter: ";
        cin>>c;
        switch(c){
            case 1:
                plan.add_task();
                break;
            case 2:
                plan.remove_task();
                break;
            case 3:
                plan.display_task();
                break;
            default:
                cout<<"Exited successfully";
                return 0;
        }
        cout<<endl;
    }
}