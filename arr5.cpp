#include<iostream>
using namespace std;
int val(int arr[],int n)
{
int missing=-1;
int sum=0;
for(int i=0;i<n;i++)
{
sum+=arr[i];
}
int range_sum=(n)*(n+1)/2;
missing=range_sum-sum;
return missing;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    val(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}