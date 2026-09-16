// #find largest element in array
//   arr[0] largest lelo fir tranverse karo ise bare mile to wo largest O(n);

// #find second largest element in array
// int largest=arr[0];
// int slargest=-1;
// for(int i=1;i<n;i++){
//     if(arr[i]>largest){
//         slargest=largest;
//         largest=arr[i];
//     }
                            
//     else if(arr[i]<largest&&arr[i]>slargest){
//         slargest=arr[i];
//     }
// }
// return slargest;
// }



// #check if array is sorted and rotated
   
    // bool check(vector<int>& nums) {

    //     int n = nums.size();
    //     int count = 0;

    //     for (int i = 0; i < n; i++) {

    //         if (nums[i] > nums[(i + 1) % n]) {
    //             count++;
    //         }

    //     }

    //     return count <= 1;
    // }

    // #remove duplicate from array and return no of unique elements
//     int i=0;
// for(int j=1;j<n;j++){
//     if(arr[i]!=arr[j]){
//         arr[i+1]=arr[j];
//         i++;
//     }
// }
// return i+1;
// }


// #rotate_left
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     return arr;
// }

// #rotate d places
        //brute 
        // tc=O(n+d);
        // sc(extra) c=O(d);
        // d=d%n;
    //     vector<int>temp;
    //     for(int i=0;i<d;i++){
    //         temp.push_back(arr[i]);
    //     }
    //     for(int i=d;i<n;i++){
    //         arr[i-d]=arr[i];
    //     }
    //     for(int i=n-d;i<n;i++){
    //         arr[i]=temp[i-(n-d)];
    //     }
    //      return arr;
    // }
    // optimal  solution  tc=O(n) sc=O(1);  
    // reverse(arr.begin(),arr.begin()+d);
    // reverse(arr.begin()+d,arr.end()); 
    // reverse(arr.begin(),arr.end());
    // return arr;

    // #reverse array

//     void reverseArray(vector<int>& arr) {

//     int left = 0;
//     int right = arr.size() - 1;

//     while (left < right) {

//         swap(arr[left], arr[right]);

//         left++;
//         right--;
//     }
// }

// #all zero at right

    //     vector<int> temp;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]!=0){
    //             temp.push_back(arr[i]);
    //         }
    //     }
    //     int non_zero=temp.size();
    //     for(int i=0;i<non_zero;i++){
    //         arr[i]=temp[i];
    //     }
    //     for(int i=non_zero;i<n;i++){
    //         arr[i]=0;
    //     }
    //     return arr;
    // optimal solution tc=O(n),sc=O(1)
    // int j=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0){
    //         j=i;
    //         break;
    //     }
    // }
    // if(j==-1){
    //     return arr;
    // }
    // for(int i=j+1;i<n;i++){
    //     if(arr[i]!=0){
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }
    // return arr;

    // }


    // #unnion of two sorted array

    // brute--> set me daal do dono ko
    // optimal--> two pointer 
    //     int n1=a.size();
    // int n2=b.size();
    // int i=0;
    // int j=0;
    // vector<int>unionarr;
    // while(i<n1&&j<n2){
    //     if(a[i]<=b[j]){
    //         if(unionarr.size()==0||unionarr.back()!=a[i]){
    //             unionarr.push_back(a[i]);
    //         }
    //         i++;
    //     }
    //     else{
    //         if(unionarr.size()==0||unionarr.back()!=b[j]){
    //             unionarr.push_back(b[j]);
    //         }
    //         j++;
    //     }
    // }
    //     while(j<n2){
    //          if(unionarr.size()==0||unionarr.back()!=b[j]){
    //             unionarr.push_back(b[j]);
    //         }
    //         j++;
         
    //     }
    //     while(i<n1){
    //         if(unionarr.size()==0||unionarr.back()!=a[i]){
    //             unionarr.push_back(a[i]);
    //         }
    //         i++;
    //     }
    //     return unionarr;
    // }

    //  #intersection of two sorted array 

    //     int i=0;
    // int j=0;
    // vector<int>ans;
    // while(i<n&&j<m){
    //     if(a[i]<b[j]){
    //         i++;
    //     }
    //     else if(b[j]<a[i]){
    //         j++;
    //     }
    //     else{
    //         ans.push_back(a[i]);
    //         i++;
    //         j++;
    //     }
    // }
    // return ans;


    // #find missing number between 1 to n
     // int sum=(5*6)/2;
    // int s2=0;
    // for(int i=0;i<4;i++){
    //     s2+=arr[i];
    // }
    // return (sum-s2);

    //   int xor1=0;
    // int xor2=0;
    // for(int i=0;i<4;i++){
    //    xor2=xor2^arr[i];
    //    xor1=xor1^(i+1);
    // }
    // xor1=xor1^5;
    // return xor1^xor2;


    // #total consicutive one in array
    //     int maxi=0;
    //     int cnt=0;
    //     for(int i=0;i<4;i++){
    //         if(arr[i]==1){
    //             cnt++;
    //             maxi=max(maxi,cnt);
    //         }
    //         else{
    //             cnt=0;
    //         }
    //     }
    //     return maxi;


    // #find the number that appear once and other twice
    // brute---->unordered  map
        //       int xor1=0;
        // for(int i=0;i<5;i++){
        //     xor1=xor1^arr2[i];
        // }
        // return xor1;


        // longest subarray sum equal to k

         // map<long long,int>presummap;
    // long long sum=0;
    // int maxlen=0;
    // for(int i=0;i<a.size();i++){
    //     sum+=a[i];
    //     if(sum==k){
    //         maxlen=max(maxlen,i+1);
    //     }
    //     long long rem=sum-k;
    //     if(presummap.find(rem)!=presummap.end()){
    //     int len=i-presummap[rem];
    //     maxlen=max(maxlen,len);
    //     }
    //     if( presummap.find(sum)==presummap.end() ){    /*to taccle 0 in array and  push sum in presumap*/
    //         presummap[sum]=i;
    // }
    // }

    // return maxlen;
    // optimal solution tc=O(2n) sc=(1)   if only positives and zero in array 
    // int left =0,right=0;
    // long long sum=a[0];
    // int maxlen=0;
    // int n=a.size ();
    // while(right<n){
    //     while(left<=right&&sum>k){
    //         sum-=a[left];
    //         left++;
    //     }
    //     if(sum==k){
    //         maxlen=max(maxlen,right-left+1);
    //     }
    //     right++;
    //     if(right<n){
    //         sum+=a[right];
    //     }
    // }
    // return maxlen;


    ####################### GOD GIVE ME EVERYTHING ##########################






