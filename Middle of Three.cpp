link-->https://www.geeksforgeeks.org/problems/middle-of-three2926/1
Q.Middle of Three
code-->
  int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        vector<int>ans;
        ans.push_back(A);
        ans.push_back(B);
        ans.push_back(C);
        sort(ans.begin() , ans.end());
        return ans[1];
    }

Expected Time Complexity:O(1)
Expected Auxillary Space:O(1)
