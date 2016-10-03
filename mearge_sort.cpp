#include<iostream>
using namespace std;
void merge(int A[],int B[], int C[]){
    int i = 0, j = 0;
    for(int k = 0; k < 8; k++){

        if(A[i]<=B[j] && i!=4 && j!=4){     //mistakes happen at this '&&'!! n never forget to analyse conditions properly
            C[k] = A[i];
            i = i+1;
        }
        else{
        if (A[i]>=B[j] && i!=4 && j!=4){
            C[k] = B[j];
            j = j+1;
        }else{                          //this  is of true importance never ever forget!!
        if(i != 4){
            C[k] = A[i];
            i = i+1;
        }
        else{
        if(j != 4){
            C[k] = B[j];
            j = j+1;
        }
        }
        }
        }


}




    for (int k = 0; k < 8; k++)
    cout<<C[k]<<"\n";
}

int main(){

    int A[] = {2,3,4,5};
    int B[] ={1,2,6,9} ;
    int C[8];

    merge(A,B,C);

}
