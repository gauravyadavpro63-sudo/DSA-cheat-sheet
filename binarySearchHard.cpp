

#  ROW WITH MAXIMUM NUMBER OF ONES


int lowerbound(vector<int>matrix,int x,int columns){
// int low=0;
// int high=columns-1;
// int lb=columns;
// while(low<=high){
//     int mid=low+(high-low)/2;
//     if( matrix[mid]>=x){
//      lb=mid;
//      high=mid-1;
//     }
//     else{
//         low=mid+1;
//     }
// }
// return lb;
// }
// int find_rows_with_max_1s(vector<vector<int>>matrix,int rows,int columns){
    // brute solution  tc=O(n*m);
    // int index=-1;
    // int maxcount=-1;
    // for(int i=0;i<rows;i++){
    //     int count=0;
    //     for(int j=0;j<columns;j++){
    //        count+=matrix[i][j];
    //        if(count>maxcount){
    //         maxcount=count;
    //         index=i;
    //        }
    //     }
    // }
    // return index;
    // optimal solution tc=O(nlogm)
    //  int index=-1;
//      int x=1;
//      int max_count=0; 
//     for(int i=0;i<rows;i++){
//         int count=columns-lowerbound(matrix[i],x,columns);
//         if(count>max_count){
//             max_count=count;
//             index=i;
//         }
        
//     }
//     return index;
    
// }


#SEARCH IN 2D MATRIX 

// vector<int> search_in_2d_matrix(vector<vector<int>>matrix2,int rows,int columns,int d){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(matrix2[i][j]==d){
//                 return {i,j};
//             }
//         }
//     }
//     return{-1,-1};
// }
// better solution tc=O(n+m)
// int i=0;
// int j=columns-1;
// while(i<rows&&j>=0){
//     if(matrix2[i][j]==d){
//         return{i,j};
//     }
//     else if(matrix2[i][j]<d){
//         i++;
//     }
//     else{
//         j--;
//     }
// }
// return{-1,-1};



#SEARCH IN 2D MATRIX II



// }
// optimal solution =tc=O(log2(n*m))
// int low=0;
// int high=rows*columns-1;
// while(low<=high){
//     int mid=low+(high-low)/2;
//     if(matrix2[mid/columns][mid%columns]==d){
//         return {mid/columns,mid%columns};
//     }
//     else if(matrix2[mid/columns][mid%columns]>d){
//         high=mid-1;
//     }
//     else{
//         low=mid+1;
//     }
// }
// return{-1,-1};
// }




#FIND ANY PEAK ELEMENT IN 2D  MATRIX



// int maximum(vector<vector<int>>matrix,int rows,int columns,int mid){
//     int index=-1;
//     int maxelement=-1;
//     for(int i=0;i<rows;i++){
//         if(matrix[i][mid]>maxelement){
//             maxelement=matrix[i][mid];
//             index=i;
//         }
//     }
//     return index;
// }
// vector<int> find_any_peak_element_in_matrix(vector<vector<int>>matrix,int rows,int columns){
// brute solution find largest element tc=O(m*n);
// optimal solution  tc=O(rows*log2(columns))
// int low=0;
// int high=columns-1;
// int left;
// int right;
// while(low<=high){
//     int mid=low+(high-low)/2;
//     int max_element_index_in_column=maximum(matrix,rows,columns,mid);
//     if(mid-1>=0){
//          left=matrix[max_element_index_in_column][mid-1]; 
//     }
//     else{
//          left=-1;
//     }

//     if(mid+1<columns){
//          right=matrix[max_element_index_in_column][mid+1];
//     }
//     else{
//          right=-1;
//     }

//     if(matrix[max_element_index_in_column][mid]>left&&matrix[max_element_index_in_column][mid]>right){
//         return {max_element_index_in_column,mid};
//     }
//     else if(matrix[max_element_index_in_column][mid]<left){
//         high=mid-1;
//     }
//     else{
//         low=mid+1;
//     }

// }
// return {-1,-1};
// }



#MEDIAN IN  ROW WISE SORTED MATRIX


// int upperbound(vector<int>matrix,int rows,int columns,int req){
// int low=0;
// int high=columns-1;
// int ans=columns;
// while(low<=high){
//     int mid=low+(high-low)/2;
//     if(matrix[mid]>req){
//         high=mid-1;
//      ans=mid;
//     }
//     else{
//    low=mid+1;
//     }
// } 
// return ans;

// }
// int blackbox(vector<vector<int>>matrix,int rows,int columns,int mid){
//     int count=0;
//     for(int i=0;i<rows;i++){
//         count+=upperbound(matrix[i],rows,columns,mid);
//     }
//     return count;
// }
// int matrix_median(vector<vector<int>>matrix,int rows,int columns){
    // brute solution tc=O(n*m+n*(mlog2(n*m)))
//     vector<int>ans;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             ans.push_back(matrix[i][j]);
//         }
     
//     }
//        sort(ans.begin(),ans.end());
//         return ans[ans.size()/2];
// }

// optimal solution
// int low=INT_MAX;
// int high=INT_MIN;
// int req=rows*columns/2;
// int ans=-1;
// for(int i=0;i<rows;i++){
//     low=min(low,matrix[i][0]);
//     high=max(high,matrix[i][columns-1]);
// }
// while(low<=high){
    
//     int mid=low+(high-low)/2;
//     int count=blackbox(matrix,rows,columns,mid);
//     if(count<=req){
//         low=mid+1;
         
//     }
//     else{
//         high=mid-1;
//         ans=mid;
        

//     }
    
// }
// return low;
// }




####################################################################################################################################
                                               GOD  GIVE ME EVERYTHING
####################################################################################################################################