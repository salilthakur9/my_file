#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>&arr){
    int ans=0;
    for (int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    for (int i=1; i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int duplicate = findDuplicate(arr);
    cout<<"the duplicate element of the given array is: "<<duplicate<<endl;

    return 0;
}