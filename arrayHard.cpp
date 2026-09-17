#pascal triangle 
// finding element of pascal trangle at given row and column;
// direct formula row-1 C column-1.  which you can further solve and simplify to this
// tc=O(c) sc=O(1);
// int pascal_triangle_element(int r ,int c){
//     int res=1;
//     for(int i=0;i<c;i++){
//         res=res*(r-i);
//         res=res/(i+1);
//     }
//     return res;
// }
// there always will be same number of row and columns
// int pascal_triangle_row(int row){
    // tc=O(c*r) sc=O(1)
    // for(int c=1;c<=row;c++) {/*n rows n element*/
    // int res=pascal_triangle_element(row-1,c-1);
    // cout<<res<<" ";
    // }
    // better tc=O(n) sc=O(1)
//     int ans=1;
//     cout<<ans<<" ";
//     for(int i=1;i<row;i++){
//         ans=ans*(row-i);
//         ans=ans/(i);
//         cout<<ans<<" ";
//     }
    
// }
// vector<int>generateRow(int row){
//     long long ans=1;
//     vector<int>ansrow;
//     ansrow.push_back(1);
//     for(int i=1;i<row;i++){
//         ans=ans*(row-i);
//         ans=ans/i;
//         ansrow.push_back(ans);
//     }
//     return ansrow;
// }
// vector<vector<int>>pascal_triangle(int n){
//     vector<vector<int>>ans;
//     for(int i=1;i<=n;i++){
//         ans.push_back(generateRow(i));
//     }
//     return ans;
// }


// #elements appear more than n/3 times (MAJORITY ELEMENT 2)

     // better sc =O(n*logn) sc=O(n)
    // map<int,int>mpp;
    // vector<int>ls;
    // for(int i=0;i<8;i++){
    //     mpp[arr[i]]++;
    //     if(mpp[arr[i]]>n/3){
    //         ls.push_back(arr[i]);
    //     }
    // }
    
    // return ls;
    // optimal solution sc=O(2n) tc=O(n)
    // int cnt1=0,cnt2=0;
    // int el1=INT_MIN;
    // int el2=INT_MIN;
    // for(int i=0;i<8;i++){
    //     if(cnt1==0&&el2!=arr[i]){
    //         cnt1=1;
    //         el1=arr[i];
    //     }
    //     else if(cnt2==0&&el1!=arr[i]){
    //         cnt2=1;
    //         el2=arr[i];
    //     }
    //     else if(arr[i]==el1) cnt1++;
    //     else if(arr[i]==el2) cnt2++;
    //     else{
    //         cnt1--,cnt2--;
    //     }
    // }
    // vector<int>ls;
    // cnt1=0,cnt2=0;
    // for(int i=0;i<8;i++){
    // if(el1==arr[i]) cnt1++;
    // if(el2==arr[i]) cnt2++;
    // }
    // int mini=(int)(8/3)+1;
    // if(cnt1>=mini) ls.push_back(el1);
    // if(cnt2>=mini) ls.push_back(el2);
    // sort(ls.begin(),ls.end());
    // return ls;


    // #sum of three elemets in array equal to 0 (3SUM)

    
    // better tc=O(n*nlog(m)) sc=O(n)+  O(no of unique triplet*2)
    // int n=num.size();
    // set <vector<int>>st;
    // for(int i=0;i<n;i++){
    //     set<int>hashset;
    //     for(int j=i+1;j<n;j++){
    //         int third=-(num[i]+num[j]);
    //         if(hashset.find(third)!=hashset.end()){
    //             vector<int>temp={num[i],num[j],third};
    //             sort(temp.begin(),temp.end());
    //             st.insert(temp);
    //         }
    //         hashset.insert(num[j]);
    //     }
    // }
    // vector<vector<int>>ans(st.begin(),st.end());
    // return ans;

    // optimal sc=O(nlogn+n*n) tc=O(no of unique elements6)
//     int n=num.size();
//     vector<vector<int>>ans;
//     sort(num.begin(),num.end());
//     for(int i=0;i<n;i++){
//         if(i>0&&num[i]==num[i-1]) continue;
//         int j=i+1;
//         int k=n-1;
//         while(j<k){
//             int sum=num[i]+num[j]+num[k];
//             if(sum<0){
//                 j++;
//             }
//             else if(sum>0){
//                 k--;
//             }
//             else{
//                 vector<int>temp={num[i],num[j],num[k]};
//                 ans.push_back(temp); 
//                 j++;
//                 k--;
//                 while(j<k&&num[j]==num[j-1])j++;
//                 while(j<k&&num[k]==num[k+1])k--;
//             }
//         }
//     }
// return ans;
// }


// #sum of four elements in array equal to 0 (4SUM)
// better tc=O(n*n*n*log(m) sc=O(n)+O(quards*2)); 
//     int n=num.size();
//     set<vector<int>>st;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             set<long long>hashset;
//             for(int k=j+1;k<n;k++){
//                 long long sum=num[i]+num[j];
//                 sum+=num[k];
//                 long long fouth=0-(sum);
//                 if(hashset.find(fouth)!=hashset.end()){
//                     vector<int>temp={num[i],num[j],num[k],(int)fouth};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(num[k]);
//             }
//         }
//     }
//   vector<vector<int>>ans(st.begin(),st.end());
//   return ans;
// optimal solution
// int n=num.size();
// vector<vector<int>>ans;
// sort(num.begin(),num.end());
// for(int i=0;i<n;i++){
//     if(i>0&&num[i]==num[i-1]) continue;
//     for(int j=i+1;j<n;j++){
//         if(j!=(i+1)&&num[j]==num[j-1]) continue;
//         int k=j+1;
//         int l=n-1;
//         while(k<l){
//             long long sum=num[i];
//             sum+=num[j];
//             sum+=num[k];
//             sum+=num[l];
//             if(sum==0){
//                 vector<int>temp={num[i],num[j],num[k],num[l]};
//                 ans.push_back(temp);
//                 k++; l--;
//                 while(k<l&&num[k]==num[k-1]) k++;
//                 while(k<l&&num[l]==num[l+1]) l--;
//             }
//             else if(sum<0) k++;
//             else l--;
//         }
//     }
// }
// return ans;
// }


// #largest subarray with zero sum
    // optimal solution tc=O(nlogn) sc=O(n)
//     unordered_map<int,int>mpp;
//     int n=num.size();
//     int maxi=0;
//     int sum=0;
//     for(int i=0;i<n;i++){
//       sum+=num[i];
//       if(sum==0){
//         maxi=i+1;
//       }
//       else{
//         if(mpp.find(sum)!=mpp.end()){
//             maxi=max(maxi,i-mpp[sum]);
//         }
//         else{
//             mpp[sum]=i;
//         }
//       }
//     }
//     return maxi;
// }


// #subarray with xor as k
  
    // better tc=O(n*n) sc=(1)
    //    int cnt=0;
    //   for(int i=0;i<5;i++){
    //     int XOR=0;
    //     for(int j=i;j<5;j++){
    //         XOR=XOR^arr[j];
    //         if(XOR==k)cnt++;

    //     }
    //   }
    //   return cnt;
    // }
    // optimal solution  reverse enginerring 3.0 ;
    // use formula x=XOR^K sc=O(n) tc=O(nlogn)
    // int XOR=0;
    //     map<int,int>mpp;
    //     mpp[XOR]++;//{0,1}
    //     int cnt=0;
    //     for(int i=0;i<5;i++){
    //         XOR=XOR^arr[i];
    //         int x=XOR^k;
    //         cnt+=mpp[x];
    //         mpp[XOR]++;
    //     }
 //     return cnt;
// }


// #merge overlaping subintervals


    // vector<vector<int>> merge(vector<vector<int>>& interval) {

    //         int n=interval.size();
    // vector<vector<int>>ans;
    // sort(interval.begin(),interval.end());
    // ans.push_back(interval[0]);
    // for(int i=1;i<n;i++){
    //     int start=interval[i][0];
    //     int end=interval[i][1];
    //     if(start<=ans.back()[1]){
    //         ans.back()[1]=max(ans.back()[1],end);
    //     }
    //     else{
    //         ans.push_back({start,end});
    //     }

    // }
    // return ans;
    // }



    // #merge two sorted array
        // brute tc=O(n+m)+O(n+m) sc=O(n+m);
    // int n=4;
    // int m=5;
    // int arr3[n+m];
    // int left=0;
    // int right=0;
    // int index=0;
    // while(left<n&&right<m){
    //     if(arr1[left]<=arr2[right]){
    //         arr3[index]=arr1[left];
    //         left++;index++;
    //     }
    //     else{
    //         arr3[index]=arr2[right];
    //         right++,index++;
    //     }
    // }
    // while(left<n){
    //     arr3[index++]=arr1[left++];
    // }
    // while(right<m){
    //     arr3[index++]=arr2[right++];
    // }
    
    // for(int i=0;i<n+m;i++){
    //     if(i<n) arr1[i]=arr3[i];
    //     else arr2[i-n]=arr3[i];
    // }

    // optimal tc=O(min(n,m)) +nlogn+mlogm sc=O(1);
    // int n=4;
    // int m=5;
    // int left=n-1;
    // int right=0;
    // while(left>=0&&right<m){
    //     if(arr1[left]>arr2[right]){
    //         swap(arr1[left],arr2[right]);
    //         left--,right++;
    //     }
    //     else{
    //         break;
    //     }

    // }
    // sort(arr1,arr1+n);
    // sort(arr2,arr2+m);

    // #find missing and repeating number
    // brute--->n*n
    // better--->hashmap
    // optimal--->
       // optimal 1 tc=O(n) sc=O(1);
    // long long n=arr.size();
    // // s-Sn=x-y     //repeating-missing
    // // s2-S2n=Xsq-Ysq
    // long long Sn=(n*(n+1))/2;
    // long long S2n=(n*(n+1)*(2*n+1))/6;
    // long long s=0,s2=0;
    // for(int i=0;i<n;i++){
    //     s+=arr[i];
    //     s2+=(long long)arr[i]*(long long)arr[i];
    // }
    // long long val1=s-Sn;//x-y
    // long long val2=s2-S2n;
    // val2=val2/val1; //x+y
    // long long x=(val1+val2)/2;
    // long long y=x-val1;
    // return {(int)x,(int)y};


// # count no of pairs in which first element is greater than second element (count inversions);
// brute --->n*n 
// optimal solution--->tc=O(nlogn ) sc=O(n)
// int merging(vector<int> &arr,int low,int mid,int high){
//     int cnt=0;
//      vector<int> temp;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid&&right<=high){
//        if(arr[left]<=arr[right]){
//         temp.push_back(arr[left]);
//         left++;
//        }
//        else{
//         cnt+=mid-left+1;
//         temp.push_back(arr[right]);
//         right++;
//        }
//     }
//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
//     return cnt;
// }
// int merge_sort(vector<int> &arr,int low,int high){
//     int cnt=0;
//     if(low>=high) return cnt;
//     int mid=(low+high)/2;
//     cnt+=merge_sort(arr,low,mid);
//     cnt+=merge_sort(arr,mid+1,high);
//     cnt+=merging(arr,low,mid,high);
//     return cnt;
// }
// int count_inversions2(vector<int> &arr){
//     int n=arr.size();
//     return merge_sort(arr,0,n-1);
// }
// int main(){
//     vector<int>arr={5,3,2,4,1};
//     // cout<<count_inversions(arr);
//     cout<<count_inversions2(arr);

// }



// # no of pairs in which left element is greater than right by 2 times (reverse pair)
// brute --->n*n
// optimal solution---> we use anther function becase useing it like before will disturb the sorting alogo due to 2*n codition 

// optimal solution sc=O(n) tc= logn*(n+n)=2nlogn
// void merging(vector<int>&arr,int low,int mid,int high){
//    int left=low;
//    int right=mid+1;
//    vector<int>temp;
//    while(left<=mid&&right<=high){
//     if(arr[left]<=arr[right]) {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     else{
//         temp.push_back(arr[right]);
//         right++;
//     }
//    }
//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }
// int count_pairs(vector<int>&arr,int low,int mid,int high){
//     int cnt=0;
//     int right=mid+1;
//     for(int i=low;i<=mid;i++){
//         while(right<=high&&arr[i]>(long long)2*arr[right]){
//             right++;
//         }
//         cnt+=right-(mid+1);
//     }
//     return cnt;
// }
// int merge_sort(vector<int> &arr,int low,int high){
//     int cnt=0;
//     int mid=(low+high)/2;
//     if(low>=high) return cnt;
//     cnt+=merge_sort(arr,low,mid);
//     cnt+=merge_sort(arr,mid+1,high);
//     cnt+=count_pairs(arr,low,mid,high);
//     merging(arr,low,mid,high);
//     return cnt;
// }
// int reverse_pairs(vector<int>& arr){
//     int n=arr.size();
//  return merge_sort(arr,0,n-1);
// }



// #maximum product subarray
// brute --->n*n
// optimal 
    // optimal solutin  sc=O(1) tc=O(n):
//     int n=arr.size();  // age-piche algoritm
//     int prefix=1;
//     int suffix=1;
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         prefix*=arr[i];
//         suffix*=arr[n-i-1];
//         maxi=max(maxi,max(prefix,suffix));
//          if(prefix==0) prefix=1;
//         if(suffix==0) suffix=1;

//     }
//     return maxi;

// }



#######################################################################################
                               GOD GIVE ME EVERYTHING
#######################################################################################


