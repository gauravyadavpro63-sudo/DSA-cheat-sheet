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





#SEARCH ELEMEENT IN ROTATED SORTED ARRAY
    // int mid=low+(high-low)/2;
    //  if(arr[mid]==target) return mid;
//      if(arr[low]<=arr[mid]){
//            if(target>=arr[low]&&target<arr[mid]) {
//             high=mid-1;
//            }
//            else{
//             low=mid+1;
//            }
//         }
//            else{
//             if(target>arr[mid]&&target<=arr[high]){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//      }
//      return -1;
// }






#SEARCH IN ROTATED SORTED ARRAY WITH DUPLICATE

// tc=average=O(log2n) worst=O(n);
// int rotated_array_search2(vector<int>arr,int target){
//     int n=arr.size();
//     int low=0; 
//     int high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target)return mid;
//         if(arr[low]==arr[mid]&&arr[mid]==arr[high]){
//             low++;
//             high--;
//             continue;
//         }
//         if(arr[low]<=arr[mid]){
//             if(target>=arr[low]&&target<arr[mid]){
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         else{
//             if(target>arr[mid]&&target<=arr[high]){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//     }
//     return -1;
// }



#MINIMUM IN ROTATED SORTED ARRAY

// int  minimum _in_sorted_rotated_array(vector<int>arr){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     int ans=INT_MAX;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[low]<=arr[mid]){
//             ans=min(ans,arr[low]);
//              low=mid+1;
        
//         }
//         else{
//             ans=min(ans,arr[mid]);
//             high=mid-1;
           
//         }        
//     }
//     return ans;
// }



#HOW MANY TIMES ARRAY IS ROTATED


// int how_many_time_array_rotated(vector<int>arr){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     int ans=INT_MAX;
//     int times=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[low]<=arr[mid]){
//             if(arr[low]<ans){
//                 ans=arr[low];
//                   times=low;
//             }
//                low=mid+1;
//         }
//         else{
//             if(arr[mid]<ans){
//                 ans=arr[mid]; 
//                 times=mid;
//             }
//              high=mid-1;
//         }
//     }
//     return times;
// }


#SINGLE ELEMENT IN ARRAY

// brute solution tc= O(n)
// int single_element_in_array(vector<int> arr){
    // int n=arr.size();
    // if(n==1) return arr[0];
    // for(int i=0; i<n;i++){
    //     if(i==0){
    //         if(arr[i]!=arr[i+1]) return arr[i];
    //     }
    //     else if(i==n-1){
    //         if(arr[i]!=arr[i-1]) return arr[i];
    //     }
    //     else{
    //         if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1])return arr[i];
    //     }
    // }
    // return -1;



    // optimal solution tc=O(logn2n);
//     int n=arr.size();
//     int low=1;
//     int high=n-2;
//     if(n==1) return arr[0];
//     if(arr[0]!=arr[1]) return arr[0];
//     if(arr[n-1]!=arr[n-2]) return arr[n-1];
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1])return arr[mid];
//         else if((mid%2==1&&arr[mid]==arr[mid-1])||
//              (mid%2==0&&arr[mid]==arr[mid+1])) {
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;

// }



#PEAK ELEMENT IN ARRAY


// int peak_element_in_array(vector<int>arr){
    // brute tc=O(n);
//     int n=arr.size();
//     if(n==1) return arr[0];
//     for(int i=0;i<n;i++){
//         if(i==0){
//             if(arr[i]>arr[i+1]) return arr[i];
//         }
//         else if(i==n-1){
//             if(arr[i]>arr[i-1]) return arr[i];
//         }
//         else{
//          if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]) return arr[i];
//         }
//     }
//     return -1;
  
// optimal solution  tc=log2n
// int peak_element_in_array(vector<int>arr){

//     int n=arr.size();
//     int low=1;
//     int high=n-2;
//     if(n==1) return arr[0];
//     if(arr[0]>arr[1]) return arr[0];
//     if(arr[n-1]>arr[n-2]) return arr[n-1];
//     while(low<=high){
//      int mid=low+(high-low)/2;
//      if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]) return arr[mid];
//      else if(arr[mid]>arr[mid-1]){
//         low=mid+1;
//      }
//      else{   

//         high=mid-1;
        
//      }
//     }
//     return -1;
// }






