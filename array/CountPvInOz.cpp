// Count how many +, - , 0 numbers in a array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,-2,3,-21, 0, 0 ,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int pos, neg, zero = 0;

    for(int i = 0; i < size; i++){
        if(arr[i]>0){
            pos++;
        }else if(arr[i] == 0){
            zero++;
        }else{
            neg++;
        }
    }

    cout<<"Positive: "<<pos<<endl;
    cout<<"Zero: "<<zero<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;

}