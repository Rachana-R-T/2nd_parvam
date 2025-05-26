#include <iostream>
using namespace std;

class product
{
private:
    int quantity;
    float priceperitem;
    
public:
   void setproduct(int q, float price)
   {
       if(q>0 && price>0)
       {
        quantity=q;
        priceperitem=price;
       }
    else{
        cout<<"invalid quantity or price!"<<endl;
        }   
   }   
   float gettotalprice()
   {
    float effectiveprice=priceperitem;
    if(priceperitem>2000)
    {
        effectiveprice-=500;
    }
    return quantity*effectiveprice;
   } 
   int getquantity()
   {
    return quantity;
   }
   float getunitprice()
   {
    return priceperitem;
   }
};

int main()
{
    product item1;
    item1.setproduct(3,499.99);
    cout<<"item bought:"<<item1.getquantity()<<endl;
    cout<<"priceperitem:$"<<item1.getunitprice()<<endl;
    cout<<"total cost:&"<<item1.gettotalprice()<<endl;

    return 0;
}