#include <iostream>
using namespace std;

class Information{
   int id;
   static int  count;
   
   public :
   void get();
   void display();
   static void number();


};

void Information :: get(){
        cout<<"enter the id : "<<endl;
        cin>>id;
        count++;
}

void Information :: display(){
        cout<<"The id id : "<< id<< endl;
}

void Information :: number(){
      cout<<"employee number : "<< count<< endl;
}
int Information :: count;


int main(){
    
    Information Sameer, Harry, Rohan;
    Sameer.get();
    Sameer.display();
    Information::number();

    Harry.get();
    Harry.display();
    Information::number();


    Rohan.get();
    Rohan.display();
    Information::number();
    return 0;
}