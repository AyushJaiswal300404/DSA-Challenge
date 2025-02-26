class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
       /* brute force
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<m; k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] = -999999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = -999999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == -999999){
                    matrix[i][j] = 0;
                }
            }
        }*/
        //BETTER APPROACH 

        vector<int> row(m,0);
        vector<int> col(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0){
                    col[j]=1;
                    row[i]=1;

                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(col[j]==1||row[i]==1){
                    a[i][j]=0;
                }
            }
        }
        
    }
};
