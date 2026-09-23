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



# FIND KTH MISSING POSITIVE NUMBER


// int k_missing_positive_number(vector<int>arr,int k){//1,2,3,4,_,6 algoritm
//     int n=arr.size();
//     int ans=k;
//     for(int i=0;i<n;i++){
//         if(ans>=arr[i]) {
//             ans++;
//     }
//     else return ans;
// }
// return ans;

// // optimal solution tc= O(log2n)
// int n=arr.size();
// int low=0;
// int high=n-1;
// while(low<=high){
//     int mid=low+(high-low)/2;
//     int missing=arr[mid]-(mid+1);
//     if(missing<k){
//         low=mid+1;
//     }
//     else{
//         high=mid-1;
//     }
   
// }
// return high+k+1;  //low+k // (high+1+k)
// }



#AGGRESIVE COWS



// bool coordinate_possible(vector<int>arr2,int distance,int cows){
//     int n=arr2.size();
//     int last=arr2[0];
//     int tcows=1;
// for(int i=1;i<n;i++){
//   if((arr2[i]-last)>=distance){
//      last=arr2[i];
//      tcows++;
//   }
  
// }
// if(tcows>=cows) return true;
//   else return false;
// }
// brute force tc=O(n*high)     
// int aggresive_cows(vector<int>arr2,int cows){
//  sort(arr2.begin(),arr2.end());

//     int n=arr2.size();
// int  high=arr2[n-1]-arr2[0];
// int low=1;
// for(int i=low;i<=high;i++){
//     if(coordinate_possible(arr2,i,cows)==true){
//         continue;
//     }
//     else return i-1;
// }
// return -1;
// optimal solution  tc=O(n*logn(high))

// int aggresive_cows(vector<int>arr2,int cows){
//     sort(arr2.begin(),arr2.end());
//     int n=arr2.size();
//     int low=1;
//     int high=arr2[n-1]-arr2[0];
//     int ans=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(coordinate_possible(arr2,mid,cows)==true){
//             low=mid+1;
//             ans=mid;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return ans;
// }




#BOOK ALLOCATION


// bool allocation_possible(vector<int>arr3,int mid,int students){
//     int n=arr3.size();
//     int page= 0;
//     int count=1;
//    for(int i=0;i<n;i++){
//      if(arr3[i]>mid) return false;
//      if(page+arr3[i]>mid){
//       page=arr3[i];
//        count++;
//      }
//     else{
//         page+=arr3[i];
//     }
//    }
// if(count>students) return false;
// return true;
// }
// tc=n*log2(high-low)
// int books_allocation(vector<int>arr3,int students){
//     int low=*max_element(arr3.begin(),arr3.end());
//     int high=accumulate(arr3.begin(),arr3.end(),0);
//     int ans=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(allocation_possible(arr3,mid,students)==true){
//             high=mid-1;
//             ans=mid;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;

// }



//painters partition//spliting array min of max partition is 100 percent similar



#MINIMIZE MAX DISTANCE TO GAS STATION


//     #include <bits/stdc++.h>
//     using namespace std;

//     int gasstationcount(vector<int>arr,double dist){\
    
//       int n=arr.size();
//       int cnt=0;
//       for(int i = 0; i < n - 1; i++){
//         double gap = arr[i+1] - arr[i];
//         int needed = (int)ceil(gap / dist) - 1;
//         count += needed;
//     }
//    return cnt;

   
//     }

    // double min_max_distanceto_gasstation(vector<int>arr,int gstation){

    //         // optimal 2
       
    // int n=arr.size();
    // double low=0;
    // double high=0;
    // double ans=-1;
    // for(int i=0;i<n-1;i++){
    //     high=max(high,double(arr[i+1]-arr[i]));
    // }
    // double diff=1e-6;
    // while(high-low>diff){
    //     double mid=low+(high-low)/2;
    //     if(gasstationcount(arr,mid)>gstation){
    //         low=mid;
    //     }
    //     else{
    //         high=mid;
    //         ans=mid;
    //     }
    // }
    // return ans;
    // }
 
    //     // brute force  tc=O(k*n+n)
    //     int n=arr.size();
        
    //     vector<int>stationcounter(n-1,0);
    //     for(int k=0;k<gstation;k++){
    //        int sectionIndex=-1;
    //        double maxlength=-1;
    //         for(int i=0;i<n-1;i++){
    //          double gap=arr[i+1]-arr[i];
    //          double sectionlength=gap/(stationcounter[i]+1);
    //          if(sectionlength>maxlength){
    //             maxlength=sectionlength;
    //             sectionIndex=i;
    //          }
             
    //         }
    //       stationcounter[sectionIndex]++;
    //     }


    //    double maxans=-1;
    //     for(int i=0;i<n-1;i++){
    //       double gap=arr[i+1]-arr[i];
    //       double sectionlength=gap/(stationcounter[i]+1);
    //       maxans=max(maxans,sectionlength);
    //     }
    //     return maxans;
    // }

    // optimal 1  tc=O(nlogn+klogn);
    // int n=arr.size();
    // vector<int>gascounter(n-1,0);
    // priority_queue<pair<double ,int>>pq;
    // for(int i=0;i<n-1;i++){
    //     double diff=arr[i+1]-arr[i];
    //     int index=i;
    //     pq.push({diff,index});
    // }
    // for(int i=0;i<gstation;i++){
    //    auto tp=pq.top();
    //    pq.pop();
    //    int sectionIndex=tp.second;
    //    gascounter[sectionIndex]++;
    //    double intialdiff=arr[sectionIndex+1]-arr[sectionIndex];
    //    double newsection=intialdiff/(gascounter[sectionIndex]+1);
    //    pq.push({newsection,sectionIndex});
    // }
    // return pq.top().first;




    #MEDIAN OF TWO SORTED ARRAY



    
    double median_of_two_sorted_array(vector<int>arr1,vector<int>arr2){
        // // brute force  tc=O(n+m) sc=O(n+m)
        // int n=arr1.size();
        // int m=arr2.size();
        // int left=0;
        // int right=0;
        // vector<int>merged;
        // while(left<n&&right<m){
        //     if(arr1[left]<=arr2[right]){
        //     merged.push_back(arr1[left]);
        //     left++;
        //     }
        //     else{
        //         merged.push_back(arr2[right]);
        //         right++;
        //     }
        // }
        // while(left<n){
        //   merged.push_back(arr1[left]);
        //   left++;
        // }
        // while(right<m){
        //     merged.push_back(arr2[right]);
        //     right++;
        // }
        // int size=merged.size();
        // if(size%2==0){
        //     return (merged[(size/2)-1]+merged[(size/2)])/2.0;
        // }
        // else  return merged[size/2];

//        }
    

    // optimal solution tc=log(min(n1,n2))
    
//     if(arr2.size()<arr1.size()) return median_of_two_sorted_array(arr2,arr1);
//     int n=arr1.size();
//     int m=arr2.size();
//     int low=0;
//     int high=n;
//     int l1,l2,r1,r2;
//     while(low<=high){
//         int cut1=(low+high)/2;
//         int cut2=(n+m+1)/2-cut1;

//         if(cut1==0)    l1=INT_MIN;
//         else  l1=arr1[cut1-1];

//        if(cut2==0)  l2=INT_MIN;
//        else  l2=arr2[cut2-1];




//        if(cut1==n)  r1=INT_MAX;
//        else  r1=arr1[cut1];

//        if(cut2==m)  r2=INT_MAX;
//        else  r2=arr2[cut2];
          
//      if( l1<=r2&&l2<=r1){
//        if((n+m)%2==0) return (max(l1,l2)+min(r1,r2))/2.0;
//        else return max(l1,l2);
//      }
//      else if(l1>r2){
//        high=cut1-1;
//      }
//      else {
//         low=cut1+1;
//      }
//     }
//     return -1;




#KTH ELEMENT OF TWO SORTED ARRAY



// int kth_element_of_two_sorted_array(vector<int>arr1,vector<int>arr2,int k){
//     if(arr2.size()<arr1.size()) return kth_element_of_two_sorted_array(arr2,arr1,k);
//     int n=arr1.size();
//     int m=arr2.size();
//     int left=k;
//     int high=min(k,n);
//     int low=max(0,k-m);
//     int l1,r1,l2,r2;
//     while(low<=high){
//         int cut1=(low+high)/2;
//         int cut2=left-cut1;
//         if(cut1==0) l1= INT_MIN;
//         else l1=arr1[cut1-1];

//         if(cut2==0) l2=INT_MIN;
//         else l2=arr2[cut2-1];



//         if(cut1==n) r1=INT_MAX;
//         else r1=arr1[cut1];

//         if(cut2==m) r2=INT_MAX;
//         else r2=arr2[cut2];

//         if(l1<r2&&l2<r1){
//             return max(l1,l2);
//         }`
//         else if(l1>r2){
//             high=cut1-1;
//         }
//         else{ 
//             low=cut1+1;
//         }
//     }
//     return -1;





#########################################################################################################################################
                                         GOD GIVE ME EVERYTHING
#########################################################################################################################################










