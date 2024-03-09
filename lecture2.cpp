// This lecture is all about the  function and function prototype
   
//  Q1)  what is function ?
    /* The function is a block of code that used to perform some of specific task and 
    return a value and we can pass argument or set of arguments in an function */

   // Q2) What is function prototype ?
     /*==> The function prototype is a statement that informs the compiler about the function 
     name, function data, return type , namber and data types of its parameter. The compiler cross
     checks the function difinition and etc */    


    // What is call by value and call reference  ?
    /* Call by value In the call by value the value of the variable is being passed as argument in function which does not change the 
    actual  parameter */

    /*Call by reference  In this the address of the variable is being passed in the function as an argument and it does change the original value of the actual parameter  */ 

#include <iostream>
using namespace std;
// int sum(int a , int b);   actual parameter and formal parameter 
// void swapNumber( int *a, int *b);
   
// --------------second way of swaping the number by using the call by reference ---------------
 void swapNumber( int  &num1, int &num2);
      
   int &returnByReference(int &a);

int main(){

    //------------------------- Actual parameter and Formal parameter---------------------

//    int num1, num2;
//    cout<<"Enter any two number: "<<endl;
//    cout <<"Number one : "<<endl;
//    cin>>num1;
//    cout<<"Number two: "<<endl;
//    cin>>num2;

//    int add = sum(num1, num2);
//    cout<<"The sum of two number is:  "<<add<<endl;
      
    // ----------------------- Call by value and Call by reference --------------------------

    //    Call by value
        // int a = 2;
        // int b = 5;
        // cout<<"Before swapping \nValue of a : "<<a <<" Value of b : "<<b<<endl;
        // swapNumber(a,b);
        // cout<<"But it dosen't change the value of a and b "<< a<< " "<< b;

        // Call by reference 
        //   int a = 2;
        // int b = 5;
        // cout<<"Before swapping \nValue of a : "<<a <<" Value of b : "<<b<<endl;
        // swapNumber(&a,&b);
        // cout<<"But after swaping the value of a and b "<< a<< " "<< b;


        // ---------------------- second way of using the call by reference is -----------------
           int num1 = 5;
           int num2 = 4;
           swapNumber(num1, num2);
           cout<<"The value after swaping the number are "<< num1 <<" "<< "and  "<< num2 <<"\n";

        //----------------------------- return by reference -----------------------------
        int x = 0;
        returnByReference(x) = 65; 
        cout<<x<<endl;

   return 0;
}



// int sum(int a , int b){
//     int c = a+b;
//     return c;
// }

//  void swapNumber(int a, int b){
//           int temp;
//           temp =a;
//           a = b;
//           b = temp;
//           cout<<"After swaping the a: "<< a<<" the value of b is "<<b<<endl;
//       }


// void swapNumber(int *a, int *b){
//           int temp;
//           temp = *a;
//           *a = *b;
//           *b = temp;
    
//       }


 void swapNumber(int &num1, int &num2){
      int temp;
      temp = num1;
      num1 = num2;
      num2 = temp;
}

int &returnByReference(int &a){
    cout<<a;
    return a;
}