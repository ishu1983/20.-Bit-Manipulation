#include<iostream>

using namespace std;
void clearRangeBits(int i, int j, int num){
    int a = (~0) << (j +1);
    int b = (1 << i) - 1;

    int bitMask = a | b;
    num = num & bitMask;
    cout<<num<<endl;
}
int main(){
    clearRangeBits(1, 3 , 15);
    return 0;
}