#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int> & num){
    int answer = 0;
    for(int i=0; i<num.size(); i++){
        answer ^= num[i];
    }
    return answer;
} 
int main(){
    vector<int> num = {4, 1, 2, 1, 2};
    cout<<singleNumber(num)<<endl;
    return 0;
}