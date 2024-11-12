/*----------------------------------------------------------------------------------1--------------------------------------------------------------------------------------*/

/*Create a simple C++ program with a class Factorial that has a method calculate to compute the factorial of a given number. 
The method should take an integer as input and return the factorial as an integer.*/

/*#include<iostream>
using namespace std;
class Factorial{
    public:
    int result=1;
    int calculate(int n){
        for(int i=1;i<=n;i++){
            result *=i;
        }
        return result;
    }
};
int main(){
    Factorial f;
    int number;
    cin>>number;

    cout<<"factorial of "<<number<<" is "<<f.calculate(number)<<endl;
    return 0;
}*/

/*-----------------------------------------------------------------------------------2-------------------------------------------------------------------------------------*/

/*Question:
Create a C++ class Factorial with:

A private integer variable number to store the value.
A public method setNumber to set the value of number.
A public method getFactorial that calculates and returns the factorial of number.*/

/*#include<iostream>
using namespace std;
class Factorial{
    private:
    int number;

    public:
    void setNumber(int n){
        number = n;
    }

    int getNumber(){
        int result=1;
        for(int i=1;i<=number;i++){
            result*=i;
        }
        return result;
    }
};
int main(){
    Factorial f;

    int n;
    cin>>n;

    f.setNumber(n);
    cout<<"the factorial of "<<n<<" is "<<f.getNumber()<<endl;

    return 0;  
}*/

/*----------------------------------------------------------------------------------3--------------------------------------------------------------------------------------*/

/*Question:
Design a class Factorial with the following features:

A private integer variable number.
A constructor that initializes number.
A public method calculate that uses recursion to find the factorial of number.
A destructor that displays a message when an object of Factorial is destroyed.*/

/*#include<iostream>
using namespace std;
class Factorial{
    private:
    int number;

    public:
    Factorial(int n):number(n){}

    int calculate(int n){
        if(n<=1){
            return 1;
        }
        return n*calculate(n-1);
    }
};
int main(){
    int n;
    cin>>n;

    Factorial f(n);
    cout<<"the factorial of "<<n<<" is "<<f.calculate(n)<<endl;

    return 0;

}*/