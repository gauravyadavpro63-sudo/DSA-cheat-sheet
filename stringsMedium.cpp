


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