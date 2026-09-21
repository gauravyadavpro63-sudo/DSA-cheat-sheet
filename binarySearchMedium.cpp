#SQUARE ROOT FINDING APPROCH

// int sroot(int n){
    // return sqrt(n);
    // int ans;
    // for(int i=1;i<n;i++){
    //     if((long long)i*i<=n){
    //         ans=i;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // return ans;

//     int low=1;
//     int ans;
//     int high=n;
//     while(low<=high){
//          int mid=low+(high-low)/2;
//          if((long long)mid*mid<=n){
//             ans=mid;
//             low=mid+1;
//          }
//          else{
//             high=mid-1;
//          }
//     }
//     return ans;
// }

// double times(double mid,int m){
//     double value=1;
//     for(int i=0;i<m;i++){
//       value=value*mid; 
//     }
//     return value;
// }
// double m_th_sroot(int n,int m){
// double low=1;
// double  high=n;
// while(high-low>1e-6){
//     double mid=low+(high-low)/2;
//     if(times(mid,m)>n){
//         high=mid;
//     }
//     else{
//        low=mid;
//     }
// }
// return low;
// }


// cout<<pow(n,double(1/double(m)));  



#KOKO EATING BANANA



// double times(double mid,int m){
//     double value=1;
//     for(int i=0;i<m;i++){
//       value=value*mid; 
//     }
//     return value;
// }
// double m_th_sroot(int n,int m){
// double low=1;
// double  high=n;
// while(high-low>1e-6){
//     double mid=low+(high-low)/2;
//     if(times(mid,m)>n){
//         high=mid;
//     }
//     else{
//        low=mid;
//     }
// }
// return low;
// }


// int maxelement(vector<int>arr){
//     int n=arr.size();
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//        maxi=max(maxi,arr[i]);
//     }
//     return maxi;
// }
// int timing(vector<int>arr,int bananaperhour){
//     int n=arr.size();
//     int  t=0;
//  for(int i=0;i<n;i++){
//      t+=ceil(double(arr[i])/double(bananaperhour));
//  }
//  return t;
// }
// int koko_eating_banana(vector<int> arr){
//     // brute force tc=n*max(arr_element)
//     // int low=1;
//     // int high=maxelement(arr);
//     // for(int i=1;i<=high;i++){
//     //    int  totaltiming=timing(arr,i);
//     //     if(totaltiming<=8) return i;
//     // }
//     // return -1;

//     // optimal solution tc=n*lo2(max(arr_element)   );
//     int low=1;
//     int high=maxelement(arr);
//     int ans=INT_MAX;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(timing(arr,mid)<=8){
//             ans= mid;
//             high=mid-1;
//         }
//         else{
//        low=mid+1;
//         }
//     }
// }




#MINIMUM DAYS TO MAKE M BUCKETS



// int max_element(vector<int>arr){
//     int n=arr.size();
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//     }
//     return maxi;
// }
// bool possible(vector<int>arr,int days,int m,int k ){
//     int n=arr.size();
//     int cnt=0;
//     int bucket=0;
//     for(int i=0;i<n;i++){
//         if(days>=arr[i]){
//          cnt++;
//         }
//         else{
//          bucket+=cnt/k;
//          cnt=0;
//         }
//     }
//     bucket+=cnt/k;
//     if(bucket>=m) return true;
//     else return false;
    
// }
// int minimum_days_to_make_m_bucket(vector<int>arr,int m,int k){
    // brute solution tc=O(n*max_elemet_arr)
    // int n=arr.size();
    // if(m*k>n) return -1;
    // int high=max_element(arr);
    // for(int i=1;i<=high;i++){
    //     if(possible(arr,i,m,k)==true){
    //         return i;
    //     }
    // }
    // return -1;

    // optimal solution tc=O(n*log2(max_element)
//     int n=arr.size();
//     if(m*k>n) return -1;
//     int low=1;  //can use *min_element(arr.begin(),arr.end())
//     int high=max_element(arr);
//      int ans=INT_MAX;
//     while(low<=high){
//         int  mid=low+(high-low)/2;
//         if(possible(arr,mid,m,k)==true){
//           ans=mid;
//           high=mid-1;
//         } 
//         else{
//             low=mid+1;
//         }

//     }
//     return ans;
// }



#FIND THE SMALLEST DIVISOR GIVEN A THRESHOLD(SAME AS KOKO EATING BANANA)



#CAPACITY TO SHIP PACKAGE WITHIN D DAYS


// int totaldays(vector<int>arr2,int package){
//  int n=arr2.size();
// int load=0;
// int days=1;
//  for(int i=0;i<n;i++){
//     if(load+arr2[i]>package){
//         days++;
//         load=arr2[i];
//     }
//     else{
//         load+=arr2[i];
//     }
//  }
//  return days;
// }

// int capacity_to_ship_package_within_d_days(vector<int>arr2,int days){
    // brute solution tc=O(n*high-low)
    // int low=*max_element(arr2.begin() ,arr2.end());
    // int high=accumulate(arr2.begin(),arr2.end(),0);
    // for(int i=low;i<=high;i++){
    //     if(totaldays(arr2,i)<=days){
    //         return i;
    //     }

    // }
    // return -1;

    // optimal solution 
    // int low=*max_element(arr2.begin(),arr2.end());
    // int high=accumulate(arr2.begin(),arr2.end(),0);
    // int ans=-1;
    // while(low<=high){
    //     int mid=low+(high-low)/2;
    //     if(totaldays(arr2,mid)<=days){
    //         ans=mid;
    //         high=mid-1;
    //     }
    //     else{
    //         low=mid+1;
    //     }
    // }
    // return ans;

// }













