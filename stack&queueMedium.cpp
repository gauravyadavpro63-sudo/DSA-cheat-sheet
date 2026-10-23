#NEXT GREATER ELEMENT


// vector<int> next_greater_element(vector<int> arr)
// {
//     // brute solution
//     int n = arr.size();
//     vector<int> ans(n, -1);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 ans[i] = arr[j];
//                 break;
//             }
//         }
//     }
//     return ans;

    // optimal solution sc=O(2n) tc =(2n);
    //     stack<int>st;
    //     int n=arr.size();
    //     vector<int>ans(n);
    //     for(int i=n-1;i>=0;i--){
    //         while(!st.empty()&&st.top()<=arr[i]){
    //             st.pop();
    //         }
    //         if(st.empty()){
    //             ans[i]=-1;
    //         }
    //         else{
    //             ans[i]=st.top();
    //         }
    //         st.push(arr[i]);
    //     }
    //     return ans;
// }


#NEXT GREATER ELEMENT II


// vector<int> next_greater_element2(vector<int> arr)
// {
    //     Time: O(n²)
    // Space: O(n) for ans.
    //     int n=arr.size();

    //     vector<int>ans(n,-1);
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<2*n;j++){
    //               int index=j%n;
    //               if(arr[index]>arr[i]){
    //                    ans[i]=arr[index];
    //                    break;
    //               }
    //         }
    //     }
    //     return ans;



    
    // Time  → O(n)
    // Space → O(n)
    //     int n = arr.size();

    //     vector<int> ans(n, -1);
    //     stack<int> st;

    //     for (int i = 2 * n - 1; i >= 0; i--) {

    //         while (!st.empty() && st.top() <= arr[i % n]) {
    //             st.pop();
    //         }

    //         if (i < n) {
    //             if (!st.empty()) {
    //                 ans[i] = st.top();
    //             }
    //         }

    //         st.push(arr[i % n]);
    //     }

    //     return ans;
    // }
// }


#NEXT SMALLER ELEMENT

    // vector<int> next_smaller_element(vector<int> arr)
    // {
    //     int n = arr.size();
    //     vector<int> ans(n, -1);
    //     stack<int> st;
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         while (!st.empty() && st.top() >= arr[i])
    //         {
    //             st.pop();
    //         }
    //         if (!st.empty())
    //         {
    //             ans[i] = st.top();
    //         }
    //         st.push(arr[i]);
    //     }
    //     return ans;
    // }
   

    #PREVIOUS SMALLER ELEMENT


    vector<int> previous_smaller_element(vector<int>arr){
    // brute force 
    // int n=arr.size();
    // vector<int>ans(n,-1);
    
    // for(int i=1;i<n;i++){
    //     for(int j=i-1;j>=0;j--){
    //        if(arr[j]<arr[i]){
    //           ans[i]=arr[j];
    //           break;
    //        }
    //     }
    // }
    // return ans;

    // optimal solution 

    // optimal solution 
//     int n=arr.size();
//     vector<int>ans(n,-1);
//     stack<int>st;
//     for(int i=0;i<n;i++){
//         while(!st.empty()&&st.top()>=arr[i]){
//           st.pop();
//         }
//         if(st.empty()){
//             st.push(arr[i]);
//         }
//         else{
//             ans[i]=st.top();
//             st.push(arr[i]);
//         }
//     }
//     return ans;

// }