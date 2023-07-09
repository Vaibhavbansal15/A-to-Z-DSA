void selectionSort(vector<int>&arr) {
    // Write your code here.
    int minVal , minPos=0;
    for(int i=0 ; i<arr.size() ; i++){
        minVal = 15000;
        for(int j=i ; j<arr.size() ; j++){
          if (arr[j] < minVal) {
            minVal = arr[j];
            minPos = j;
          }
        }
        swap(arr[i],arr[minPos]);
    }
}