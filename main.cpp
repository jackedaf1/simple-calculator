#include <iostream>

//making functions to do outout of calculator simple +,-,*,/

//1.making addition operator
int addition(int number1, int number2 ){
       int result = number1+number2;
       return result;
}

//2.making subtraction operator
int subtraction(int number1, int number2){
       int result1=number1-number2;
       return result1;
}

//3.making product operator 
int product( int number1, int number2){
       int result3=number1*number2;
       return result3;
}

//4.making division operator
int division(int number1, int number2){
       int result4=number1/number2;
       return result4;
}

//getting input of two numbers
int main(){
     int number1;
     int number2;
    char operatr;

     std::cout<<"please enter number 1: "<<std::endl;
     std::cin>>number1;
     

     std::cout<<"please enter number 2: "<<std::endl;
     std::cin>>number2;
     
     
     std::cout<<"please select operator : +,-,*,/ "<<std::endl;
     std::cin>>operatr;

     
     //running operators 
     if (operatr== '+'){

       int sum = addition(number1, number2);
       std::cout<<"the sum is: "<<sum<<std::endl;

     } 
     else if (operatr == ('-')){
       int Sum = subtraction( number1, number2);
       std::cout<<"the sum is: "<<Sum<<std::endl;
     }
     else if (operatr == ('*')){
       int Product = product(number1, number2);
       std::cout<<"the product is: "<<Product<<std::endl;
     }
     else if (operatr == ('/')){
       int Result = division(number1, number2);
       std::cout<<"the result is: "<<Result<<std::endl;
     }
   
     return 0;
}