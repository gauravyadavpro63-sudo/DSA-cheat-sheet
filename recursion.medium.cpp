
#GENERATE ALL BINARY STRING WITHOUT CONSECUTIVE 1

                         ""
                    /          \
                  0              1
                /   \            |
              00     01         10
             / \      |        /  \
           000 001   010     100  101

// using namespace std;
// void totalstring(string &current,vector<string>&ans,int n){
// if(current.size()==n){
//     ans.push_back(current);
//     return;
// }
// current.push_back('0');
// totalstring(current,ans,n);                                                 
// current.pop_back();

// if(current.size()==0||current.back()=='0'){
//     current.push_back('1');
//     totalstring(current,ans,n);
//     current.pop_back();
// }

// }
// void generate_all_binary_string(int n){
//     vector<string>ans;
//     string current="";
//     totalstring(current,ans,n);
//     for(auto it:ans){
//         cout<<it<<" ";
//     }}






#GENERATE ALL PARANTHESIS


                         ""
                         |
                        "("
                      /     \
                    "(("     "()"
                     |        |
                    "(()"    "()("
                     |        |
                   "(())"   "()()"

// void solve(vector<string>&ans,string &current,int open,int close,int n){
//     if(current.size()==2*n){
//         ans.push_back(current);
//         return;
//     }
//     if(open<n){
//         current.push_back('(');
//         solve(ans,current,open+1,close,n);
//         current.pop_back();
//     }
//     if(close<open){
//         current.push_back(')');
//         solve(ans,current,open,close+1,n);
//         current.pop_back();
//     }
// }
// void generate_all_parenethesis(int n){
//     vector<string>ans;
//     string current="";
//     int open=0;
//     int close=0;
//     solve(ans,current,open,close,n);

//     for(auto it:ans){
//         cout<<it<<" ";
//     }
// }


#GENERATE ALL SUBSEQUENCE OF STRING 


// void solve(string current,int index,string s){

                         ""
                    /          \
                  "a"           ""
                /    \        /    \
             "ab"    "a"     "b"     ""
             / \     / \     / \     
          "abc" "ab" "ac" "a" "bc" "b" "c" ""
     
     
     
//           if(index==s.size()){
//         cout<<"\""<<current<<"\""<<endl;
//         return;
//       }
//       solve(current+s[index],index+1,s);
//       solve(current,index+1,s);
// }
// void generate_all_subsequence_of_string(string s){


//     // version:1 tc=O(n*2^n) for version 2 same tc
//     // int n=s.length();
//     // int total=1<<n;
//     // for(int x=0;x<total;x++){
//     //     for(int i=0;i<n;i++){
//     //         if(x&(1<<i)){
//     //             cout<<s[i];
//     //         }
//     //     }
//     //     cout<<endl;
//     // }

//     int index=0;
//     int n=s.size();
//     string current="";
//     solve(current,index,s);
// }




#PRINT ALL SUBSEQUENCE OF TARGET SUM


                         solve(0, 0)
                        /           \
                  Pick 1           Not Pick 1
                   /                   \
             solve(1, 1)             solve(1, 0)
              /       \               /       \
          Pick 2    Not Pick 2     Pick 2    Not Pick 2
            /           \             /          \
      solve(2, 3)   solve(2, 1)  solve(2, 2)  solve(2, 0)
         /   \         /   \        /   \        /   \
      Pick  Not     Pick  Not    Pick  Not    Pick  Not
       1     1       1     1      1     1      1     1
       |     |       |     |      |     |      |     |
       4     3       2     1      3     2      1     0
       ✗     ✗       ✓     ✗      ✗     ✓      ✗     ✗



// void solve(int index,vector<int>&ans,int sum,vector<int>arr,int solving){
//   if(index==arr.size()){
//     if(solving==sum){
//         for(auto it:ans){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }
//     return;
//   }
//   ans.push_back(arr[index]);
//   solving+=arr[index];
//   solve(index+1,ans,sum,arr,solving);
//   ans.pop_back();
//   solving-=arr[index];
//   solve(index+1,ans,sum,arr,solving);
// }
// void print_all_subsequence_of_sum_2(int sum,vector<int>arr){
// int index=0;
// vector<int>ans;
// int solving=0;
// solve(index,ans,sum,arr,solving);
// }




#PRINT ONE SUBSEQUNCE OF TARGET SUM


                       solve(0, 0)
                      /           \
                 Pick 1          Not Pick 1
                    /                 \
             solve(1, 1)           NOT EXPLORED
              /       \
         Pick 2      Not Pick 2
            /             \
      solve(2, 3)       solve(2, 1)
        /     \           /      \
    Pick 1  Not Pick 1  Pick 1  Not Pick 1
       |        |          |         |
   sum = 4   sum = 3    sum = 2    sum = 1
       ✗        ✗          ✓         -
                         PRINT
                         {1, 1}
                            |
                       return true
                            |
                   Stop further calls




// bool solve(int index,vector<int>&ans,int solving,vector<int>arr,int sum){
//     if(index==arr.size()){
//         if(solving==sum){
//             for(auto it:ans){
//                 cout<<it<<" ";
//             }
//             return true;
//         }
//         return false;
//     }
//     ans.push_back(arr[index]);
//     solving+=arr[index];
//     if(solve(index+1,ans,solving,arr,sum)==true) return true;
//     ans.pop_back();
//     solving-=arr[index];
//     if(solve(index+1,ans,solving,arr,sum)==true) return true;

//     return false;

// }
// void print_one_subsequence_of_sum_2(int sum,vector<int>arr){
//     int index=0;
//     vector<int>ans;
//     int solving=0;
//     solve(index,ans,solving,arr,sum);


#NO OF SUBSEQUENCE OF TARGET SUM 


// int solve(int index,int solving,vector<int>arr,int sum){
//  if(index==arr.size()){
        // if(solving==sum){
//             return 1;
//         }
//         return 0;
//      }
//      solving+=arr[index];
//      int l=solve(index+1,solving,arr,sum);
//      solving-=arr[index];
//      int r=solve(index+1,solving,arr,sum);
//      return l+r;
// }
// int no_of_subsequence_of_sum_2(int sum,vector<int>arr){
//     int index=0;
//     int solving=0;
//    return solve(index,solving,arr,sum);
// }


#Find all combinations of array elements whose sum equals the target



// void solve(vector<int>arr,int target,vector<int>&current,vector<vector<int>>&ans,int index){
//   if(index==arr.size()){
//     if(target==0){
//         ans.push_back(current);
//     }
//     return ;
//   }
//   if(arr[index]<=target){
//     current.push_back(arr[index]);
//     solve(arr,target-arr[index],current,ans,index);
//     current.pop_back();
//   }
//   solve(arr,target,current,ans,index+1);
// }


// void combination_sum(vector<int>arr,int target){
// vector<int>current;
// vector<vector<int>>ans;
// int index=0;
// solve(arr,target,current,ans,index);
// for(auto it :ans){
//     for(auto x:it){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }


#COMBINATION SUM TWO 



                         solve(index=0, sum=0)
                                  [ ]
                           /              \
                       PICK 1           NOT PICK 1
                         /                  \
               solve(index=1, sum=1)   solve(index=1, sum=0)
                       [1]                    [ ]
                    /       \              /       \
                PICK 2    NOT PICK 2    PICK 2    NOT PICK 2
                  /           \            /          \
        solve(2, sum=3)   solve(2, sum=1) solve(2, sum=2) solve(2, sum=0)
              [1,2]             [1]           [2]           [ ]
             /    \             /  \          /  \          /  \
          PICK   NOT         PICK  NOT      PICK  NOT    PICK  NOT
           2      2           2     2        2     2      2     2
           |      |           |     |        |     |      |     |
        sum=5   sum=3       sum=3  sum=1    sum=4 sum=2  sum=2 sum=0
          ✗       ✓           ✓     ✗        ✗     ✗      ✗     ✗



//  brute forcea tc=2^n*logk where k in number of stored answer in k
// void  solve(vector<int>&candidates,
//           int target,
//           set<vector<int>>&ans,
//           int index,
//           vector<int>&current,
//           int solving)
// {
// if(index==candidates.size()){
//     if(solving==target){
//         ans.insert(current);
//     }
//     return;
// }
// current.push_back(candidates[index]);
// solving+=candidates[index];
// solve(candidates,target,ans,index+1,current,solving);
// current.pop_back();
// solving-=candidates[index];
// solve(candidates,target,ans,index+1,current,solving);
        
// }
//     vector<vector<int>> combinationII(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         set<vector<int>>ans;
//         vector<vector<int>>ans1;
//         int index=0;
//         vector<int>current;
//         int solving=0;
//         solve(candidates,target,ans,index,current,solving);
//         for(auto it:ans){
//            ans1.push_back(it);
//         }
//         return ans1;
//     }


// OPTIMAL SOLUTION


// optimal solution tc=2^n*k(where k is total uniqu combination)
// void solve(vector<int>arr,int target,vector<vector<int>>&ans,vector<int>&current,int index){
    
//         if(target==0){
//             ans.push_back(current);
//             return;
//         }
        
    
//     for(int i=index;i<arr.size();i++){
//         if(i>index&&arr[i]==arr[i-1]){
//             continue;
//         }
//         if(arr[i]>target){
//             break;
//         }
//         current.push_back(arr[i]);
//         solve(arr,target-arr[i],ans,current,i+1);
//         current.pop_back();
//     }
// }
// void combinationII(vector<int>arr,int target){
//     vector<vector<int>>ans;
//     sort(arr.begin(),arr.end());
//     vector<int>current;
//     int index=0;
//     solve(arr,target,ans,current,index);
//     for(auto it:ans){
//         for(auto x:it){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
// }