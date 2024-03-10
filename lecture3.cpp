#include<iostream>
using namespace std;

struct information{
    int id;
    float salary;
    float base_salary;
}info;


class employee{
   private: 
   int a, b , c, num1, num2, arr[2];
   public : 
   int d , e , f;

   void getData();
   int displayData(int a1, int b1, int c1){
            a = a1;
            b = b1;
            c = c1;
            for(int i = 0; i<5; i++){
                cout<<"enter the value of element "<<i<< endl;
                cin>>arr[i];
            }
   }; 

};


void inline employee ::    getData(){
     num1 = 25222;
     num2 = 2;
    
    //  cout<<num1<<endl;
    //  cout<<num2<<endl;
    //  cout<<num2<<endl;

     for(int i = 0; i<5; i++){
        cout<<"The value for array element are : "<<arr[i]<<endl;
     }
}
int main(){
     struct information;
     info.id = 32;
     info.salary = 1400000;
     info.base_salary = 2500000;
     int num1, num2, num3;
     num1 = 23;
     num2 = 24;
     num3 = 25;
     employee Sameer;
    //  Sameer.a = 25;   // It is a private member and only the function inside the class can have  access to it. So we cannot directly assign value
     Sameer.d = 26;  // It is the public member we can  access directly using object name itself'
     Sameer.displayData(num1, num2,num3);
     Sameer.getData();
    return 0;
}


// Object oriented programming
   /*
      Why OOPS ?+
      ==>  1) So, first of all we need to know that why OOPs is important in programing 
            as first in the c language the as the code become larger and complex the 1000nd of line 
            are being added in the program which reduces the program redibility, reliability, hard to mantain, 
            code become less secure.

            2) As it works on the concept of object and class the class is nothing but a blueprint for creating and object and object are nothing collection of element having a certain key property  
            and this concept help in the data flow  and control flow.

            3) Inheritance ==> Inheritance This is the concept where one can inherit the property of other class  which inreases the reusibility of the code 

            4) Polymorphism ==> Polymorphism is the concept where one thing can have more than one form it is the concept of object oriented programming and it help the code to make more reliable.

            5) Data security ==> Treats the data as criticle element and whcih increases the security of the code  
             
            6) multiple object can exist whith inheriting the property of each
            7) The code which will execute will be known during the execution time
            8) easy to manage the software complexity 

      

   2)   What are the class and structure 
      ==> 1)  Structure ==> As we have learned earlier about the array which is the collection of element and derived data which are defined using the primitive data type a collection of elements of similar datatype.
      But in structure which is user defined data type it is the collection element of different datatype 
      we can group a collection of different etities under a closed curly braces {} with the help of the

      keyword struct 
      The user can define a datatype of its own 
      for example 
      
      syntax
      struct_keyword nameofDatatype{
        datatype  element_name;
        datatype  element_name;
        datatype  element_name;
      }

    struct information{
    int id;
    float salary;
    float base_salary;
}info;

int main(){
     struct information;
     info.id = 32;
     info.salary = 1400000;
     info.base_salary = 2500000;
     
     
    return 0;
}
 
 we can use the typedef keyword to change the name of the datatype 
 but there is one probleme with structure that they do not much method to operate 
 and there is no such thing  as inheritance in c++ so if you want to 
 adding function to structure is very complex
 there is no such thing such as data security  in c++ so all the elements 
 That the reason why we use the class instead of the structure
 They can be access from anywhere in the program.


Class ===> Class is the building block that of the object oriented programming and it is user defined data type .
it is used to as template for creating the object and it gives as the better functionality for adding function than the structure, gives us the property of inheritance a property of one class can inherited by the other class 
Our data is much secured with class as compared to structure and increases the reusibility of the code 

syntax 

*/
