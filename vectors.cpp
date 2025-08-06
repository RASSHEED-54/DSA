#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    int x;
    while(true){
        cout<<"Enter the Element to be added (Enter -1 to Stop):";
        cin >> x;
        if(x==-1){
            break;
        }
        v.push_back(x); //push_back()->add elements at end of vectors
    }
    cout<<"Last Element Removed "<<endl;
    v.pop_back(); //Remove the Last Element    
    cout<<"Elements Inside Vector:"<<endl;
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"First Element :"<<v.front()<<endl; //Prints the first Element
    cout<<"Last Element :"<<v.back()<<endl; //Prints the Last Element
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;
    cout<<"Accesing Element Through Index :"<<v.at(3); //access element through index

    return 0;    
}