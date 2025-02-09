#include<iostream>
using namespace std;
class GroceryStore{
    int prices[100];
    string items[100];
    public:
        void add_item(string item,int p,int count){
            items[count]=item;
            prices[count]=p;
            cout<<"Item added successfully"<<endl;
        }
        void update_price(int total){
            if(total==0){
                cout<<"No item found hance update operation cannot be performed"<<endl;
            }
            else{
                string item;
                int found=0;
                cout<<"Enter the name of the item whose price you want to update: ";
                cin>>item;
                for(int i=0;i<total;i++){
                    if(items[i]==item){
                        found=1;
                        cout<<"Enter new price: ";
                        cin>>prices[i];
                        cout<<"Price updated successfully"<<endl;
                        break;
                    }
                }
                if(!found){
                    cout<<item<<" not found"<<endl;
                }
            }
        }
        void view_inventory(int total){
            if(total==0){
                cout<<"No item found"<<endl;
            }
            else{
                for(int i=0;i<total;i++){
                    cout<<endl<<"Item "<<i+1<<endl<<"Name: "<<items[i]<<endl<<"Price: "<<prices[i]<<endl;
                }
            }
        }
        void generate_receipt(int total){
            if(total==0){
                cout<<"No item found hance receipt cannot be generated"<<endl;
            }
            else{
                int a,sum=0,qty[100],order[100],p,total_order=0;
                while(1){
                    cout<<"\nEnter the appropriate key accordint to the item you want to order"<<endl;
                    for(int i=0;i<total;i++){
                        cout<<i+1<<".Name: "<<items[i]<<", Price: "<<prices[i]<<endl;                    
                    }
                    cout<<"Any other key to exit"<<endl<<"Enter: ";
                    cin>>a;
                    if(a>0&&a<=total){
                        cout<<"Enter the qty: ";
                        cin>>qty[total_order];
                        p=qty[total_order]*prices[a-1];
                        sum+=p;
                        order[total_order]=a-1;
                        total_order++;
                    }
                    else{
                        break;
                    }
                }
                cout<<endl<<"Your order includes"<<endl;
                for(int i=0;i<total_order;i++){
                    int j=order[i];
                    cout<<qty[i]<<"x"<<items[j]<<", Price: "<<prices[j]<<endl;
                }
                cout<<"Total: "<<sum<<endl;
            }
        }
};
int main(){
    GroceryStore store;
    string item;
    int c,price,total=0;
    while(1){
        cout<<"Enter the appropriate key according to the function you want to perform\n1.Add Item\n2.Update Price\n3.View Inventory\n4.Generate Receipt\nAny other key to exit\nEnter: ";
        cin>>c;
        switch(c){
            case 1:
                cout<<"Enter the name of the item that you want to add: ";
                cin>>item;
                cout<<"Enter the price of the item: ";
                cin>>price;
                store.add_item(item,price,total);
                total++;
                break;
            case 2:
                store.update_price(total);
                break;
            case 3:
                store.view_inventory(total);
                break;
            case 4:
                store.generate_receipt(total);                
                break;
            default:
                cout<<"Exited successfully";
                return 0;
        }
        cout<<endl;
    }
}