#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cout<<"arr["<<i<<"]: "<<endl;
        cin>>arr[i];
    }
    // list all elements of the array
    for(int i = n - 1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //find maximum of an array
    int maxx = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>maxx) maxx = arr[i];
    }
    cout<<maxx;
    cout<<endl;
    // list all elements of an array and break if -1 is found
    for(int i = 0;i<n;i++){
        if(arr[i] != -1) cout<<arr[i]<<" ";
        else break;
    }
    cout<<endl;
    //list all elements of an array exept 7
    for(int i = 0;i<n;i++){
        if(arr[i] != 7) cout<<arr[i]<<" ";
    }
    
    //find endex of x
    int x;
    cin>>x;
    for(int i = 0;i<n;i++){
        if(arr[i] == x) cout<<i;
    }
    
}
