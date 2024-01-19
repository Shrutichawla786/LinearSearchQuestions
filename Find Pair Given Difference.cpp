link-->https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1
Q.Find Pair Given Difference

code--
  bool findPair(int arr[], int size, int n){
    //code
   

    unordered_map<int , int>m;
    
    for(int i=0;i<size;i++){
        if(m[arr[i]+n]==1 || m[abs(arr[i]-n)]==1){
            return true;
        }
        m[arr[i]]++;
    }
    return false;
    
}Expected Time Complexity: O(L).
Expected Auxiliary Space: O(l).
