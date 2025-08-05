#include<iostream>
using namespace std;

int main(){
    int n,arr[20];
    cout<<"Enter Number of Elements :";
    cin >> n;
    cout<<"Enter "<<n<<" Elements :";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int st=0;
    int end = n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
