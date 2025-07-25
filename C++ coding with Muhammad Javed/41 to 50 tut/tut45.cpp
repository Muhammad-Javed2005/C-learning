#include<iostream>

#include<string>

using namespace std;

class Student 
{
    protected:
        string name;
        int roll_number;

    public:
        void setData(int a)
        {
            roll_number = a ;
            cout<<"Enter your  name : ";
            cin.ignore();
            getline(cin , name);
        }
        void getData(){
            cout<<"Hey "<<name<< " !" <<endl;
            cout<<"Your roll number is "<<roll_number<<endl;
        }
};

class test : virtual public Student 


{

    protected:
        int Maths;
        int Physics;
        int Chemistry;
    public:
        void set_marks(int x , int y , int z)
        {
            Maths = x;
            Physics = y;
            Chemistry = z;
        }
        void get_marks(void)
        {
            cout<<"Your marks in Math are "<<Maths<<endl
                <<"Your marks in Physics are "<<Physics<<endl
                <<"Your marks in Chemistry are "<<Chemistry<<endl;

        }
};

class Score : virtual public Student

{
    protected:

        int score;

    public:
        void set_score(int v)
        {
            score = v;
        }

        void get_score(void)
        {
            cout<<"Your sports score is : "<<score<<endl;
        }
        
};

class Result : public test , public Score
{
    protected:
        int total;

    public:
        void total_marks(void)
        {
            total = Maths+Physics+Chemistry+score;

        }
        void Display_result(void)
        {
            
            getData();
            
            get_marks();
            
            get_score();


            cout<<"Your total marks in Final exam are : "<<total<<endl;
        }
};



int main(){
    Result Zunaira;
    Zunaira.setData(90);
    Zunaira.set_marks(67 , 87 , 87);
    Zunaira.set_score(9);
    Zunaira.Display_result();
    return 0;
}