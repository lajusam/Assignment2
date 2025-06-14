#include<iostream>
using namespace std;
 class employee{
    private:
    int emp_id;
    string name,post;


    public:
    void setdata()
   
    {
         cout<<"Enter the details of employee!"<<endl;
         cout<<"Enter emp_id,name,post"<<endl;
        cin>>emp_id>>name>>post;
    }
    private:
    void showdata()
    {
        cout<<"The details of employee are:"<<endl;
        cout<<"emp_id:"<<emp_id<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"post:"<<post<<endl;
    }
    public:
    void display()
    {
         showdata();
    }


 };
 int main()
 {
    employee e1;
    e1.setdata();
    e1.display();
    return 0;
 }
