#include <iostream>
using namespace std;
//    constant and variable 
//  What are the constant in c++ 
/*Some time we want value need to be fixed for such senerio that we use the constant by doing this the user cannot change the
  manipulate the value of a constant we acheive that by the using the const keyword the syntax for deriving a constant in c++ is

  cosnt datatype name_of_variable = value;

   what are the symbolic constant 
   Symbolic constants are also known as macros. They are used to represent a particular value which is meaningful only within the program being written .
   syntax  : #define identifier "value" ;
                                        

    ---------------------------------------structure-------------------------------
    structure is a user defined datat type in the c++ and like array but little different from that array is used to store 
    collection of similar data type but structure gives us an advantage that we can store the collection of element of different datatype
    in a user defined data type

*/

// passing the structure as an agrument  in a function

#define PI 3.145;


  struct employee{
    int id;
    float salary;
    char favcar;
  };

  struct information{
    int id;
    int salary;
    float height;
    float weight;
  }info;

  int myheight(information);
   int main(){
    // Constant and Variables in the c++

      const float pi = 3.14;
      double a = 3632*PI;
      cout<< a<<endl ;


    // passing the structure as argument 
      information info;
      info.height = 164;
      myheight(info);
    //   pi = 325;    this is not allowed 
    struct employee Sameer;
    struct  infomation;
    info.id = 343;
    info.salary = 343234;
    info.height = 165.5;
    cout<<info.id<<endl;

    Sameer.id =23;
    Sameer.salary = 125322.345;
    Sameer.favcar = 'g';
    cout<<Sameer.id<<endl;
    cout<<Sameer.favcar<<endl;
    cout<<Sameer.salary<<endl;
    
    return 0;
}


int myheight(information yourinfo){
      cout<<info.height;
      
}