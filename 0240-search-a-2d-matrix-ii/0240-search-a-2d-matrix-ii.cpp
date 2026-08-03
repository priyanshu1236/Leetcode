//better 

// class Solution {
// public:
//     bool binary(int i,int low,int high,vector<vector<int>>& matrix,int target)
//     {
//         while(low<=high)
//         {    int mid=low+(high-low)/2;
//             if(matrix[i][mid]==target)
//             {
//                 return true;
//             }
//             else if(matrix[i][mid]>target)
//             {
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return false;
//     }


//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m=matrix.size();
//         int n=matrix[0].size();

//         for(int i=0;i<m;i++)
//         {
//              int low=0;
//              int high=n-1;
           
//              bool result=binary(i,low,high,matrix,target);
//              if(result)
//              {
//                 return true;
//              }
             
            
//         }
//         return false;
        
//     }
// };

//optimal stair case approch
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix.size();
         int n=matrix[0].size();
        int row=0;
        int col=n-1;
        while(row<m && col>=0)
        {
            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]>target)
            {
                col--;
            }
            else
            row++;
        }

return false;
    }
};