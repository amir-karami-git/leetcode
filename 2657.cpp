#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n,0);
        vector<int> D(n,0);
        int sum = 0;
        for(int i=0;i<n;i++){
            C[A[i]-1] = 1;
            for(int j=0;j<=i;j++){
                if(C[B[j]-1]==1){
                    sum++;
                    C[B[j]-1] = 0;
                }
            }
            D[i]=sum;
        }
        return D;
    }
};