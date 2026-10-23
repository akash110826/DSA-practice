// here selection sorting - we select the minimum number of the array and then 
// we push it to the starting in first round, then it continues to n - 1 round,
//  in first round the minimum element is pushed to the right place. 
// The over all time complexity of the code is O(n ) and space complexity is O(1).
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }
    return;
}
int main(){
    int arr[] = {4,5,6,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
