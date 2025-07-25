#include<iostream>
#include<string>
using namespace std;



class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    string name;

    public:
        void initcounter(void)
        {
            counter = 0;
        }
        void setPrice(void);
        void DisplayPrice(void);
};




void shop :: setPrice(void)
{
    cout<<"Enter ID of your Item no :"<<counter + 1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your Item :"<<endl;
    cin>>itemPrice[counter];
    counter++;
};




void shop ::DisplayPrice(void)
{

    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Hello "<<name<<endl;
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with ID is "<<itemId[i]<<" is "<<itemPrice[i]<<endl;

    }

}


int main(){
    shop javed;
    javed.initcounter();
    javed.setPrice();
    javed.setPrice();
    javed.setPrice();
    javed.setPrice();
    javed.setPrice();
    javed.setPrice();
    javed.DisplayPrice();
    return 0;
}


