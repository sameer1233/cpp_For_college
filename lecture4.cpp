#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
     void get();
     void display();
};

void  Employee::get(){
    cout<<"Enter the employee id"<<endl;
    cin>>id;
    count++;
}


void  Employee ::display(){
      cout<<"Id of the employee is "<< id <<endl;
      cout<<"number of the employee: "<< count<<endl;
}
int Employee :: count;

int main()
{
    Employee Sameer, Harry, Rohan;
    Sameer.get();
    Sameer.display();

    Harry.get();
    Harry.display();

    Rohan.get();
    Rohan.display();
    return 0;
}
