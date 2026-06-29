#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int assignEdgeWeights(vector<vector<int>>& edges) {
        int max = edges.size()+1;
        sort(edges.begin(), edges.end(),
         [](const vector<int>& a, const vector<int>& b) {
             return a[1] < b[1];
         });
        vector<int> vec(max); 
        for(int i=0;i<edges.size();i++){
            vec[i+1] = vec[edges[i][0]-1]+1;
        }
        return pow(2,*max_element(vec.begin(),vec.end())-1);

    }
int main(){
    vector<vector<int>> vec = {{1,2}};
    cout<<assignEdgeWeights(vec);
}