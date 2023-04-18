/*Q2 - Given an integer array and its size, 
find the sum of the greatest and the smallest
 integer present
in the array. Here 1< size <101*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<min<<endl;
    cout<<max+min<<endl;
    return 0;
}