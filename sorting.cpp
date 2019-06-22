#include <iostream>
using namespace std;
int main(){
    int range;
    cout<<"enter the range";
    cin>>range;
    int arr[range];
    int i,j;
    cout<<"enter the numbers in the array\n";
    for(i=0; i<=range-1; i++){
        cin>>arr[i];
    }
    for(i=0; i<=range-2; i++){
        for(j=i+1; j<=range-1; j++){
            int temp;
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i] =  arr[j];
                arr[j] = temp;
            }
        }
    }for (int l=0; l<range; ++l){
        cout<<endl<<arr[l];
    }
    return 0;
}