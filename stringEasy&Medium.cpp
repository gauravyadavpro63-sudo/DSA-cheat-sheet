


#REMOVE OUTERMOST PARENTHISIS


// string remove_outermost_parenthisis(string a){
//     string ans;
//     int count=0;
//     for(auto it:a){
//         if(it=='('){
//             if(count>0){
//                 ans+=it;
//             }
//             count++;
//         }
//         else{
//          count--;
//          if(count>0){
//          ans+=it;
//          }
//         }
//     }
//     return ans;
// }




#REVERSE WORDS OF STRING



        // string word;
        // vector<string>totalword;
        // stringstream ss(s);
        // while(ss>>word){
        //     totalword.push_back(word);
        // }
        // string ans;
        // for(int i=totalword.size()-1;i>=0;i--){
        //    ans+=totalword[i];
        //    if(i!=0){
        //     ans+=" ";
        //    }
        // }

        // return ans;



        #LARGEST ODD NUMBER IN STRING


//         string largest_odd_number_in_string(string s){
//     int index=-1;
//     for(int i=s.size()-1;i>=0;i++){
//         if((s[i]-'0')%2==1){
//             index=i;
//             break;
//         }

//     }
//     if(index==-1){
//         return " ";
//     }

//     string ans=s.substr(0,index+1);
//     int start=0;
//  while(start<ans.size()&&ans[start]=='0'){
//     start++;
 
//     }
//     return ans.substr(start);
// }


#LONGEST COMMON PREFIX


// string longest_common_prefix(vector<string>arr){
//     string ans="";
//     if(arr.size()==0){
//         return "";
//     }
// for(int i=0;i<arr[0].size();i++){
//  char s=arr[0][i];
//  for(int j=1;j<arr.size();j++){
//     if(i>=arr[j].size()||s!=arr[j][i]){
//         return ans;
//     }
    
//  }
//  ans+=arr[0][i];
// }
// return ans;

// }



#IS STRING  ISOMORPHIC


// bool is_string_isomorphic(string s,string d){
//     unordered_map<char,char>mp1;
//     unordered_map<char,char>mp2;
//     if(s.size()!=d.size()){
//         return false;
//     }
//     for(int i=0;i<s.size();i++){
//         char a=s[i];
//         char b=d[i];
//          if(mp1.count(a)&&mp1[a]!=b){
//             return false;
//          }
//          if(mp2.count(b)&&mp2[b]!=a){ 
//             return false;
//          }
//          mp1[a]=b;
//          mp2[b]=a;
//     }
//     return true;
// }



#ROTATE STRING


//     if(s.size()!=goal.size()) return false;
    // for(int i=0;i<s.size();i++){
    //     if(s==goal){
    //         return true;
    //     }
    //     char k=s[0];
    //     s.erase(0,1);
    //     s+=k;

    // }
    // return false;
    // optimal solution



    #IS STRING ANAGRAM



//     bool is_string_anagram(string s,string k){
    // brute solution nlogn;
    // if(s.length()!=k.length()) return false;
    // sort(s.begin(),s.end());
    // sort(k.begin(),k.end());
    // if(s==k) return true;
    // else return false;
    // optimal solution
//     if(s.length()!=k.length()) return false;
//     int hashmap[26]={0};
//     for(int i=0;i<s.length();i++){
//         hashmap[s[i]-'a']++;
//         hashmap[k[i]-'a']--;
//     }
//     for(int i=0;i<26;i++){
//         if(hashmap[i]!=0) return false;
//     }
//     return true;
// }




#SORT CHARACTER BY FREQUENCY

// static bool rule(pair<char,int>a,pair<char,int>b){
//               if(a.second>b.second) return true;
//               if(a.second<b.second) return false;
//               return a.first<b.first;
//     }
//     string frequencySort(string s) {
        
//     unordered_map<char,int>mpp;
//     vector<pair<char,int>>ans;
//     for(auto it:s){
//         mpp[it]++;
//     }
//     for(auto it:mpp){
//         ans.push_back({it.first,it.second});
//     }
   
//     sort(ans.begin(),ans.end(),rule);
//     string final="";
//     for(auto it:ans){
//         for(int i=0;i<it.second;i++){
//             final.push_back(it.first);
//         }
//     }
//     return final;


//     }



MAX NO OF NESTED PARANTHISIS


// int max_number_of_nested_paranthesis(string s){
//     int currentdepth=0;
//     int maxdepth=0;
//     for(auto it:s){
//       if(it=='('){
//         currentdepth++;
//         maxdepth=max(currentdepth,maxdepth);
//       }
//       else if(it==')'){
//         currentdepth--;
//       }
//     }
//     return maxdepth;
// }




#ROMAN TO INTEGER




// int roman_to_integer(string s){
//     unordered_map<char,int>mpp={
//         {'I',1},
//         {'V',5},
//         {'X',10},
//         {'L',50},
//         {'C',100},
//         {'D',500},
//         {'M',1000}

//     };
//     int sum=0;
//     for(int i=0;i<s.size();i++){
//         if(i+1<s.size()&&mpp[s[i]]<mpp[s[i+1]]){
//         sum-=mpp[s[i]];
//         }
//         else{
//             sum+=mpp[s[i]];
//         }
//     }
//     return sum;
//     }



#STRING TO NUMBER 


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



#COUNT SUBSTRING HAVING  EXACTLY K DISTINCT CHARACTER




    // int solve(string s,int k){
    //     if(k<=0) return 0;
    //     unordered_map<char,int>hashmap;
    //     int count=0;
    //     int left=0;
    //     for(int right=0;right<s.size();right++){
    //         hashmap[s[right]]++;
    //         while(hashmap.size()>k){
                
    //           hashmap[s[left]]--;
    //           if(hashmap[s[left]]==0){
    //             hashmap.erase(s[left]);
    //           }
    //           left++;
    //         }
    //         count+=right-left+1;
    //     }
    //     return count;
    // }
    // int number_of_substring(string s,int k){
    //     return solve(s,k)-solve(s,k-1);
    // }

#LONGEST PALLINDROME

    //   unordered_map<char, int> freq;
    // int ans = 0;
    // bool odd = false;

    // for(char c : s) {
    //     freq[c]++;
    // }

    // for(auto it : freq) {
    //     ans += (it.second / 2) * 2;

    //     if(it.second % 2 == 1) {
    //         odd = true;
    //     }
    // }

    // if(odd) {
    //     ans++;

    // return ans;



    SUM OF BEAUTY OF ALL SUBSTRING(max freq-min freq of all subarray)


    //     int beautySum(string s) {
    //     int n=s.size();
    //     int ans=0;
    //     for(int i=0;i<n;i++){
    //         unordered_map<char,int>mpp;
    //         for(int j=i;j<n;j++){
    //             mpp[s[j]]++;

    //             int maxi=INT_MIN;
    //             int mini=INT_MAX;
    //             for(auto it:mpp){
    //                 maxi=max(maxi,it.second);
    //                 mini=min(mini,it.second);
    //             }
    //             ans+=maxi-mini;
    //         }
    //     }
    //     return ans;
    // }



    #REVERSE SENTENCE


    
// string reverseWords(string s) {
//     vector<string> words;
//     string word = "";

//     // Extract each word
//     for (char ch : s) {
//         if (ch != ' ') {
//             word += ch;
//         }
//         else if (!word.empty()) {
//             words.push_back(word);
//             word = "";
//         }
//     }

//     // Add the last word
//     if (!word.empty()) {
//         words.push_back(word);
//     }

//     // Build answer in reverse order
//     string ans = "";

//     for (int i = words.size() - 1; i >= 0; i--) {
//         ans += words[i];

//         if (i != 0) {
//             ans += ' ';
//         }
//     }

//     return ans;
// }
// ```
