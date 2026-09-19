// basic intution of binary search

// int binary_search1(vector<int> arr,int low,int high,int target){
   
//     while(low<=high){
//          long long mid=(low+high)/2;
//         if(arr[mid]==target) return mid;
//         else if(target<arr[mid]){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return -1;

// }

// recursive solution
// int binary_search2(vector<int> arr,int low,int high,int target){
//     int mid=low+(high-low)/2;
//     if(low>high) return -1;
//     if(arr[mid]==target) return mid;
//     else if(target<arr[mid]) {
//        return binary_search2(arr,low,mid-1,target);
//     }
//     else{
//       return  binary_search2(arr,mid+1,high,target);
//     }
// }


//lower bound arr[index]>=x(smallest element in array);
//upper bound arr[index]>x (smallest element in array);
// #include <bits/stdc++.h>
// using namespace std;
// int lower_bound(vector<int>arr,int low,int high,int target){
//     int n=arr.size();
//     int ans=n;
   
//     while(low<=high){
//          int mid=low+(high-low)/2;
//         if(arr[mid]>=target){
//          ans=mid;
//          high=mid-1;
//         }
//         else {
//             low=mid+1;
//         }
//     }
//     return ans;
// }
// int upper_bound(vector<int>arr,int low,int high,int target){
//     int n=arr.size();
//     int ans=n;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>target){
//             ans=mid;
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }
// int floor(vector<int>arr ,int low,int high,int target){
// int ans=-1;
// while(low<=high){
//     int mid=low+(high-low)/2;
//     if(arr[mid]<=target){
//         ans=arr[mid];
//         low=mid+1;
//     }
//     else{
//      high=mid-1;
//     }
    
// }




//  #first and last accurance

// void first_last_occurance(vector<int>arr,int &first,int &second,int target){
// int n=arr.size();
// for(int i=0;i<n;i++){
//     if(arr[i]==target){
//         if(first==-1){
//             first=i;
//             second=i;
//         }
//         else{
//             second=i;
//         }
//     }
// }
// }


// int lower_bound(vector<int>arr,int low,int high,int target){
//     int n=arr.size();
//     int lb=n;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>=target){
//             lb=mid;
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return lb;
// }
// int upper_bound(vector<int> arr,int low,int high,int target){
//     int n=arr.size();
//     int ub=n;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>target){
//             ub=mid;
//             high=mid-1;
            
//         }
//         else {
//         low=mid+1;
//         }
        
//     }
//     return ub;
// }
// void first_last_occurance1(vector<int>arr,int &first,int& second,int target){
// int n=arr.size();
// int lb=lower_bound(arr,0,n-1,target);
// int ub=upper_bound(arr,0,n-1,target);
//  if(lb==n||arr[lb]!=target){
//     first=-1;
//     second=-1;
//  }
//  else{
//     first=lb;
//     second=ub-1;
//  }
// }





// void first_last_occurance2(vector<int>arr,int &first,int & second,int target){
//     int n=arr.size();
//     int lb=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
//     int ub=upper_bound(arr.begin(),arr.end(),target)-arr.begin()-1;
//     if(lb==n||arr[lb]!=target){
//         first=-1;
//         second=-1;
//     }
//     else{
//         first=lb;
//         second=ub;
//     }
// }




// void first_last_occurance3(vector<int>&arr,int &first,int &second,int target){
//     int low=0;
//     int n=arr.size();
//     int high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target){
//             first=mid;
//             high=mid-1;

//         }
//        else if(arr[mid]>target){
         
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
       
//     }
//     low=0;
//     high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if (arr[mid]==target){
//             second=mid;
//             low=mid+1;
//         }
//         else if(arr[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
// }

  // count occurance in shorted array= last occuracne-first occurance+1





  #
