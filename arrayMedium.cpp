// #sum of a any two elements equal to target

//  vector<int> two_sum_problem(vector<int> arr,int targer){
    // bettwer tc=O(n*logn) for unordered map averageO(n) but can go O(n*n) in worst case
    // sc=O(n)
//     map<int,int>mpp;
//     for(int i=0;i<5;i++){
//         int a=arr[i];
//         int more=targer-a;
//         if(mpp.find(more)!=mpp.end()){
//             return {mpp[more],i};
//         }
//   mpp[a]=i;
    
//     }
//     return {-1,-1};
// }

// #sort array elements having 0,1,2 only elements without using library
//    dutch flag algorithm
//     int low=0,mid=0,high=12-1;
//     while(mid<=high){
//         if(arr2[mid]==0){
//              swap(arr2[low],arr2[mid]);
//              low++;
//              mid++;
//         }
//         else if(arr2[mid]==1){
//             mid++;
//         }
//         else{
//             swap(arr2[mid],arr2[high]);
//             high--;
//         }

//     }
//     return arr2;

// }

// #return the majority element

// better soltion-->hashmap
// optimal-->mayors voting algorithm

//  int cnt =0;
//     int el;
//     for(int i=0;i<arr3.size();i++){
//         if(cnt==0){
//             cnt=1;
//             el=arr3[i];
//         }
//         else if(arr3[i]==el){
//             cnt++;           
//         }
//         else{
//             cnt--;
//         }
//     }
//     int cnt1=0;
//     for(int i=0;i<arr3.size();i++){
//         if(arr3[i]==el) cnt1++;
//     }
//     if(cnt1>(arr3.size()/2)){
//         return el;
//     }
//     return -1;

// #maximum subarray sum
// brute force-->n*n

// // optimal solution (kadane's algorithm) //if-if algorithm
// int sum=0,maxi=INT_MIN;
// for(int i=0;i<8;i++){
//     sum+=arr4[i];
    
//     if(sum>maxi){
//         maxi=sum;
//     }
//     if(sum<0){
//         sum=0;
//     }
// }
// return maxi;


// #best time to buy and sell stock
        // int minPrice = prices[0];
        // int maxProfit = 0;
        // for (int i = 1; i < prices.size(); i++) {
        //     // Calculate profit if we sell today
        //     int profit = prices[i] - minPrice;

        //     // Update maximum profit
        //     maxProfit = max(maxProfit, profit);

        //     // Update minimum buying price
        //     minPrice = min(minPrice, prices[i]);
        // }

        // return maxProfit;
    
       
     // #rearrange array elements by sign
     vector<int> element_in_alternate_order(vector<int> arr){
    // brute solution tc=O(n+n/2) sc=O(n)
// int pos[]={3,1,2};
// int neg[]={-2,-5,-4};
// for(int i=0;i<6/2;i++){
//     arr[2*i]=pos[i];
//     arr[2*i+1]=neg[i];
// }
// return arr; 
// optimal solution sc=O(n) tc =O(n);
// vector<int> ans(6,0);
// int pIndex=0,nIndex=1;
// for(int i=0;i<6;i++){
//     if(arr[i]<0){
//         ans[nIndex]=arr[i];
//         nIndex+=2;
//     }
//     else{
//         ans[pIndex]=arr[i];
//         pIndex+=2;
//     }
// }
// return ans;
// }

/* if given array is not equal*/
// tc=O(n)+O(min(pos,neg))+O(laftover)=0(2n) sc=O(n)
// vector<int> element_in_alternate_order_unequal(vector<int> &arr1){
//     vector<int> pos,neg;
//     int n=arr1.size();
//     for(int i=0;i<n;i++){
//         if(arr1[i]>0){
//             pos.push_back(arr1[i]);
//         }
//         else{
//             neg.push_back(arr1[i]);
//         }
//     }
//     if(pos.size()>neg.size()){
//         for(int i=0;i<neg.size();i++){
//         arr1[2*i]=pos[i];
//         arr1[2*i+1]=neg[i];
//         }
//         int index=neg.size()*2;
//         for(int i=neg.size();i<pos.size();i++){
//             arr1[index]=pos[i];
//             index++;
//         }
//     }
//     else{
//         for(int i=0;i<pos.size();i++){
//             arr1[2*i]=pos[i];
//             arr1[2*i+1]=neg[i];
//         }
//         int index=pos.size()*2;
//         for(int i=pos.size();i<neg.size();i++){
//             arr1[index]=neg[i];
//             index++;
//         }
//     }
//     return arr1;

// }

