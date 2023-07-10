void insertionSort(vector<int> &arr, int size)
{
    // Write your code here.
    for(int i=0 ; i<size ; i++){
        for(int j=i ; j>0 ; j--){
          if(arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
          }
        }
    }
}