#include<iostream>

using namespace std;
    int GetIthBit(int num, int i){
        int bitMask = 1 << i;

        if(!(num & bitMask)){
            return 0;
        } else{
            return 1;
        }
    }

    int SetIthBit(int num, int i){
        int bitMask = 1 << i;
        return(num | bitMask);
    }

    int ClearIthBit(int num, int i){
        int bitMask = ~(1 << i);
        return(num & bitMask);
    }
int main(){
    cout<<GetIthBit(6, 2)<<endl;
    cout<<GetIthBit(7, 5)<<endl;
    cout<<SetIthBit(6, 3)<<endl;
    cout<<ClearIthBit(6, 1)<<endl;

        return 0;
}