#include<iostream>
using namespace std;

struct MyStruct{
    int max_left, max_right, netsum;
    MyStruct( int max_left, int max_right, int netsum ) : max_left(max_left), max_right(max_right), netsum(netsum) {}

};

struct left{
    int low, high, sum;
    left(int low,int high, int sum) : low(low), high(high), sum(sum){}

};

MyStruct crossing_subarray(int A[],int low, int mid, int high){

    int leftsum = -9999999;
    int sum = 0, max_left, max_right;
    for(int i = mid; i > 0; i--){
        sum = sum + A[i];
        if(sum > leftsum){
            leftsum = sum;
            max_left = i;
        }
    }

    sum = 0;
    int  rightsum = 0;


        for(int j = mid+1; j < high; j++){
        sum = sum + A[j];
        if(sum > rightsum){
            rightsum = sum;
            max_right = j;
        }
    }

    int netsum = leftsum + rightsum;


   return MyStruct(max_left , max_right, netsum);
}

MyStruct max_subarray(int A[],int high , int low){

    if(high==low){
        return  (high , low , A[low]);
    }
    else{
        int mid = (int) ((high + low)/2);
        (int leftlow;int lefthigh; int leftsum) = max_subarray(A,low,mid);
        (int rightlow,int righthigh, int rightsum) = max_subarray(A,mid+1,high);
        (int crosslow,int crosshigh, int crosssum) = max_subarray(A,low,mid,high);


        if(leftsum >= rightsum && leftsum >= crosssum){
            return (leftlow, lefthigh, leftsum);
        }
        else if(rightsum >= leftsum && rightsum >= crosssum){
            return (rightlow, rightghigh, rightsum);
        }
        else return (crosslow, crosshigh, crosssum);

    }



}
}
