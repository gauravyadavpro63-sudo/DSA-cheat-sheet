

                    #CONVERT STRING TO NUMBER




//    long long solve(int i,string &s,long long value,int sign){
//     if(i>=s.size()||!isdigit(s[i])){
//         return value;
//     }
//     int digit=s[i]-'0';
//     long long limit;
//     if(sign==1){
//         limit=INT_MAX;
//     }
//     else{
//         limit=-(long long)INT_MIN;
//     }
//     if(value>limit/10||(value==limit&&digit>limit%10)){
//         return limit;
//     }
//     value=value*10+digit;
//      return solve(i+1,s,value,sign);
//    }
//     int myAtoi(string s) {
//               int i=0;
//       while(i<s.size()&& s[i]==' ') i++;
//       int sign=1;
//       if(i<s.size()&&(s[i]=='-'||s[i]=='+')){
//         if(s[i]=='-') sign=-1;
//         i++;
//       }
//       long long value=solve(i,s,0,sign);
//       value*=sign;
//       if(value>INT_MAX) return INT_MAX;
//       if(value<INT_MIN) return INT_MIN; 
//       return value;
//     }




#     MY PAW()



// double myownpow(double base,int exponential){
// brute force tc=O(n) sc=O(1)
// long long n=exponential;
// if(n<0){
//     base=1.0/base;
//     n=-n;
// }

// double ans=1.0;
// for(int i=0;i<n;i++){
//    ans=ans*base;
// }
// return ans;
// optimal solution tc=O(logn) sc=O(1);




// long long  n=exponential;
// if(n<0){
//     base=1.0/base;
//     n=-n;
// }
// double ans=1;
// while(n){
//     if(n%2==1){
//         ans*=base;
//        n=n-1;
//     }
//     else{
//       base*=base;
//       n/=2;
//     }
// }
// return ans;
// }

just rounding of with mod

// long long mod=1e9+7;
// long long value(long long base,long long expo){
//     long long ans=1;
//     while(expo){
//         if(expo%2==1){
//           ans=ans*base%mod;
//           expo=expo-1;
//          }
//         else{
//           base=base*base%mod;
//           expo=expo/2;
//         }
//     }
//     return ans%mod;
// }


#GOOD NUMBER



// long long mod=1e9+7;
// long long value(long long base,long long expo){
//     long long ans=1;
//     while(expo){
//         if(expo%2==1){
//           ans=ans*base%mod;
//           expo=expo-1;
//          }
//         else{
//           base=base*base%mod;
//           expo=expo/2;
//         }
//     }
//     return ans%mod;
// 
// long long goodnumber(long long n){
    // long long even=(n+1)/2;
    // long odd=n/2;
    // return (value(5,even)*value(4,odd))%mod;
// }



#ELEMENT IN DECRESING ORDER IN STACK


// void stack_element_in_decresing_order(stack<int>&st){
//  stack<int>temp;

// while(!st.empty()){
//     int x=st.top();
//     st.pop();
//     while(!temp.empty()&&x>temp.top()){
//        st.push(temp.top());
//        temp.pop();
//     }
//     temp.push(x);
// }
// while(!temp.empty()){
//     st.push(temp.top());
//     temp.pop();
// }
// }


#RECURSIVE SOLUTION 

// Void insert(stack<int>& st, int x) {

//     // Correct position found
//     if(st.empty() || st.top() <= x) {
//         st.push(x);
//         return;
//     }

//     // Remove top element temporarily
//     int y = st.top();
//     st.pop();

//     // Insert x in the correct position
//     insert(st, x);

//     // Put y back
//     st.push(y);
// }

// void stack_element_in_decreasing_order(stack<int>& st) {

//     // Base case
//     if(st.empty()) {
//         return;
//     }

//     // Remove top element
//     int x = st.top();
//     st.pop();

//     // Sort remaining stack
//     stack_element_in_decreasing_order(st);

//     // Insert x at correct position
//     insert(st, x);
// }

