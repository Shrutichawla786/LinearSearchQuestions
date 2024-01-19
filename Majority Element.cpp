link-->https://www.geeksforgeeks.org/problems/majority-element-1587115620/1
Q.Majority Element
code-->int majorityElement(int a[], int size)
    {
        
        // your code here
        unordered_map<int, int>m;
        for(int i=0;i<size; i++){
            m[a[i]]++;
        }
        for (auto  i: m){
            if(i.second>size/2){
                return i.first;
            }
        }
        return -1;
        
    }
  
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
 
