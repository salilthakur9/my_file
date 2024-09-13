/*#include <bits/stdc++.h>
int main() {
    std::cout << "Those 3am thoughts:)";

    return 0;
}*/


/*#include <iostream>

int main() {
    std::cout << "their real face!";

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  sum = first_number + second_number;

  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}*/



/*#include <iostream>
using namespace std;

int main()
{
    int first_number, second_number, sum;

    cout<<"enter two numbers= ";
    cin>>first_number>>second_number;
    sum=first_number+second_number;
    
    cout<<first_number<<"+"<<second_number<<"="<<sum;
    return 0;
}*/



/*#include <iostream>
using namespace std;

int main()
{
    int first_number, second_number, mul;

    cout<<"enter two number= ";
    cin>>first_number>>second_number;
    mul=first_number*second_number;

    cout<<first_number<<"*"<<second_number<<"="<<mul;
    return 0;
}*/



/*#include <iostream>
using namespace std;

int main()
{
    int a,b,div;
    cout<<"enter two numbers= ";
    cin>>a>>b;
    div=a/b;

    cout<<a<<"/"<<b<<"="<<div;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    cout<<"salil thakur";
    return 0;
}*/



/*#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: "<<num<<endl;

    return 0;
}*/


/*#include <iostream>
using namespace std;
int main()
{
    int num1,num2,sum;
    cout <<"enter num1= ";
    cin>>num1;
    cout <<"enter num2= ";
    cin>>num2;

    sum=num1+num2;
    cout<<num1<<"+"<<num2<<"="<<sum;

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int number1,number2,number3,average;
    cout<<"enter the value of number1= ";
    cin>>number1;
    cout<<"enter the value of number2= ";
    cin>>number2;
    cout<<"enter the value of number3= ";
    cin>>number3;

    average=(number1+number2+number3)/3;

    cout<<"the average of 3 given numbers are= "<<number1<<"+"<<number2<<"+"<<number3<<"/"<<"3"<<"="<<average;

    return 0;

}*/



/*#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age= "<<endl;
    cin>>age;

    if(age>=18)
    {
        cout<<"you are an adult"<<endl;

    }
    else{
        cout<<"you are a child"<<endl;

    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    char letters;
    cout<<"enter any english alphabet= "<<endl;
    cin>>letters;

    if(letters>='a' && letters<='z')
    {
        cout<<"LOWERCASE"<<endl;

    }
    else if(letters>='A' && letters<='Z')
    {
        cout<<"UPERCASE"<<endl;

    }
    else{
        cout<<"enter input is not an english alphabet"<<endl;

    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age= "<<endl;
    cin>>age;

    age>=18 ? cout<<"you can vote"<<endl : cout<<"you cannot vote"<<endl;
    return 0;

}*/



/*#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"enter month-"<<endl;
    cin>>month;

    switch (month)
    {
        case 1:cout<<"jan"<<endl;
        break;
        case 2:cout<<"feb"<<endl;
        break;
        case 3:cout<<"march"<<endl;
        break;
        case 4:cout<<"april"<<endl;
        break;
        case 5:cout<<"may"<<endl;
        break;
        case 6:cout<<"june"<<endl;
        break;
        case 7:cout<<"july"<<endl;
        break;
        case 8:cout<<"august"<<endl;
        break;
        case 9:cout<<"sept"<<endl;
        break;
        case 10:cout<<"oct"<<endl;
        break;
        case 11:cout<<"nov"<<endl;
        break;
        case 12:cout<<"dec"<<endl;
        break;
        default:cout<<"false input"<<endl;
    }
    return 0;
}*/



/*#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}*/



/*#include <iostream>
using namespace std;

int main()
{
    
    int a = 5, b = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"a= "<<a<<",b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;

    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
    
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number= ";
    cin>>n;

    if(n%2==0)
    {
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter an english alphabet= ";
    cin>>c;

    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        cout<<"it is a vowel";
    }
    else if(!isalpha(c))
    {
        cout<<"ERROR! input is not an english alphabet";
    }
    else{
        cout<<"consunent";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    double num1,num2,num3;
    cout<<"enter num1= ";
    cin>>num1;
    cout<<"enter num2= ";
    cin>>num2;
    cout<<"enter num3= ";
    cin>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<num1<<" is greatest";
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<num2<<" is greatest";

    }
    else{
        cout<<num3<<" is greatest";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    double num1, num2, num3;
    cout<<"enter number 1= "<<endl;
    cin>>num1;
    cout<<"enter number 2= "<<endl;
    cin>>num2;
    cout<<"enter number 3= "<<endl;
    cin>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<"number 2 is greatest"<<endl;
    }
    else if(num2>num3 && num2>num1)
    {
        cout<<"number 2 is greatest"<<endl;
    }
    else{
        cout<<"number 3 is greatest"<<endl;
    }
    return 0;

}*/



/*#include<iostream>
using namespace std;
int main()
{
    short int si;
    cout<<"size of short int is"<<sizeof(si)<<endl;
    long int li;
    cout<<"size of long int is"<<sizeof(li)<<endl;

    return 0;

}*/



/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter all three numbers= "<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<"is greatest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }
    
    else {
        if(b>c)
        {
            cout<<b<<"is greatest";

        }
        else {
            cout<<c<<"is greatest";
        }
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;

    for(int c=1;c<=n;c++)
    {
        sum=sum+c;
    }
    cout<<sum;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int n,s,sum=0;
    cin>>n;
    for(s=1;s<=n;s++)
    {
        sum=sum+s;
    }
    cout<<sum;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i;
    int s;
    cin>>s;
    for(i=1;i<=s;++i)
    {
        cout<<i<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;++i){
        cout<<" "<<i;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i,s;
    cin>>s;
    for(i=1;i<=s;++i){
        cout<<i<<" ";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i,s;
    cin>>s;
    for(i=1;i<=s;i++)
    {
        cout<<i<<endl<<endl;

    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
int product = 1;
for (int i = 1; i <= 5; ++i) {
    product *= i;
    cout<<product<<" ";
}
return 0;
}*/



/*#include <iostream>
using namespace std;
int main() 
    {
    int product = 1;

    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    for (int i = 0; i < numElements; ++i) {
        int number;
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;

        product *= number;
    }
    cout << "The multiplication of the numbers is: " << product << endl;

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int product=1;
    int i, elements;
    cout<<"enter the number of elements: ";
    cin>>elements;

    for(i=0;i<elements;i++)
    {
    int number;
    cout<<"enter the number"<<i+1<<": ";
    cin>>number;
    product *= number;
    }
    cout<<"therefore the multiplication of the given numbers are= "<<product<<endl;

    return 0;

}*/



/*#include<iostream>
using namespace std;
int main()
{
    int product=1;
    int i,elements;
    cout<<"enter the number of elements= ";
    cin>>elements;

    for(i=0;i<elements;++i)
    {
        int number;
        cout<<"enter number= ";
        cin>>number;
        product *= number;
    }
    cout<<"therefore the multiplication of numbers is= "<<product<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        cout<<i;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i,elements;
    cout<<"enter elements=";
    cin>>elements;
    for(i=1;i<=elements;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter number of times print= ";
    cin>>n;
    while(i<=n)
    {
        cout<<"hello"<<" ";
        i++;
    }
    return 0;
}*/



/*#include <iostream>
using namespace std;
int main() {
    // Declare variables
    int number, digit, sum = 0;

    // Input a three-digit number
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Extract digits and calculate the sum
    digit = number % 10;    // Extract the units digit
    sum += digit;
    number /= 10;           // Remove the units digit

    digit = number % 10;    // Extract the tens digit
    sum += digit;
    number /= 10;           // Remove the tens digit

    digit = number;         // The remaining number is the hundreds digit
    sum += digit;

    // Print the sum
    cout << "Sum of individual digits: " << sum << endl;

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int digit,number,sum=0;
    cout<<"enter a three digit number= ";
    cin>>number;

    digit=number%10;
    sum+=digit;
    number/=10;

    digit=number%10;
    sum+=digit;
    number/=10;
    
    digit=number;
    sum+=digit;

    cout<<"the sum of individual numbers are= "<<sum;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int number,digit,sum=0;
    cout<<"enter any three digit number= ";
    cin>>number;

    digit=number%10;
    sum+=digit;
    number/=10;

    digit=number%10;
    sum+=digit;
    number/=10;

    digit=number;
    sum+=number;

    cout<<"so sum of individual numbers of any 3 digit number is= "<<sum;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum;
    cout<<"enter number 1= "<<endl;
    cin>>num1;
    cout<<"enter number 2= "<<endl;
    cin>>num2;
    sum=num1+num2;
    cout<<"sum= "<<sum;
    return 0;
}*/



/*#include<iostream>
#define pi 3.14;
using namespace std;
int main(){
    cout<<pi;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int global = 10;
int main(){
    int global = 20;
    cout<<global;
}*/



/*#include<iostream>
using namespace std;
void func(){
    int age=25;
    cout<<age;
}
main(){
    int age=20;
    func();
    return 0;
}*/



/*#include<iostream>
using namespace std;
int age=18;
void func(){
    cout<<age<<endl;
}
int main(){
    func();
    age=25;
    func();
    return 0;
}*/



/*#include<iostream>
using namespace std;
int x;
void func(){
    extern int x;
    cout<<x;
}
int main(){
    func();
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<x;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int staticFun()
{
    cout << "For static variables: ";
    static int count = 0;
    count++;
    return count;
}
int nonstatic()
{
    cout<<"enter number:";
    int count=0;
    count++;
    return count;
}
int main(){
    cout<<staticFun()<<endl;
    cout<<staticFun()<<endl;
    cout<<staticFun()<<endl;
    cout<<nonstatic()<<endl;
    cout<<nonstatic()<<endl;
    cout<<nonstatic()<<endl;

    return 0;
}*/



/*#include<iostream>
using namespace std;
void func(){
    register char chr='s';
    cout<<chr;
}
int main(){
    func();
    return 0;
}*/



/*#include<iostream>
using std::cout;
class Test{
    public:
    int x=10;
    mutable int y=20;
    Test(){
        x=30;
        y=40;
    }
};
int main(){
    const Test t;
    t.y=50;
    // t.x=60;
    cout<<t.x;
    cout<<t.y;
    return 0;
}*/



/*#include<iostream>
#include<thread>
using namespace std;
thread_local int age=19;
int main(){
    thread th1([](){
        cout<<(age+=10)<<endl;
    });
    thread th2([](){
        cout<<(age+=15)<<endl;
    });
    thread th3([](){
        cout<<(age+=20)<<endl;
    });
    th1.join();
    th2.join();
    th3.join();
    return 0;
}*/



/*#include<iostream>
using namespace std;
void func(){
    static int count=0;
    cout<<count<<endl;
    count++;
}
int main(){
    for (int i=0;i<5;i++){
        func();
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main(){
    int m,x[50];
    cout<<sizeof(x)<<endl;
    cout<<sizeof(m)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(long);
    return 0;
}*/



/*#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	cout << "Size of char : " << sizeof(char) << " byte"
		<< endl;

	cout << "char minimum value: " << CHAR_MIN << endl;

	cout << "char maximum value: " << CHAR_MAX << endl;

	cout << "Size of int : " << sizeof(int) << " bytes"
		<< endl;

	cout << "Size of short int :"<<  SHRT_MAX
		<< " bytes" << endl;

	cout << "Size of long int : " << sizeof(long int)
		<< " bytes" << endl;

	cout << "Size of signed long int : "
		<< sizeof(signed long int) << " bytes" << endl;

	cout << "Size of unsigned long int : "
		<< sizeof(unsigned long int) << " bytes" << endl;

	cout << "Size of float : " << sizeof(float) << " bytes"
		<< endl;

	cout << "Size of double : " << sizeof(double)
		<< " bytes" << endl;

	cout << "Size of wchar_t : " << sizeof(wchar_t)
		<< " bytes" << endl;

	return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    char b='z';
    float c=9.16;
    double d=3.14159345687l;
    char str[]="salil";
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<str<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int x=10,y=20;
    int m=max(x,y);
    cout<<"m is "<<m;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[2]=arr[3]=10;
    arr[3/2]=20;
    arr[0]=arr[4]=0;
    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl<<arr[4];
    return 0;
}*/



/*#include<iostream>
using namespace std;
void func(){
    int x=10;
    int *ptr;
    ptr=&x;

    cout<<"vale of x: "<<x<<endl;
    cout<<"value of ptr: "<<ptr<<endl;
    cout<<"value of *ptr: "<<*ptr;
}
int main(){
    func();
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &ref=x;
    ref=20;
    cout<<x<<endl;
    x=30;
    cout<<ref;
    return 0;
}*/



// C++ program to demonstrate 
// Class 



/*#include<iostream>
using namespace std;
class geeks{
    public:
    string geeksforgeeks;
    void func(){
        cout<<"geeks for geeks says: "<<geeksforgeeks<<endl;
    }
};
int main(){
    geeks obj1;
    obj1.geeksforgeeks="geeks for geeks";
    obj1.func();
    return 0;
}*/



/*#include<iostream>
using namespace std;
class bgmi{
    public:
    string fullform;
    void func(){
        cout<<"bgmi says: "<<fullform<<endl;
    }
};
int main(){
    bgmi obj;
    obj.fullform = "battle ground mobile india";
    obj.func();
    return 0;
}*/



/*#include<iostream>
using namespace std;
class salil{
    public:
    string ques;
    void func(){
        cout<<"salil said: "<<ques<<endl;
    }
};
int main(){
    salil o;
    o.ques="How are you my friend?";
    o.func();
    return 0;
}*/



/*#include<iostream>
using namespace std;
struct point{
    int x,y;
};
int main(){
    struct point arr[10];
    arr[0].x=100;
    arr[9].y=200;
    cout<<arr[0].x<<endl<<arr[9].y<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
union hello{
    int x,y;
};
int main(){
    union hello t;
    t.x=10;
    cout<<t.x<<endl<<t.y<<endl;
    t.y=20;
    cout<<t.x<<endl<<t.y<<endl;
    return 0;
}*/



/*#include <iostream> 
using namespace std; 
enum week { Mon, Tue, Wed, Thur, Fri, Sat, Sun }; 

int main() 
{ 
	enum week day; 
	day = Mon; 
	cout << day; 

	return 0; 
}*/



/*#include<iostream>
using namespace std;
enum salil {a,b,c,d};
int main(){
    enum salil count;
    count =b;
    cout<<count;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    char c='c';

    a=a+c;
    float z=a+2.0;
    float y=c+3.0;

    cout<<a<<endl<<c<<endl<<z<<endl<<y<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x=10;
    ++x;
    cout<<x;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10,b=2;
    cout<<a+b<<endl<<a-b<<endl<<a*b<<endl<<a/b<<endl<<a%b<<endl;
    cout<<endl;
    cout<<(a==b)<<endl<<(a>b)<<endl<<(a<b)<<endl<<(a<=b)<<endl<<(a>=b)<<endl<<(a!=b);
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=0,b=0;
    cout<<(a&&b)<<endl;
    cout<<(a||b)<<endl;
    cout<<(!a);
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10,b=100;
    cout<<(a&b)<<endl;
    cout<<(a<<b)<<endl;
    cout<<(a>>b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(~b);
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    int result= (a>b)?a:b;
    cout<<result;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10,b=10;
    int sum=a+b;
    cerr<<sum;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    char arr[5];
    cin.getline(arr, 10);
    cout<<arr;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    char arr[5];
    cin.get(arr, 2);
    cout<<arr;
    return 0;
}*/



/*#include <iostream>
using namespace std;
int main()
{
	double a = 10.123;
	cout.precision(3);
	cout << a << endl;
	return 0;
}*/



/*#include <iostream>
using namespace std;
int salary;
void func1() {
    if (salary > 1000) {
        salary = salary + (0.1 * salary);
    }
}

void func2() {
    if (salary > 500) {
        salary = salary + (0.05 * salary);
    }
}

int main() {
    cout << "Enter salary: " << endl;
    cin >> salary;

    if (salary > 1000) {
        cout << "After bonus, salary is: " << endl;
        func1();
        cout << salary << endl;
    } else if (salary > 500) {
        cout << "After bonus, salary is: " << endl;
        func2();
        cout << salary << endl;
    } else {
        cout << "Salary does not meet the criteria for a bonus." << endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int i=10;
    if(i < 15) {
        cout<<"i is not greater\n";
    }else{
    cout<<"nothing";
    }
}*/



/*#include<iostream>
using namespace std;
int main(){
    int age,license;
    cout<<"enter the age"<<endl;
    cin>>age;
    switch(age){
        case 10:
        cout<<"age is 10, can't allow!";
        break;
        case 20:{
            cout<<"do you have license: 1 for yes:"<<endl;
            cin>>license;
            switch(license){
                case 1:
                cout<<"allowed";
                break;
                default:
                cout<<"not allowed";
                break;
            }
            break;
        }
        default:
            cout<<"wrong input";
            break;
    }
    return 0;
}*/



/*#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char choice;
    int x, y;

    while (1) {
        cout << "Enter the Operator (+,-,*,/)\nEnter x to "
                "exit\n";
        cin >> choice;

        if (choice == 'x') {
            exit(0);
        }
        cout << "Enter the two numbers: ";
        cin >> x >> y;

        switch (choice) {
        case '+':
            cout << x << " + " << y << " = " << x + y
                 << endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << x - y
                 << endl;
            break;
        case '*':
            cout << x << " * " << y << " = " << x * y
                 << endl;
            break;
        case '/':
            cout << x << " / " << y << " = " << x / y
                 << endl;
            break;
        default:
            printf("Invalid Operator Input\n");
        }
    }
    return 0;
}*/



/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    char choice;
    int x,y;
    while(1){
        cout<<"choose the operation you want to perform(+,-,*,/):\nor tap 'x' for exit! "<<endl;
        cin>>choice;
        if(choice == 'x'){
            exit(0);
        }
        cout<<"enter two numbers: "<<endl;
        cin>>x>>y;
        switch(choice){
            case '+':
            cout<<x<<"+"<<y<<"="<<x+y<<endl;
            break;
            case '-':
            cout<<x<<"-"<<y<<"="<<x-y<<endl;
            break;
            case '*':
            cout<<x<<"*"<<y<<"="<<x*y<<endl;
            break;
            case '/':
            cout<<x<<"/"<<y<<"="<<x/y<<endl;
            break;
            default:
            cout<<"invalid operator";
            break;
        }
    }
    return 0;
}*/



/*#include <iostream>
using namespace std;

class Day {
public:
int day;
    void set_data() {
        cout << "Enter the number of the day you want to display (1 for Monday, 7 for Sunday): ";
        cin >> day;
    }

    void display_day() {
        switch (day) {
        case 1:
            cout << "MONDAY";
            break;
        case 2:
            cout << "TUESDAY";
            break;
        case 3:
            cout << "WEDNESDAY";
            break;
        case 4:
            cout << "THURSDAY";
            break;
        case 5:
            cout << "FRIDAY";
            break;
        case 6:
            cout << "SATURDAY";
            break;
        case 7:
            cout << "SUNDAY";
            break;
        default:
            cout << "INVALID INPUT";
            break;
        }
        cout << endl; 
    }
};

int main() {
    Day d1;
    d1.set_data(); 
    d1.display_day(); 

    return 0;
}*/



/*#include<iostream>
using namespace std;
class Day{
    public:
    int day;
    void day_num(){
        cout<<"enter the day number(1-sun;7-sat): "<<endl;
        cin>>day;
    }
    void day_name(){
        switch(day){
            case 1:
            cout<<"Sunday";
            break;
            case 2:
            cout<<"Monday";
            break;
            case 3:
            cout<<"Tuesday";
            break;
            case 4:
            cout<<"Wednesday";
            break;
            case 5:
            cout<<"Thrusday";
            break;
            case 6:
            cout<<"Friday";
            break;
            case 7:
            cout<<"Saturday";
            break;
        }
    }
};
int main(){
    Day obj;
    obj.day_num();
    obj.day_name();
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int i,elements,product=1,numbers;
    cout<<"enter the number of elements: ";
    cin>>elements;

    for(i=1;i<=elements;i++){
        cout<<"enter the numbers"<<i<<": ";
        cin>>numbers;
        product*=numbers;
    }
    cout<<"multiplication: "<<product;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int i=0,n;
    cout<<"enter the number of times you want to print hello: "<<endl;
    cin>>n;
    while(i<=n){
        cout<<"hello"<<endl;
        i++;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Day{
    public:
    int month;
    void mon_num(){
        cout<<"enter the number of month: ";
        cin>>month;
    }
    void mon_name(){
        switch(month){
            case 1:
            cout<<"jan";
            break;
            case 2:
            cout<<"feb";
            break;
            case 3:
            cout<<"mar";
            break;
            case 4:
            cout<<"apr";
            break;
            case 5:
            cout<<"may";
            break;
            case 6:
            cout<<"june";
            break;
            case 7:
            cout<<"july";
            break;
            case 8:
            cout<<"aug";
            break;
            case 9:
            cout<<"sept";
            break;
            case 10:
            cout<<"oct";
            break;
            case 11:
            cout<<"nov";
            break;
            case 12:
            cout<<"dec";
            break;
            default:
            cout<<"false input";
            break;
        }
    }
};
int main(){
    Day obj;
    obj.mon_num();
    obj.mon_name();
    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
int arr[] {40, 50, 60, 70, 80, 90, 100}; 
for (auto element: arr){ 
cout << element << "  ";
}
return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int rows, coln;
    cin>>rows>>coln;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=coln;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"@ ";
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int add(int a, int b){
    return a+b;
}
int max(int a, int b){
    return(a>b)?a:b;
}
string reverseString(string str){
    int n=str.length();
    for(int i=0;i<n/2;++i){
        swap(str[i], str[n - i - 1]);
    }
    return str;
}
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);++i){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num1=10, num2=20;
    cout<<"Add "<<num1<<"+ "<<num2<<"= "<<add(num1,num2)<<endl;

    int num3=15,num4=25;
    cout<<"Max of "<<num3<<"and "<<num4<<"is "<<max(num3,num4)<<endl;

    string str="Salil Thakur!";
    cout<<"Reverse of \""<<str<<"\" is "<< reverseString(str)<<"\""<<endl;

    int num5=29;
    cout<<num5<<" is "<<(isPrime(num5)? "a prime number" : "not a prime number")<<endl;

    return 0;
}*/



/*#include<iostream>
using namespace std;
int max(int x, int y){
        if(x>y)
        return x;
        else
        return y;
}
int main(){
        int m;
        int a=10,b=20;
        m=max(a,b);
        cout<<"max is: "<<m;
        return 0;
}*/



/*#include<iostream>
void swap(int* x,int* y){
    int temp= *x;
    *x= *y;
    *y= temp;
}
int main(){
    int a=10,b=20;
    std::cout<<"Before swap: a= "<<a<<", b= "<<b<<std::endl;
    swap(&a,&b);
    std::cout<<"After swap: a= "<<a<<", b = "<<b<<std::endl;

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr;
    ptr=&x;
    cout<<x<<endl<<ptr<<endl<<*ptr<<endl;
    return 0;
}*/



/*#include<iostream>
int main(){
    char choice;
    int x,y;
    while(1){
        std::cout<<"choose x for the end of the code !"<<std::endl;
        std::cin>>choice;
        if(choice == 'x'){
            exit(0);
        }
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<a<<endl<<*ptr<<endl<<ptr<<endl<<ptr;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p=0;
    p=&x;

    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    (x%2==0)?cout<<"even"<<endl : cout<<"odd"<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='a' && x<='z' || x>='A' && x<='Z'){
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
            cout<<"even"<<endl;
        }else{
            cout<<"consunent";
        }
    }else{
        cout<<"false input";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num>=30 && num<=50){
        cout<<"Average";
    }else if(num>=51 && num<=60){
        cout<<"Good";
    }else if(num>=61 && num<=70){
        cout<<"Excellent";
    }else if(num>=71 && num<=100){
        cout<<"Perfect";
    }else{
        cout<<"Fail";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int num,a,x,sum=0;
    cin>>num;
    cin>>x;
    while(num!=0){
        a=num%10;
        num=num/10;
        if(a!=x){
            sum++;
        }
    }cout<<sum;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int num,x,sum=0;
    cin>>num;
    while(num!=0){
        x=num%10;
        num=num/10;
        if(x!=2 && x!=3 && x!=5 && x!=7){
            sum=sum+x;}
        }
    cout<<sum;
return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    x=x+y;
    y=x-y;
    x=x-y;
    
    cout<<x<<endl<<y<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int fact=x;
    while(x>1){
        x--;
        fact=fact*x;
    }
    cout<<fact;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x,num,rev=0,digit;
    cin>>x;
    num=x;
    while(num!=0){
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    if(x==rev){
        cout<<"palindrrone";
    }else{
        cout<<"not palendrone";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x,num,digit,rev=0;
    cin>>x;
    num=x;
    while(num!=0){
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    if(x==rev){
        cout<<"palendrome";
    }else{
        cout<<"not palendrome";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int num,first=0,second=1,next;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int num,first=0,second=1,next;
    cout<<"enter the numbers of bibonachi you want to print in the output: "<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<first<<" ";
        next=first +second;
        first=second;
        second=next;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int arr[5],i;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int add[3],sub[3],mul[3],division[3],A[3],B[3];
void func1(){
    for(int i=0;i<3;i++){
        add[i]=A[i]+B[i];
        cout<<add[i]<<" ";
    }
    cout<<endl;
}
void func2(){
    for(int i=0;i<3;i++){
        sub[i]=A[i]-B[i];
        cout<<sub[i]<<" ";
    }
    cout<<endl;
}
void func3(){
    for(int i=0;i<3;i++){
        mul[i]=A[i]*B[i];
        cout<<mul[i]<<" ";
    }
    cout<<endl;
}
void func4(){
    for(int i=0;i<3;i++){
        division[i]=A[i]/B[i];
        cout<<division[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"enter 3 integers for array A: "<<endl;
    for(int i=0;i<3;i++){
        cin>>A[i];
    }
    cout<<"enter 3 integers for array B: "<<endl;
    for(int i=0;i<3;i++){
        cin>>B[i];
    }
    cout<<"addition of both array: ";
    func1();
    cout<<"subtration of both arrays: ";
    func2();
    cout<<"multiplication of both arrays: ";
    func3();
    cout<<"division of both arrays: ";
    func4();

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x,fact;
    cin>>x;
    fact=x;
    while(x!=1){
        x--;
        fact=fact*x;
    }
    cout<<fact;
    return 0;
}*/



/*#include<iostream>
using namespace std;
struct person{
    string name;
    int age;
    float height;
};
void enter_person(const person &p){
    cout<<"name: "<<p.name<<endl;
    cout<<"age: "<<p.age<<endl;
    cout<<"height in meters: "<<p.height<<endl;
}
int main(){
    person person1,person2;
    cout<<"enter name: "<<endl;
    cin>>person1.name;

    cout<<"enter age: "<<endl;
    cin>>person1.age;

    cout<<"enter height: "<<endl;
    cin>>person1.height;

    cout<<"enter name: "<<endl;
    cin>>person2.name;

    cout<<"enter age: "<<endl;
    cin>>person2.age;

    cout<<"enter height: "<<endl;
    cin>>person2.height;

    enter_person(person1);
    enter_person(person2);
    return 0;
}*/



/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    v1.push_back(6);
    cout<<v1.capacity()<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
    string s;
    void read(void){
        cout<<"enter a binary number:"<<endl;
        cin>>s;
    }
    void chk_bin(void){
        for(int i=0;i< s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"Incorrect binary format"<<endl;
                exit(0);
            }
        }
    }
    void ones_comp(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }else if(s.at(i)=='1'){
                s.at(i)='0';
            }
        }
    }
    void display(void){
        for(int i=0;i<s.length();i++){
        cout<<s.at(i);
        }
    }
int main(){
    read();
    chk_bin();
    cout<<"your binary number in the form of ones compliment is: ";
    ones_comp();
    display();

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/



/*#include<iostream>
using namespace std;
class binary{
    public:
    string s;
    void read(void);
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};
void binary :: read(){
        cout<<"enter the binary number: "<<endl;
        cin>>s;
}
    void binary :: check_binary(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='1' && s.at(i)!='0'){
                cout<<"false input, it is not a binary number!"<<endl;
                exit(0);
            }
            }
        }
    void binary :: ones_compliment(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='1'){
                s.at(i)='0';
            }else if(s.at(i)=='0'){
                s.at(i)='1';
            }
        }
    }
    void binary :: display(void){
        for(int i=0;i<s.length();i++){
            cout<<s.at(i);
        }
    }
int main(){
    binary obj;
    obj.read();
    obj.check_binary();
    cout<<"number in ones compliment is : ";
    obj.ones_compliment();
    obj.display();
    return 0;
}*/



/*#include<iostream>
using namespace std;

class binary{
    public:
    string s;
    void read();
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(){
    cout<<"enter the binary you want to input: "<<endl;
    cin>>s;
}
void binary::check_binary(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='1' && s.at(i)!='0'){
            cout<<"false input the entered code is not an binary number!";
            exit(0);
        }
        }
}
void binary::ones_compliment(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }else if(s.at(i)=='0'){
            s.at(i)='1';
        }
    }
}
void binary::display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main(){
    binary obj;
    obj.read();
    obj.check_binary();
    cout<<"ones compliment for your entered binary number is: "<<endl;
    obj.ones_compliment();
    obj.display();
return 0;
}*/



/*#include<iostream>
using namespace std;
class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
    void intial_counter(void) { 
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};
void shop :: setprice(void){
    cout<<"enter id of your item number: "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"enter the price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    shop obj;
    obj.intial_counter();
    obj.setprice();
    obj.setprice();
    obj.setprice();
    obj.displayprice();
    return 0;
}*/



/*#include<iostream>
using namespace std;
class shop{
    int itemprice[100];
    int itemID[100];
    int counter;
    public:
    void initial_counter(void){
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void){
    cout<<"enter the ID of your item "<<counter+1<<": "<<endl;
    cin>>itemID[counter];
    cout<<"enter the price of your item: "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop ::displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with ID "<<itemID[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
    shop object;
    object.initial_counter();
    int n;
    cout<<"enter the number of items that you have bought: ";
    cin>>n;
    for(int i=0;i<n;i++){
        object.setprice();
    }
    object.displayprice();
    return 0;
}*/



/*#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enter the ID: "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the id of this employee is "<<id<<" and this is employye number "<< count<<endl;
    }
    void getcount(void){
        cout<<"the value of count is "<<count<<endl;
    }
};

int employee::count;
int main(){
    employee salil, aryan;
    employee obj;
    salil.setdata();
    salil.getdata();
    obj.getcount();
    
    aryan.setdata();
    aryan.getdata();
    obj.getcount();

    return 0;
}*/



/*#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long reversed = 0;
        int y = x;

        while (y > 0) {
            reversed = reversed * 10 + y % 10;
            y /= 10;
        }

        return reversed == x;
    }
};

int main() {
    Solution solution;
    int testCases[] = {121, -121, 10, 12321, 0, 1, 123321};

    for (int testCase : testCases) {
        std::cout << "Is " << testCase << " a palindrome? "
                  << (solution.isPalindrome(testCase) ? "Yes" : "No") << std::endl;
    }

    return 0;
}*/



/*#include<iostream>
using namespace std;

class complex{
    int a,b;
    friend complex sumcomplex(complex o1, complex o2);
    public:
    void setnumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printnumber()
    {
        cout<<"your numer is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum;
    c1.setnumber(1, 4);
    c2.setnumber(5, 8);

    c1.printnumber();
    c2.printnumber();

    sum=sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}*/



/*#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumrealcomplex(complex, complex);
};
class complex{
    int a, b;
    friend class calculator;
    // friend int calculator:: sumrealcomplex(complex,complex);
    public:
    void setnumbers(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printnumbers(){
        cout<<"your number is "<<a<<" + "<<b<<endl;
    }
};

int calculator :: sumrealcomplex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int main(){
    complex o1, o2;

    o1.setnumbers(1, 4);
    o2.setnumbers(5, 7);

    calculator calc;

    int res = calc.sumrealcomplex(o1, o2);
    cout<<"the sum of the real part of o1 and o2 is: "<<res<<endl;
    return 0;
}*/



/*#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
    void setvalue(int value){
        data = value;
    }
    friend void add(x,y);
};
class y{
    int num;
    public:
    void setvalue(int value){
        num = value;
    }
    friend void add(x,y);
};

void add(x o1, y o2){
    cout<<"sum: "<<o1.data + o2.num;
}

int main(){
    x a1;
    a1.setvalue(3);

    y b1;
    b1.setvalue(15);

    add(a1, b1);
    return 0;
}*/



/*#include<iostream>
using namespace std;
class B;
class A{
    private:
    int data;
    public:
    int setvalue(int value){
        data=value;
    }
    friend void sumofclasses(A,B);
};
class B{
    private:
    int num;
    public:
    int setvalue(int value){
        num=value;
    }
    friend void sumofclasses(A,B);
};

void sumofclasses(A object1, B object2){
    cout<<"sum: "<<object1.data+object2.num;
}

int main(){
    A a;
    B b;
    a.setvalue(20);
    b.setvalue(10);

    sumofclasses(a,b);
    return 0;
}*/



/*#include<iostream>
using namespace std;
class second;
class first{
    private:
    int number;
    public:
    void function1(void){
        cin>>number;
    }
    friend int addition(first,second);
};

class second{
    private:
    int digit;
    public:
    void function2(void){
        cin>>digit;
    }
    friend int addition(first,second);
};

int addition(first obj1, second obj2){
    cout<<"addition of numbers in both classes are: "<<obj1.number+obj2.digit<<endl;
}

int main(){
    first object1;
    second object2;

    object1.function1();
    object2.function2();

    addition(object1,object2);
    return 0;
}*/



//default constructor case
/*#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int age;
    float fees;
    public:
    student(){
        cout<<"enter name of the student:"<<endl;
        cin.ignore();
        getline(cin, name);
        cout<<"enter age of the student:"<<endl;
        cin>>age;
        cout<<"enter fees in dollers: "<<endl;
        cin>>fees;
    }
    void display(void){
        cout<<"name: "<<name<<endl<<"age: "<<age<<endl<<"fees: "<<fees<<endl;
    }
};
int main(){
    student object;
    // object.display();
    return 0;
}*/


//parameterized constructor
/*#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x, int y){
        a=x;
        b=y;
    }

    void printfunc(){
        cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex object(5, 6);
    object.printfunc();
    return 0;
}*/



/*#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string address;

    public:
    Person(){
        name="UNKNOWN";
        age=0;
        address="NOT PROVIDE";
    }

    Person(string n, int a){
        name=n;
        age=a;
        address="NOT PROVIDE";
    }

    Person(string n, int a, string addr){
        name=n;
        age=a;
        address=addr;
    }

    void display() const{
        cout<<"name: "<<name<<", age: "<<age<<", address: "<<address<<endl;
    }

    void updateAddress(string newAddress){
        address = newAddress;
    }
};

int main(){
    Person person1;
    Person person2("salil", 19);
    Person person3("thakur",19,"123 main street");

    person1.display();
    person2.display();
    person3.display();

    person2.updateAddress("456 new street");
    person2.display();

    return 0;
}*/



/*#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string address;

    public:
    Person();
    Person(string n, int a);
    Person(string n, int a, string addr);

    void display();

    void updateaddress(string newaddress);
};

Person::Person(){
    name="UNKNOWN";
    age=0;
    address="NOT PROVIDED";
}

Person::Person(string n, int a){
    name=n;
    age=a;
    address="NOT PROVIDED";
}

Person::Person(string n, int a, string addr){
    name=n;
    age=a;
    address=addr;
}

void Person::display(){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"address: "<<address<<endl;
}

void Person::updateaddress(string newaddress){
    address=newaddress;
}

int main(){
    Person person1;
    Person person2("salil thakur", 19);
    Person person3("salil thakur", 19, "jk streets-143");

    person1.display();
    person2.display();
    person3.display();

    person2.updateaddress("newday street-144");
    person2.display();

    return 0;
}*/



/*#include<iostream>
#include<string>
using namespace std;
class clashofclans{
    int townhalllevel;
    int builderhalllevel;
    int xplevel;
    public:
    void townhall(){
        cout<<"enter the level of your town hall: "<<endl;
        cin>>townhalllevel;
    }
    void builderhall(){
        cout<<" enter the level of your builder hall: "<<endl;
        cin>>builderhalllevel;
    }
    void xp(){
        cout<<"enter the level of your xp: "<<endl;
        cin>>xplevel;
    }
    void checklevel(){
        if(townhalllevel<=5 && builderhalllevel<=4){
            cout<<"you are fucking nigga"<<endl;
        }else if(xplevel<75){
            cout<<"you are fucking nigga"<<endl;
        }
    }
};
int main(){
    clashofclans object;
    object.townhall();
    object.builderhall();
    object.xp();
    object.checklevel();

    return 0;
}*/



/*#include<iostream>
using namespace std;
class first{
    private:
    double principal_amount;
    double rate_of_interest;
    double time;
    double SI;
    double tAmount;
    public:
    void input(){
        cout<<"enter principal amount: "<<endl;
        cin>>principal_amount;

        cout<<"enter rate of interest: "<<endl;
        cin>>rate_of_interest;

        cout<<"enter time taken: "<<endl;
        cin>>time;
    }
    void simpleinterest(){
        cout<<"simple interest is: "<<endl;
        SI=(principal_amount*rate_of_interest*time)/100;
        cout<<SI<<endl;
    }
    void amount(){
    cout<<"total amount is: "<<endl;
    tAmount=principal_amount+SI;
    cout<<tAmount; 
}
};

int main(){
    first object;
    object.input();
    object.simpleinterest();
    object.amount();

    return 0;
}*/



/*#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;
    return 0;
}*/



 /*#include<iostream>
 using namespace std;
class number{
    int a;
    public:
    number(){
    }
    number(int num){
        a=num;
    }
    number(number &object){
        cout<<"copy constructor said that! "<<endl;
        a=object.a;
    }
    void display(){
        cout<<"the number for the object is: "<<a<<endl;
    }
};
int main(){
    number x(456789),y,z(345678);
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();

    return 0;
}*/



/*#include <iostream>
#include <string.h>
using namespace std;
class student {
	int rno;
	char name[50];
	double fee;

public:
	student(int, char[], double);
	student(student& t) // copy constructor
	{
		rno = t.rno;
		strcpy(name, t.name);
		fee = t.fee;
	}
	void display();
};

student::student(int no, char n[], double f)
{
	rno = no;
	strcpy(name, n);
	fee = f;
}

void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}

int main()
{
	student s(1001, "Manjeet", 10000);
	s.display();

	student manjeet(s); // copy constructor called
	manjeet.display();

	return 0;
}*/



 /*#include<iostream>
 using namespace std;
class number{
    int a;
    public:
    number(){}
    number(int num){
        a=num;
    }
    void display(){
        cout<<"the number for the object is: "<<a<<endl;
    }
};
int main(){
    number x,y,z(3);
    x.display();
    y.display();
    z.display();

    return 0;
}*/



/*#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string address;

    public:
    Person();
    Person(string n, int a);
    Person(string n, int a, string addr);

    void display();

    void updateaddress(string newaddress);
};

Person::Person(){
    name="UNKNOWN";
    age=0;
    address="NOT PROVIDED";
}

Person::Person(string n, int a){
    name=n;
    age=a;
    address="NOT PROVIDED";
}

Person::Person(string n, int a, string addr){
    name=n;
    age=a;
    address=addr;
}

void Person::display(){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"address: "<<address<<endl;
}

void Person::updateaddress(string newaddress){
    address=newaddress;
}

int main(){
    Person person1;
    Person person2("salil thakur", 19);
    Person person3("salil thakur", 19, "jk streets-143");

    person1.display();
    person2.display();
    person3.display();

    person2.updateaddress("newday street-144");
    person2.display();

    return 0;
}*/



/*#include<iostream>
using namespace std;
//base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int intId){
        id=intId;
        salary = 34;
    }
    Employee(){}
};
//derived class
//syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members/methods/etc...
}
note:
1. default visibility mode is private.
2. Public visibility mode: public members of the base class becomes public members of the derived class.
3. Private visibility mode: public members of the base class becomes Private members of the derived class.
4. Private members never inherited.
*/

/*class programmer: public Employee{
    public:
    programmer(int impid){
        id=impid;
    }
    int languagecode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    skillF.getData();
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Sum{
    public:
    int sum(int a,int b){
        return a+b;
    }
};
class ExtendedSum: public Sum{
    public:
    void displaySum(int a,int b){
        cout<<"sum of "<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
};
int main(){
    ExtendedSum em;
    em.displaySum(3, 7);
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Sum{
    public:
    int sum(int a,int b){
        return a+b;
    }
};
class ExtentedSum : public Sum{
    public:
    int sum(int a, int b,int c){
        return a+b+c;
    }
    void displaySum(int a, int b, int c){
        cout<<"sum of "<<a<<" + "<<b<<" = "<<a+b<<endl;
        cout<<"sum of "<<a<<" + "<<b<<" + "<<c<<" = "<<a+b+c<<endl;
    }
};
int main(){
    ExtentedSum em;
    em.displaySum(10,20,30);

    return 0;
}*/



/*#include<iostream>
using namespace std;
class Sum{
    public:
    int sum(int a[],int size){
        int total=0;
        for(int i=0;i<size;i++){
            total=total+a[i];
        }
        return total;
    }
};

class ExtentedSum: public Sum{
    public:
    void displaySum(int a[], int size){
        cout<<"Sum of array elements is: "<<sum(a, size)<<endl;
    }
};
int main(){
    ExtentedSum em;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    em.displaySum(arr,size);

    return 0;
}*/



//this is simple example for inheritance with constructors
/*#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"this is base class constructor."<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"this is derived class constructor."<<endl;
    }
};

int main(){
    Derived d;
    return 0;
}*/



/*#include<iostream>
using namespace std;
class base{
    public:
    base(int x){
        cout<<"base class constructor is called with value: "<<x<<endl;
    }
};

class Derived : public base{
    public:
    Derived(int x, int y):base(x){
        cout<<"derived class constructor is called with value: "<<y<<endl;
    }
};

int main(){
    Derived d(10,20);
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"base default constructor called."<<endl;
    }
    Base(int x){
        cout<<"base constructor is called with value of x: "<<x<<endl;
    }
};
class Derived : public Base{
    public:
    using Base::Base;
    Derived(){
        cout<<"derived default constructor is called."<<endl;
    }
};
int main(){
    Derived d1,d2(10);
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"default constructor of base class"<<endl;
    }
    Base(int x){
        cout<<"constructor of base class with value of x: "<<x<<endl;
    }
    Base(int x, int y){
        cout<<"constructor of base class with sum of x and y is: "<<x+y<<endl;
    }
};
class Derived:public Base{
    using Base::Base;
};
int main(){
    Derived d;
    Derived d2(5),d3(5,10);
    return 0;
}*/



//multiple inheritance example:
/*#include<iostream>
using namespace std;
class Base1{
    public:
    Base1(){
        cout<<"base1 constructor"<<endl;
    }
    void display1(){
        cout<<"base1 function"<<endl;
    }
};

class Base2{
    public:
    Base2(){
        cout<<"base2 constructor"<<endl;
    }
    void display2(){
        cout<<"base2 function"<<endl;
    }
};

class Derived:public Base1, public Base2{
    public:
    Derived(){
        cout<<"derived constructor"<<endl;
    }
    void display3(){
        cout<<"Derived function"<<endl;
    }
};
int main(){
    Derived d;
    d.display1();
    d.display2();
    d.display3();

    return 0;
}*/



/*#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"default base constructor is called."<<endl;
    }
    void display(void){
        cout<<"function of default constructor is called."<<endl;
    }
};

class Derived1 : virtual public Base{
    public:
    Derived1(){
        cout<<"Derived1 constructor is called"<<endl;
    }
};

class Derived2 :virtual public Base{
    public:
    Derived2(){
        cout<<"Derived2 constructor is called"<<endl;
    }
};

class MostDerived : public Derived1, public Derived2{
    public:
    MostDerived(){
        cout<<"mostDerived constructor is called."<<endl;
    }
};

int main(){
    MostDerived ms;
    ms.display();

    return 0;
}*/



/*#include <iostream>
using namespace std;

class Base {
    int data1;
public:
    int data2;
    void setData(); 
    int getData1();
    int getData2();
};

void Base::setData() {
    data1 = 10;
    data2 = 20;
}

int Base::getData1() {
    return data1;
}

int Base::getData2() {
    return data2;
}

class Derived : public Base {
    int data3;
public:
    void process();
    void display();
};

void Derived::process() {
    data3 = data2 * getData1();
}

void Derived::display() {
    cout << "value of data 1 is " << getData1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}

int main() {
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    private:
    int b;
};
/*
for a protected number
                    public derivation       private derivation      protected derivation
1. private mem      not inherited           not inherited           not inherited
2. protected mem    protected               Privare                 protected
3. public mem       public                  Private                 protected
*/
/*class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<d.a; it will not work cause (a) is protected in both base and derived class.
    return 0;
}*/



/*#include <iostream>
using namespace std;

class Student {
protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r) {
    roll_number = r;
}

void Student::get_roll_number() {
    cout << "The roll number is: " << roll_number << endl;
}

class Exam : public Student {
protected:
    float maths;
    float physics;
public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2) {
    maths = m1;
    physics = m2;
}

void Exam::get_marks() {
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam {
    float percentage;
public:
    void display_result() {
        get_roll_number();
        get_marks();
        cout << "Your percentage is: " << (maths + physics) / 2 << endl;
    }
};

int main() {
    Result salil;
    salil.set_roll_number(877);
    salil.set_marks(69.0, 96.0);  
    salil.display_result();
    return 0;
}*/



/*
if we are inheriting B from A and C from B: [A-->B-->C]
1. A is the base class for B and B is the base class for C.
2. A-->B-->C is called inheritance path.
*/



/*#include<iostream>
using namespace std;
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};

class Derived : public Base1, public Base2{
    public:
    void show(){
        cout<<"The value of base1 is: "<<base1int<<endl;
        cout<<"The value of base2 is: "<<base2int<<endl;
        cout<<"The sum of these values is :  "<<base1int+base2int<<endl;
    }
};

int main(){
    Derived salil;
    salil.set_base1int(49);
    salil.set_base2int(52);
    salil.show();

    return 0;
}*/



/*#include<iostream>
using namespace std;
class Acd{
    protected:
    int roll_number;
    public:
    void set_roll_number(int r){
        roll_number = r;
    }
    void get_roll_number(void){
        cout<<"roll number: "<<roll_number<<endl;
    }
};

class sports{
    protected:
    int scores;
    public:
    void set_score(int s){
        scores=s;
    }
    void get_score(){
        cout<<"sports score: "<<scores<<endl;
    }
};

class Student : public Acd, public sports{
    public:
    void display(){
        get_roll_number();
        get_score();
    }
};

int main(){
    Student kid;
    kid.set_roll_number(877);
    kid.set_score(99);
    kid.display();

    return 0;
}*/



/*#include<iostream>
using namespace std;
class Acd{
    protected:
    int roll_number;
    public:
    Acd(int roll) : roll_number(roll){}
    void display_roll_number(){
        cout<<"Roll number: "<<roll_number<<endl;
    }
};

class Sports {
    protected:
    int score;
    public:
    Sports(int scr) : score(scr){}
    void display_score(){
        cout<<"Sports score: "<<score<<endl;
    }
};

class Personal {
    protected:
    string name;
    int age;
    public:
    Personal(string n, int a) : name(n), age(a){}

    void display_personal_info(){
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
};

class Student : public Acd, public Sports, public Personal{
    public:
    Student(int roll, int scr, string n, int a): Acd(roll), Sports(scr), Personal(n,a){}
    
    void Display_info(){
        display_personal_info();
        display_roll_number();
        display_score();

    }
};

int main(){
    Student stu(123,95,"salil",19);
    stu.Display_info();

    return 0;
}*/



/*#include<iostream>
using namespace std;
class sum{
    int a,b;
    public:
    int display(){
        cin>>a>>b;
        cout<<a+b;
    }
};
int main(){
    sum s;
    s.display();
    return 0;
}*/



/*create 2 classes:
1. simple calculator - takes input of 2 number using a utility function and performs +,-,*,/ and display using another function
2. scientific calculator - takes input of 2 number using a utility function and performs any 4 scientific operations of your choice and display the result using another function. 
create another class hybrid calculator and inherit it using these classes.
q1. what type of inheritance are you using?
q2. which mode of inheritance are you using?
*/

// ANS).

/*#include<iostream>
using namespace std;
class simple_calculator{
    protected:
    int num1,num2;
    char op;
    public:
    void get_numbers();
    void operation();
};

void simple_calculator :: get_numbers(){
    cout<<"enter first number: "<<endl;
    cin>>num1;
    cout<<"enter second number: "<<endl;
    cin>>num2;
    cout<<"enter operation you want to perform(+,-,*,/): "<<endl;
    cin>>op;
}

void simple_calculator :: operation(){
    if(op=='+'){
        cout<<"sum: "<<num1+num2<<endl;
    }else if(op=='-'){
        cout<<"sub: "<<num1-num2<<endl;
    }else if(op=='*'){
        cout<<"mul: "<<num1*num2<<endl;
    }else if(op=='/'){
        cout<<"div: "<<num1/num2<<endl;
    }else{
        cout<<"false input";
    }
}

class Scientific_calculator : public simple_calculator{
    int sci_op;
    public:
    void set_operation();
    void sci_operation();
};

void Scientific_calculator :: set_operation(){
    cout<<"enter 2 for square and 3 for cube of both numbers: "<<endl;
    cin>>sci_op;
}

void Scientific_calculator :: sci_operation(){
    if(sci_op == 2){
        cout<<"square for number 1 is: "<<num1*num1<<endl;
        cout<<"square for number 2 is: "<<num2*num2<<endl;
    }else if(sci_op == 3){
        cout<<"cube for number 1 is: "<<num1*num1*num1<<endl;
        cout<<"cube for number 2 is: "<<num2*num2*num2<<endl;
    }else{
        cout<<"false input";
    }
}

class Hybrid_calculator : public Scientific_calculator{
    public:
    void hybrid();
};

void Hybrid_calculator :: hybrid(){
    get_numbers();
    operation();
    set_operation();
    sci_operation();
}
int main(){
    Hybrid_calculator hc;
    hc.hybrid();

    return 0;
}*/



//write a cpp code to find the factorial of an input number by using recursion(using classes).
//ans:

/*#include<iostream>
using namespace std;
class factorial{
    int n;
    public:
    int fact(int n){
        if(n<=1){
            return 1;
        }else{
            return n*fact(n-1);
        }
    }
};
int main(){
    factorial f;
    int number;
    cout<<"enter the number: "<<endl;
    cin>>number;

    int result=f.fact(number);
    cout<<"factorial of "<<number<<" is: "<<result<<endl;
    return 0;
}*/



/*#include<iostream>
#include<climits>
using namespace std;

class sol{
    public:
    int rev(int x){
        long result=0;

        while (x!=0){
            result=result*10+x%10;
            x=x/10;
        }  
        return (result<INT_MIN || result>INT_MAX) ?0:result;
    }
};

int main() {
    sol s;
    int number;
    
    cout<<"enter a number: "<<endl;
    cin>>number;

    int rev_num = s.rev(number);

    if (rev_num != 0){
        cout<<"reversed number: "<<rev_num<<endl;
    }else{
        cout<<"reverse number is out of range and retured 0."<<endl;
    }
    return 0;
}*/



/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>myvector;
    myvector.push_back(4999); //this line enters first element in empty vector.
    cout<<"first element: "<<myvector[0]<<endl;
    myvector.push_back(99); //this line enters second element in vector that contains one element.
    cout<<"element at second place is: "<<myvector.at(1);
    
    return 0;
}*/



//swap the alternating indices of an array
/*#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};

    swapAlternate(even, 8);
    printArray(even, 8);

    cout<<endl;

    swapAlternate(odd, 7);
    printArray(odd, 7);

    return 0;
}*/



/*#include<iostream>
using namespace std;
inline int product (int x){
    return (x*x)+5;
}
int main(){
    int x;
    cout<<"enter the value of x: "<<endl;
    cin>>x;

    cout<<"ans: "<<product(x)<<endl;  
    return 0;
}*/



/*#include<bits/stdc++.h>
using namespace std;
void func(string email="example@gmail.com", string subject="no subject", string body="no-body"){
    cout<<"send mail to : "<<email<<endl;
    cout<<"sub: "<<subject<<endl;
    cout<<"body: "<<endl;
}
int main(){
    string email="example@gmail.com";
    string subject="no subject";
    func();
    func("salil@gmail.com");
    func("salilthakur@gmail.com","oops","no");
    func(email,subject,"custom body");

    return 0;
}*/



/*#include<iostream>
using namespace std;
class avg{
    int a,b,c;
    public:
    void get_num(){
        cout<<"enter numbers: "<<endl;
        cin>>a>>b>>c;
    }
    void avg_num(){
        cout<<"avg is: "<<(a+b+c)/3<<endl;
    }
};
int main(){
    avg a;
    a.get_num();
    a.avg_num();

    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    bool comp(pair<int, int> p1, pair<int,int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second>p2.second) return false;
        if(p1.first>p2.first) return true;
        return false;
    }
}*/


/*#include<iostream>
using namespace std;
class Counter {
public:
    static int count; // Static variable to count function calls

    void increment() {
        count++;
    }

    static void printCount() {
        cout << "Total function calls: " << count << endl;
    }
};

int Counter::count = 0; // Initialize static variable
int main() {
    Counter obj1, obj2;

    obj1.increment();
    obj1.increment();
    obj2.increment();

    Counter::printCount(); // Correctly prints 3
    return 0;
}*/


/*#include <iostream>
using namespace std;

class xyz {
private:
    int x, y=0;
    static int z;
public:
    void getdata(int a, int b) {
        x = a;
        y = y+a;
        z = z + a;
    }
    static void display(void) {
        cout << "The value of z is " << z << endl;
    }
    void display1(void){
        cout<<"The value of y is"<<y<<endl;
    }
};

int xyz::z = 0;

int main() {
    xyz aa, bb, cc, dd;
    
    aa.getdata(4, 5);
    bb.getdata(7, 8);
    cc.getdata(1, 2);
    dd.getdata(2, 3);
  
    xyz::display();  // Display after setting data for all objects
    aa.display1();
    bb.display1();
    
    bb.getdata(8, 9);  // Setting data for bb again
    xyz::display();    // Display the static variable z again

    return 0;
}*/



/*#include <iostream>
using namespace std;
class Rectangle{
    float width;
    float height;
public:
    Rectangle(float w, float h) : width(w), height(h) {}
    friend class Inspector;
};
class Inspector{
public:
    void compareArea(const Rectangle& r1, const Rectangle& r2) {
        float area1 = r1.width * r1.height;
        float area2 = r2.width * r2.height;
        if (area1 > area2) {
            cout << "The first rectangle is large" << endl;
        } else if (area1<area2) {
            cout << "The second rectangle is large" << endl;
        } else {
            cout << "Both rectangles have the same area." << endl;
        }
    }
};
int main() {
    Rectangle r1(10.6, 5);
    Rectangle r2(7, 8.3);
    Inspector inspector;
    inspector.compareArea(r1, r2);
    return 0;
}*/



/*#include <iostream>
using namespace std;
class Counter {
private:
    static int count;  
public:
    static void incrementCount() {
        count++;
    }
    static int getCount() {
        return count;
    }
};
int Counter::count = 0;
int main() {
    cout<<Counter::getCount()<<endl;
    Counter::incrementCount();
    cout<<Counter::getCount() << endl;
    Counter::incrementCount();
    Counter::incrementCount();
    cout<<Counter::getCount() << endl;

    return 0;
}*/


// 1.
/*#include<iostream>
using namespace std;
class DataManager{
    static int datavalue;
    public:
    static void setData(int value){
        datavalue=value;
    }
    static int getData(){
        return datavalue;
    }
};
int DataManager :: datavalue=0;

int main(){
    DataManager :: setData(49);
    cout<<DataManager::getData()<<endl;
    return 0;
}*/


// 2.
/*#include <iostream>
using namespace std;
class StringUtils {
public:
    static string rev_String(string& str) {
        string reversedStr = str;
        int n = reversedStr.length();
        for (int i = 0; i < n / 2; ++i) {
            swap(reversedStr[i], reversedStr[n - i - 1]);
        }return reversedStr;
    }
};
int main() {
    string original = "Salil Thakur";
    string reversed = StringUtils::rev_String(original);
    cout << "Original string: " << original << endl;
    cout << "Reversed string: " << reversed << endl;

    return 0;
}*/



/*#include<iostream>
using namespace std;
class String{
    public:
    static string reverse_string(string& str){
        string reversed_string = str;
        int n = reversed_string.length();
        for(int i=0;i<n/2;i++){
            swap(reversed_string[i], reversed_string[n-i-1]);
        }
        return reversed_string;
    }
};

int main(){
    string before_rev_string = "madaam";
    string after_rev_string = String :: reverse_string(before_rev_string);
    
    if(before_rev_string == after_rev_string)cout<<"palindrome";
    else cout<<"not palindrome";

    return 0;
}*/



/*#include<iostream>
using namespace std;
class demo{
    int n;
    public:
    demo(){
        n=100;
        cout<<n<<endl;
    }
    ~demo(){
        cout<<"destroyed object: ";
        cout<<n<<endl;
    }
};
int main(){
    demo o1,o2,o3;
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Book{
    string title;
    string author;
    int publicationYear;
    public:
    Book(string t,string a,int year): title(t), author(a), publicationYear(year){
        cout<<"Book added: "<<title<<" by "<<author<<" in year "<<publicationYear<<endl;
    }
    ~Book(){
        cout<<"Book removed: "<<title<<endl;
    }
};
int main(){
    Book obj1("eng maths", "aryan", 2005);
    Book obj2("hindi", "jk.sharma", 1998);
    Book obj3("sci", "raman", 2012);
    return 0;
}*/



/*#include<iostream>
using namespace std;
class Movie{
    string name, director; int year;
    public:
    Movie(string n,string d, int y): name(n), director(d), year(y){
        cout<<"the Movie "<<name<<" directed by "<<director<<" is released in year "<<year<<endl;
    }
    ~Movie(){
        cout<<"Movie banned this year: "<<name<<endl;
    }
};
int main(){
    Movie obj1("movie1", "abc", 2000);
    Movie obj2("movie2", "xyz", 2010);
    Movie obj3("movie3", "pqr", 2020);

    return 0;
}*/



/*#include<iostream>
#include<string>
using namespace std;
class Movie{
    string name, director; int year; string* actors; int actorCount;
    public:
    Movie(string n,string d,int y,string* a,int count):name(n), director(d),year(y),actorCount(count){
        actors  =new string[actorCount];
        for(int i=0;i<actorCount;i++){
            actors[i]=a[i];
        }
        cout<<"The movie "<<name<<" is directed by "<<director<<" in the year "<<year<<endl;
    }
    void Display(){
        cout<<"Movie details: "<<endl;
        cout<<"Movie name: "<<name<<endl;
        cout<<"Movie director: "<<director<<endl;
        cout<<"Actors name: ";
        for(int i=0;i<actorCount;i++){
            cout<<actors[i];
            if(i<actorCount-1)cout<<", ";
        }
        cout<<endl;
    }
    ~Movie(){
        cout<<"Movie banned this year: "<<name<<endl;
        delete[]actors;
    }
};

int main(){
    string actors1[]={"actor1","actor2","actor3"};
    string actors2[]={"actor4","actor5","actor6"};
    string actors3[]={"actor7","actor8","actor9"};

    Movie obj1("movie1","abc",2000,actors1,3);obj1.Display();
    Movie obj2("movie1","abc",2000,actors2,3);obj2.Display();
    Movie obj3("movie1","abc",2000,actors3,3);obj3.Display();

    return 0;
}*/



/*#include <iostream>
using namespace std;
class Vector3D {
    double x, y, z;
public:
    Vector3D(double xV1, double yV2, double zV3) : x(xV1), y(yV2), z(zV3){}
    Vector3D(Vector3D &v) : x(v.x), y(v.y), z(v.z){}
    void print(){
        cout <<x<<", "<<y<<", "<<z<< endl;
    }
};
int main() {
    Vector3D vec1(1.0, 2.0, 3.0);
    vec1.print();
    Vector3D vec2(vec1);
    vec2.print();

    return 0;
}*/



/*#include<iostream>
using namespace std;
class Student{
    private:
    string name;int age;float grade;
    public:
    Student(string n,int a,float g): name(n), age(a), grade(g){}
    Student(const Student &s): name(s.name), age(s.age), grade(s.grade){}

    void display(void){
        cout<<name<<endl<<age<<endl<<grade<<endl;
        }
};
int main(){
    Student obj("salil", 19, 8.5);
    obj.display();
    return 0;
    
}*/



/*#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;int age;float grade;
public:
    Student(string n, int a, float g) : name(n), age(a), grade(g) {}
    Student(Student &s) : name(s.name), age(s.age), grade(s.grade) {}
    
    void display()  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main(){
    Student orig("Salil Thakur", 19, 9.99);
    Student copy = orig;

    cout << "Original: " << endl;
    orig.display();

    cout << "Copied:" << endl;
    copy.display();

    return 0;
}*/



// // Your task is to create a class that contains an integer pointer data member. Create a single object named “one” in the
// // main and assign values to the data member of the object. Then create another object named “two” that is a copy of the 
// // “one”. Create a shallow copy constructor and then demonstrate that both objects share a common memory i.e.
// // modifying one object in fact modifies the other. Create a display function that will show the values of the object.
/*#include <iostream>
using namespace std;
class Shallow{
    private:
        int *p;
    public:
        Shallow(int value){
            p = new int; 
            *p = value;
        }
        Shallow(Shallow &o){
            p = o.p; 
        }
        void display(){
            cout<<*p;
        }
        void change(int p1){
            *p = p1;
        }
};

int main(){
    Shallow one(25);
    Shallow two = one; 
    cout<<"Before Modifying"<<endl;
    cout<<"The value of integer pointer variable for object 'one' is : ";
    one.display();
    cout<<endl;
    cout<<"The value of integer pointer variable for object 'two' is : ";
    two.display();
    cout<<endl;

    one.change(50);
    cout<<"After Modifying"<<endl;
    cout<<"The value of integer pointer variable for object 'one' is : ";
    one.display();
    cout<<endl;
    cout<<"The value of integer pointer variable for object 'two' is : ";
    two.display();
    cout<<endl;
    
    return 0;
}*/



/*#include <iostream>
#include <string>
using namespace std;
class Diablo {
private:
    string color, engineNumber, frameNumber;
    int cubicCapacity, numberOfSeats, yearOfManufacture;
    string* ownerName;  
public:
    Diablo(string c,int cc,int seats,int year,string engine,string frame,string owner)
        : color(c),cubicCapacity(cc),numberOfSeats(seats),yearOfManufacture(year),engineNumber(engine),frameNumber(frame) {
        ownerName = new string(owner);
    }
    Diablo(Diablo &o):color(o.color),cubicCapacity(o.cubicCapacity),numberOfSeats(o.numberOfSeats) {
        ownerName = nullptr;
        }

    void setRemainingAttributes(int year, string engine, string frame, string owner) {
        yearOfManufacture = year;
        engineNumber = engine;
        frameNumber = frame;
        if (ownerName) {
            delete ownerName;  
        }ownerName = new string(owner); 
    }
    void display() const {
        cout << "Color: " << color <<endl<< "Cubic Capacity: " << cubicCapacity <<endl<< "Number of Seats: " << numberOfSeats <<endl<< "Year of Manufacture: " << yearOfManufacture <<endl<< "Engine Number: " << engineNumber <<endl<< "Frame Number: " << frameNumber <<endl<< "Owner Name: " << *ownerName << "\n";
    }
};

int main() {
    Diablo initialDiablo("Royle Black", 5500, 2, 2024, "X123X123", "X123X456", "Dr. Doom");
    Diablo secondaryDiablo = initialDiablo;
    secondaryDiablo.setRemainingAttributes(2023, "XX12345", "X1X12X3", "Tony Stark");

    cout << "Details of first lambo:"<<endl;
    initialDiablo.display();

    cout << endl<<"Details of second lambo:"<<endl;
    secondaryDiablo.display();

    return 0;
}*/



/*#include<iostream>
#include<string>
using namespace std;
class Diablo{
    string color, engine_number, frame_number;
    int cubic_capacity, number_of_seats, year_of_manufactures;
    string *owner_name;
    public:
    Diablo(string c,int cc, int seats, int year, string engine, string frame, string owner)
    : color(c), cubic_capacity(cc), number_of_seats(seats), year_of_manufactures(year), engine_number(engine), frame_number(frame){
        owner_name= new string(owner);
    }
    Diablo( Diablo &o): color(o.color), cubic_capacity(o.cubic_capacity), number_of_seats(o.number_of_seats){
        owner_name= nullptr;
    }

    void set_remaining_attributes(int year, string engine,string frame, string owner){
        year_of_manufactures = year;
        engine_number = engine;
        frame_number= frame;
        if(owner_name){
            delete owner_name;
        }owner_name = new string (owner);
    }
    
    void Display() const{
        cout<<"color: "<<color<<endl<<"cubic capacity: "<<cubic_capacity<<endl<<"number of seats: "<<number_of_seats<<endl<<"year of manufacture: "<<year_of_manufactures<<"engine number: "<<engine_number<<"frame number: "<<frame_number<<"owner name: "<<owner_name<<endl;
        }
};

int main(){
    Diablo initialDiablo("blue", 4900, 2, 2005, "abcd", "xyzz", "Salil Thakur");
    Diablo secondaryDiablo=initialDiablo;
    secondaryDiablo.set_remaining_attributes(2023, "efgh", "pqrs", "Tony Stark");

    cout<<"Details of first lambo: "<<endl;
    initialDiablo.Display();

    cout<<"details of second Diablo: "<<endl;
    initialDiablo.Display();

    return 0;
}*/


//How does the String class in the provided code implement and use the [] operator for indexing, and what are the effects of modifying a character in the string using this operator?






/*#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String(const char* str = "") {
        size = strlen(str);
        data = new char[size + 1];
        strcpy(data, str);
    }

    ~String() {
        delete[] data;
    }

    char& operator[](int index) {
        if (index >= size) throw out_of_range("Index out of range");
        return data[index];
    }

    void display() const {
        cout << data << endl;
    }

private:
    char* data;
    int size;
};

int main() {
    String str("Prabhakar");

    cout << "Original string: ";
    str.display();

    str[0] = 'p';

    cout << "Modified string: ";
    str.display();

    return 0;
}*/


/* How does the matrix class in the provided code implemented and use 
the [] operator for accessing matrix element and what are the effects of
modifing the matrix element using this operators */

/*#include <iostream>
#include <stdexcept>
using namespace std;

class Matrix {
public:
    Matrix(int rows, int cols) : rows_(rows), cols_(cols) {
        data = new int[rows * cols];
    }

    ~Matrix() {
        delete[] data;
    }

    int* operator[](int row) {
        if (row >= rows_ || row < 0) throw out_of_range("Row index out of range");
        return &data[row * cols_];
    }

    const int* operator[](int row) const {
        if (row >= rows_ || row < 0) throw out_of_range("Row index out of range");
        return &data[row * cols_];
    }

    void display() const {
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < cols_; ++j) {
                cout << data[i * cols_ + j] << " ";
            }
            cout << endl;
        }
    }

private:
    int rows_, cols_;
    int* data;
};*/


// Basic Type: Temperature in Fahrenheit (represented as an int or float).
// Class Type: A Temperature class that encapsulates temperature values in both Fahrenheit and Celsius.


/*#include <iostream>
using namespace std;
class Temperature {
private:
    float fahrenheit;
    float celsius;
public:
    Temperature(float fahrenheit) : fahrenheit(fahrenheit) {
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
    }
    void display() const {
        cout << "Fahrenheit: " << fahrenheit << endl;
        cout << "Celsius: " << celsius << endl;
    }
};
int main() {
    float fahrenheitTemp;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheitTemp;
    Temperature temp(fahrenheitTemp);
    temp.display();
    return 0;
}*/



#include <iostream>
using namespace std;
class Distance {
private:
    float m;
    float km;
    float i;
    float mile;
public:
    Distance(float meters) : m(meters) {
        km = meters / 1000.0;
        i = meters * 40.0;
        mile = meters / 1600.0;
    }
    void display(){
        cout<<"Kilometers: "<< km<< endl;
        cout<<"Inches: "<<i <<endl;
        cout<<"Miles: "<<mile <<endl;
    }
};
int main() {
    float meters_input;
    cout << "Enter distance in meters: ";
    cin >> meters_input;
    Distance dist(meters_input);

    dist.display();
    return 0;
}
