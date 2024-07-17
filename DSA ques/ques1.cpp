#include<iostream>
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
}