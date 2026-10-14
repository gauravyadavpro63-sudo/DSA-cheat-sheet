



#COMBINATION SUM III




// void solve(vector<vector<int>>&ans,vector<int>&current,int k,int n,int start){
//     if(current.size()==k){
//         if(n==0){
//             ans.push_back(current);
//         }
//         return;
//     }
//     for(int i=start;i<=9;i++){
//        current.push_back(i);
//        solve(ans,current,k,n-i,i+1);
//        current.pop_back();
//     }

// }
// void combinationIII(int k,int n){
//     vector<vector<int>>ans;
//     vector<int>current;

//     int sum=0;
//     int start=1;
//     solve(ans,current,k,n,start);
//     for(auto it:ans){
//         for(auto k:it){
//             cout<<k<<" ";
//         }
//         cout<<endl;
//     }
// }

#LETTER COMBINATION OF PHONE NUMBER

// void solve(vector<string>&ans,string &current,int index,vector<string>letters,string digits){
//     if(index==digits.size()){
//         ans.push_back(current);
//         return;
//     }
//     string currentletter=letters[digits[index]-'0'];
//     for(char ch:currentletter){
//        current.push_back(ch);
//        solve(ans,current,index+1,letters,digits);
//        current.pop_back();
//     }
// }
// void letter_combination_of_phone_number(string digits){
//     vector<string>ans;
//     string current;
//     int index=0;
//     if(digits.size()==0){
//         return ;
//     }
//     vector<string>letters={
//         "","","abc","def",
//         "ghi","jkl","mno",
//         "pqrs","tuv","wxyz"
//     };
//     solve(ans,current,index,letters,digits);
//     for(auto it:ans){
//         cout<<it<<" ";
//     }
// }



#PALLINDROME PARTIONING 

// bool pallindrome(int left,int right,string s){
//    while(left<right){
//     if(s[left]!=s[right]) return false;
//     left++;
//     right--;
//    }
//    return true;
// }
// int solve(string s,int index){
// if(index==s.size()) return 0;
// int mini=INT_MAX;
// for(int i=index;i<s.size();i++){
//     if(pallindrome(index,i,s)){
//     int segment=1+solve(s,i+1);
//     mini=min(segment,mini);
//     }
// }
//     return mini;
// }
// // tc=O(n*2^n) sc=O(n)
// int palindrom_partioning(string s){
//   int  index=0;
//     int cuts=solve(s,index)-1;
//     return cuts;
// }


#WORD SEARCH

// bool possibility(vector<vector<char>>&board,string &word,int rows,int columns,int index){
//     if(index==word.size()){
//         return true;
//     }
//     if(rows<0||columns<0||rows>=board.size()||columns>=board[0].size()||(word[index]!=board[rows][columns])){
//         return false;
//     }
//     char temp=board[rows][columns];
//     board[rows][columns]='#';
    
//     bool found=possibility(board,word,rows+1,columns,index+1)||possibility(board,word,rows-1,columns,index+1)||possibility(board,word,rows,columns-1,index+1)||possibility(board,word,rows,columns+1,index+1);
    
//     board[rows][columns]=temp;
//     return found;



// }
// bool word_search(vector<vector<char>>&board,string &word){
//    int index=0;
//    int rows=board.size();
//    int columns=board[0].size();
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<columns;j++){
//         if(possibility(board,word,i,j,index)){
//             return true;
//         }
//     }
//    }
//    return false;
// }


#N-QUEEN



// bool save(vector<string>&board,int column,int row,int n){
// int drow=row;
// int dcolumn=column;
// while(row>=0&&column>=0){
//      if(board[row][column]=='Q') return false;
//     row--;
//     column--;
// }
// row=drow;
// column=dcolumn;
// while(column>=0){
//     if(board[row][column]=='Q')  return false;
//     column--;
// }
// column=dcolumn;
// while(column>=0&&row<n){
//     if(board[row][column]=='Q') return false;
//     row++;
//     column--;
// }
// return true;


// }
// void solve(vector<string>&board,vector<vector<string>>&ans,int column,int n){
// if(column==n){
//     ans.push_back(board);
//     return;
// }
// for(int row=0;row<n;row++){
//  if(save(board,column,row,n)==true){
//     board[row][column]='Q';
//     solve(board,ans,column+1,n);
//     board[row][column]='.';
//  }
// }
// }


// void solve(int n,vector<string>&board,vector<vector<string>>&ans,int column,vector<int>&hashrow,vector<int>&lowerdiagonal,vector<int>&upperdiagonal){
//     if(column==n){
//         ans.push_back(board);
//         return ;
//     }
//     for(int row=0;row<n;row++){
//         if(hashrow[row]==0&&lowerdiagonal[row+column]==0&&upperdiagonal[n-1+(row-column)]==0){
//             board[row][column]='Q';
//             hashrow[row]=1;
//             lowerdiagonal[row+column]=1;
//             upperdiagonal[n-1+(row-column)]=1;
//             solve(n,board,ans,column+1,hashrow,lowerdiagonal,upperdiagonal);
//             board[row][column]='.';
//             hashrow[row]=0;
//             lowerdiagonal[row+column]=0;
//             upperdiagonal[n-1+(row-column)]=0;
            
//         }
//     }
// }





// vector<vector<string>> n_queens(int n){
    // brute tc O(n!×n)
    // vector<string>board;
    // string s(n,'.');
    // vector<vector<string>>ans;
    // int column=0;
    // for(int i=0;i<n;i++){
    //     board.push_back(s);
    // }
    // solve(board,ans,column, n);
    // return ans;


    // better tc n!
    // vector<string>board;
    // string s(n,'.');
    // for(int i=0;i<n;i++){
    //     board.push_back(s);
    // }
    // vector<vector<string>>ans;
    // int column=0;
    // vector<int>hashrow(n,0);
    // vector<int>lowerdiagonal(2*n-1,0);
    // vector<int>upperdiagonal(2*n-1,0);
    // solve(n,board,ans,column,hashrow,lowerdiagonal,upperdiagonal);
    // return ans;

// }
