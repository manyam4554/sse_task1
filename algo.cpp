#include<iostream>
#include<string>
using namespace std;
int linearsearch(int arr[],int size,int n){
    for(int i =0; i<size;i++){
        if(arr[i]==n){
            cout<<arr[i]<<""<<"at index\t"<<i;
            break;
        }
        else{continue;}
    }
    return 0;
}
int binarysearch(int arr[],int n,int element){
    int low = 0;
    int high = n-1;
    int mid = (low+high)/2;
    while(low<= high){
    int mid = (low+high)/2;
    if(arr[mid]== element){
        cout<<arr[mid];
        return mid ;
    }
    else if(arr[mid]<element){
        low = mid +1;
    }
    else if(arr[mid]>element){
        high = mid-1;
    }
    else{cout<<"element not found";}
}
    return 0;
}
int main(){
    int arr[] = {12,16,20,28,50,60,66,88,100};
    binarysearch(arr,9,20);
    return 0;
}
