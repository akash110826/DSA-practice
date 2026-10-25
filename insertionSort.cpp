/*. Insertionsort is a sorting algorithm in which we compare elements to there preciding 
and insert the element to the correct place .
 .. This is a stable algorithm - means the relative order of the elements is being preserved 
 even after sorting.
 .. This is an adaptable algorithm - means it changes its behaviour depanding upon the existing 
 order . If it find the right place the algorithm breaks.*/

 #include<iostream>
 using namespace std;

 void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if(arr[j] > temp ){
            arr[j+1] = arr[j];
        }else{
            break;
        }
            j--;
        }
        arr[j+1] = temp;
    }
    return ;
 }
 int main(){
    int arr[] = {5,1,5,2,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
 }