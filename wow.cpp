/*#include <iostream>

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



#include<iostream>
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
}