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


    






