#include<iostream>
using namespace std;
class InventoryItem{
private:
    int id, quantity;
    double price;
    bool compatible;
public:
    InventoryItem(int i,int q,double p){
        id = i;
        quantity = q;
        price = p;
        compatible = true;
    }
    InventoryItem operator+(InventoryItem item){
        if(id==item.id && price==item.price){
            return InventoryItem(id,price,quantity+item.quantity);
        }
        InventoryItem result = *this;
        result.compatible = false;
        return result;
    }
    void display(){
        if(!compatible){
            cout<<"Incompatible items cannot be added."<<endl;
            return;
        }
        cout<<"ID : "<<id<<" Quantity : "<<quantity<<" Price : $"<<price<<" Compatible : "<<(compatible?"Yes":"No")<<endl;
    }
};
int main(){
    InventoryItem item1(101, 5, 19);
    InventoryItem item2(101, 3, 19);
    InventoryItem item3(102, 2, 999);

    cout << "Adding compatible items (item1 + item2):" << endl;
    InventoryItem result1 = item1 + item2;
    result1.display();

    cout << "\nAdding incompatible items (item1 + item3):" << endl;
    InventoryItem result2 = item1 + item3;
    result2.display();

    return 0;
}