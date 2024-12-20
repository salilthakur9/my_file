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

/*----------------------------------------------------------------------------------4--------------------------------------------------------------------------------------*/

/*Question:
Create a C++ program with a class Factorial that supports:

Input validation in the constructor to ensure only non-negative integers are used.
An overloaded calculate method, where one version calculates the factorial iteratively, and the other calculates it recursively.
A static method displayFactorial that displays the factorial of a given number without creating an object.*/

/*#include<iostream>
using namespace std;
class Factorial{
    int number;
    public:
    Factorial(int n){
        if(n<0)number=0;
        else number=n;
    }
    int calculate(){
        int result=1;
        for(int i=1;i<=number;i++) result*=i;
        return result;
    }
    int calculate(int n){
        if(n<1)return 1;
        return n*calculate(n-1);
    }
    static void display (int n){
        Factorial f(n);
        cout<<"the factorial of "<<n<<" is "<<f.calculate(n)<<endl;
    }
};
int main(){
    int num;
    cin>>num;

    Factorial f(num);
    cout<<"the factorial of "<<num<<" for without parameter function is: "<<f.calculate()<<endl;
    cout<<"the factorial of "<<num<<" for parameterized function is: "<<f.calculate(num)<<endl;

    Factorial ::display(num);

    return 0;
}*/

/*----------------------------------------------------------------------------------5--------------------------------------------------------------------------------------*/

/*Question:
Create a C++ class Swapper that has two integer attributes a and b. Write a public method swapValues that swaps the values of a and b without 
using a third variable. Demonstrate this method in the main function.*/

/*#include<iostream>
using namespace std;
class Swapper{
    public:
    int a,b;
    void swapValues(){
        a=a+b;
        b=a-b;
        a=a-b;
    }
};
int main(){
    Swapper s;
    cin>>s.a>>s.b;

    cout<<"before swap the number are: "<<s.a<<" and "<<s.b<<endl;
    s.swapValues();
    cout<<"after swap the numbers are: "<<s.a<<" and "<<s.b<<endl;

    return 0;
}*/

/*----------------------------------------------------------------------------------6--------------------------------------------------------------------------------------*/

/*Question:
Create a class Swapper with:

Private integer attributes a and b.
A method setValues to initialize a and b.
A method swapValues that swaps a and b without using a third variable.
A method display to print the values of a and b.*/

/*#include<iostream>
using namespace std;
class Swapper{
    int a,b;
    public:

    void setValues(int number1,int number2){
        a=number1;
        b=number2;
    }

    void swapValues(){
        a=a+b;
        b=a-b;
        a=a-b;
    }

    void display(){
        cout<<"a: "<<a<<" and b: "<<b<<endl;
    }
};
int main(){
    Swapper s;
    int number1,number2;
    cin>>number1>>number2;

    s.setValues(number1,number2);
    s.display();
    s.swapValues();
    s.display();

    return 0;

}*/

/*----------------------------------------------------------------------------------7--------------------------------------------------------------------------------------*/

/*Question:
Write a class Swapper with:

A constructor to initialize two private attributes a and b.
A method swapValues that swaps a and b using XOR bitwise operations, without a third variable.
A method display to print the values.*/

/*#include<iostream>
using namespace std;
class Swapper{
    int a,b;

    public:
    Swapper(int x, int y):a(x),b(y){}

    void swapValues(){
        a=a^b;
        b=a^b;
        a=a^b;
    }

    void display(){
        cout<<"value of a: "<<a<<" and b: "<<b<<endl;
    }
};
int main(){
    int x,y;
    cin>>x>>y;

    Swapper s(x,y);
    s.display();
    s.swapValues();
    s.display();

    return 0;
}*/

/*----------------------------------------------------------------------------------8--------------------------------------------------------------------------------------*/

/*Question:
Create a Swapper class with:

Private integer attributes a and b.
A constructor to initialize the attributes.
Overloaded swapValues methods: one using addition/subtraction and the other using XOR bitwise operations.
A static method displaySwap that swaps two given numbers without creating an object.*/

/*#include<iostream>
using namespace std;
class Swapper{
    int a,b;

    public:
    Swapper(int x, int y):a(x),b(y){}

    void swapValuesUsingAdditionSubtraction(int x, int y){
        x=x+y;
        y=x-y;
        x=x-y;
    }

    void swapValuesUsingXorOperator(int x , int y){
        x=x^y;
        y=x^y;
        x=x^y;
    }

    static void displayUsingStaticFunction(int x , int y){
        x=x+y;
        y=x-y;
        x=x-y;
        cout<<"after swap value of x= "<<x<<" and y= "<<y<<endl;
    }

    void display(){
        cout<<"value of a= "<<a<<" and b= "<<b<<endl;
    }

};

int main(){
    int number1,number2;
    cin>>number1>>number2;

    Swapper s(number1,number2);
    s.display();
    s.swapValuesUsingAdditionSubtraction(number1,number2);
    s.display();
    s.swapValuesUsingXorOperator(number1, number2);
    s.display();

    Swapper::displayUsingStaticFunction(number1,number2);

    return 0;
}*/

/*----------------------------------------------------------------------------------9--------------------------------------------------------------------------------------*/

/*Question:
Create a C++ class SumCalculator with a single public method sum that takes two integer numbers as arguments and returns their sum. 
Demonstrate the method in the main function by finding the sum of two numbers.*/

/*#include<iostream>
using namespace std;
class SumCalculator{
    public:
    int sum(int a,int b){
        return a+b;
    }
};
int main(){
    int x,y;cin>>x>>y;

    SumCalculator s;
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<s.sum(x,y)<<endl;

    return 0;
}*/

/*----------------------------------------------------------------------------------10--------------------------------------------------------------------------------------*/

/*Question:
Write a class SumCalculator that can calculate the sum of a set of numbers using a method calculateSum. The method takes an array and the 
size of the array as parameters and returns the sum of the elements. Demonstrate this in the main function.*/

/*#include<iostream>
using namespace std;
class SumCalculator{
    public:
    int calculateSum(int arr[],int size){
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=arr[i];
        }return sum;
    }
};

int main(){
    int n;
    cin>>n;

    SumCalculator s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"sum of "<<n<<" indexes of arr is: "<<s.calculateSum(arr,n)<<endl;
    return 0;
}*/

/*----------------------------------------------------------------------------------11--------------------------------------------------------------------------------------*/

/*Problem:
Write a program for a company that generates personalized email greetings. 
The greeting should include the recipient's first and last name and their role in the company.*/

/*#include<iostream>
#include<string>
using namespace std;
class Company{
    private:
    string first_name,last_name,role;

    public:
    void setItems(const string fn, const string ln, const string r){
        first_name = fn;
        last_name = ln;
        role = r;
    }

    void display(){
        cout<<"Dear "<<first_name<<" "<<last_name<<","<<endl;
        cout<<"welcome as a "<<role<<" !"<<endl;
    }
};
int main(){
    string f,l,r;
    cin>>f>>l;
    cin.ignore();
    getline(cin, r);

    Company c;
    c.setItems(f,l,r);
    c.display();

    return 0;
}*/

/*----------------------------------------------------------------------------------12--------------------------------------------------------------------------------------*/

/*A restaurant wants to create a digital menu system. The program should accept 5 menu items as input from the user and display them in 
a numbered format as shown below:

markdown
Copy code
Restaurant Menu:  
1. Burger  
2. Pasta  
3. Pizza  
4. Salad  
5. Juice  */

/*#include<iostream>
#include<string>
using namespace std;
class Restaurant{
    string items[5];

    public:
    void set_items(const string items_list[]){
        for(int i=0;i<5;i++){
            items[i]=items_list[i];
        }
    }

    void display(){
        cout<<"The itms u have ordered are: "<<endl;
        for(int i=0;i<5;i++){
            cout<<i+1<<". "<<items[i]<<endl;
        }
    }
};
int main(){
    string add_items[5];
    for(int i=0;i<5;i++){
        getline(cin, add_items[i]);
    }
    Restaurant r;
    r.set_items(add_items);
    r.display();
    
    return 0;
}*/

/*----------------------------------------------------------------------------------13--------------------------------------------------------------------------------------*/

/*Problem Statement:
A school needs a program to display the exam results of a student. The program should accept the student’s name and grades for three subjects. 
It should then display the results in the following format:

Exam Results for [Student Name]:  
Subject 1: [Grade]  
Subject 2: [Grade]  
Subject 3: [Grade]  */

/*#include<iostream>
#include<string>
using namespace std;
class Grades{
    
};

int main(){
    int number_of_subs;
    cout<<"Enter the number of subjects: "<<endl;
    cin>>number_of_subs;
    cin.ignore(); 

    string subjects[10];
    for (int i = 1; i <= number_of_subs; i++) {
        cout << "Enter name of subject " << i << ": ";
        getline(cin, subjects[i]); 
    }
    cout << endl;

    return 0;
}*/

/*----------------------------------------------------------------------------------14--------------------------------------------------------------------------------------*/

/*Problem Statement:
A railway system needs a program to display train ticket details. The program should accept the passenger’s name, train number, and seat number as input, and display the details in the following format:

Train Ticket Details:  
Passenger Name: [Name]  
Train Number: [Train Number]  
Seat Number: [Seat Number]  */

/*#include<iostream>
#include<string>
using namespace std;
class Train{
    string pName;
    int trainNumber,seatNumber;

    public:
    void set_items(string name, int tNumber, int sNumber){
        pName= name;
        trainNumber=tNumber;
        seatNumber=sNumber;
    }

    void display(){
        cout<<"The details are:"<<endl;
        cout<<"Passenger Name: "<<pName<<endl;
        cout<<"Train Number: "<<trainNumber<<endl;
        cout<<"Seat Number: "<<seatNumber<<endl;
    }
};
int main(){
    int number,sNumber;
    string name;
    cin.ignore();

    getline(cin, name);
    cin>>number>>sNumber;

    Train t;
    t.set_items(name,number,sNumber);
    t.display();

    return 0;
}*/



#include <iostream>
using namespace std;

class KthLargestFinder {
private:
    int numbers[100]; // Array to store the numbers
    int size;

    // Function to sort the array in descending order
    void sortDescending() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (numbers[i] < numbers[j]) {
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }

public:
    // Function to set numbers in the array
    void setNumbers(int arr[], int n) {
        size = n;
        for (int i = 0; i < n; i++) {
            numbers[i] = arr[i];
        }
    }

    // Function to print the kth largest number
    void printKthLargest(int k) {
        if (k > size || k <= 0) {
            cout << "Invalid value of k!" << endl;
            return;
        }

        sortDescending(); // Sort the array
        cout << "The " << k << "th largest number is: " << numbers[k - 1] << endl;
    }
};

int main() {
    KthLargestFinder finder;
    int n, k;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    finder.setNumbers(arr, n); // Set the array of numbers
    finder.printKthLargest(k); // Print the kth largest number

    return 0;
}
