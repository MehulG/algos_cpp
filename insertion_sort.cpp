#include<iostream>
using namespace std;


int main(){
    int arr[6];

    //entering the elements
    for(int p=0;p<6;p++)
    cin>>arr[p];

    //sorting
    for(int j=1;j<6;j++){
     for(int i=j;i>0;i--){
        while(arr[i]<arr[i-1]){
           int  key = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = key;
        }
     }
    }
  for(int p=0;p<6;p++)
    cout<<arr[p];
    }
