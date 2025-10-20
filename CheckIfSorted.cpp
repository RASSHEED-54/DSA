#include<iostream>
using namespace std;

//Check if Sorted Or Not

int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5]={1,3,10,7,6};
    int count;
    for(int i=1;i<5;i++){
        if(arr2[i-1]<=arr2[i]){
            count+=1;
        }    
    }
    if(count==(5-1)){ //n-1
        cout<<"true"<<endl; //Sorted
    }
    else{
        cout<<"false"<<endl; //NotSorted
    }
    return 0;
}