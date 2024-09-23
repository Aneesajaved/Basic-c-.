#include <iostream>
using namespace std;


int add (int a , int b ){
     int sum = a+ b;
     return sum;
}
int add (int a , int b , int c =12){
     int sum = a+ b-c;
     return sum;
}


int main(int argc, char const *argv[])
{   
     // calling a function
     
      int  num1 = 5;
      int num2=10;
      int num3=10;
     // cout<< add(num1,num2);
     cout<< add(num1,num2,num3);
     return 0;
}


