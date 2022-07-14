#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,325,6,5,7,853,4527,34,7,6};
    int x =67;
    for(int i=0;i<10;i++){
        if(arr[i]==x){
           std::cout <<"number is persent in array";
        }
        else{
            std::cout <<"number is not persent in array";
        }
    }
}