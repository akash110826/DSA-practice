// in Bubble sort we need to compare adjecent element with each other and then swap them it is same as selection
// sort but here the maximum element is pushed to the end of the array in each round

#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n-1; j++ ){
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    return;
}

int main(){
    int arr[] = {4,5,6,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " << endl;
    }
    return 0;
}