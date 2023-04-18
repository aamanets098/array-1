#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    int min1=INT_MAX;
    for(int i=0;i<n;i++){
        if(b[i]<min1){
            min1=a[i];
        }
    }
    cout<<min+min1<<endl;
    return 0;
}