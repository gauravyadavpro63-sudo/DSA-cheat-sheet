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
}