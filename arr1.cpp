/*Q1 - Given an integer array(arr) and its size(n),
 print the count of odd and even integers present
  in the array.*/
  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int a[n];
    int count=0,count1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count ++;
        }
        else{
            count1++;
        }
    }
    cout<<count<<endl;
    cout<<count1<<endl;
    return 0;
  }