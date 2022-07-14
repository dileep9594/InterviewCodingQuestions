#include<iostream>
#include<vector>
//max sum subarray
using namespace std;
int maxSumSubArray(vector<int>arr,int size){
    int result = INT_MIN;
    int local_result = 0;
    for ( int i = 0; i < arr.size(); i++)
    {
        local_result += arr[i];
        if(local_result>result){
            result = local_result;
        }
        if(local_result< 0){
            local_result = 0;
        }

    }
    return result;  
}

int main(){
    vector<int> myVector{ -2, -3, 4, -1, -2, 1, 5, -3 };

     std::cout<<maxSumSubArray(myVector,myVector.size())<<endl;
}