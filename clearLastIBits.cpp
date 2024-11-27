#include<iostream>

using namespace std;
void ClearLastIthBit(int num, int i){
    int bitMask = (~0)<<i;
    num = num & bitMask;

    cout<<num<<endl;
}
int main(){
    ClearLastIthBit(15, 2);
    return 0;
}