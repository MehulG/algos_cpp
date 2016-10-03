#include <iostream>
using namespace std;

int main(){
    int cases;
    cin>>cases;
    for(int i = 0; i < cases; i++){
        int students,min;
        cin>>students>>min;
        int no = 0;
        for(int j = 0; j < students; j++){
            int time;
            cin>>time;
            if(time <= 0){
                no = no + 1;
            }
        }
        if(no > min){
            cout<<"YES";
        }else{
            cout<<"NO";
        }



    }


}
