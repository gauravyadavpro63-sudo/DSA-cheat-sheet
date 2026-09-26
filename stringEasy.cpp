


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