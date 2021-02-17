#include <bits/stdc++.h> 
using namespace std; 
  

void subsetsUtil(vector<int>& arr, vector<vector<int> >& res, vector<int>& subset, int index) 
{ 
    res.push_back(subset); 
    for (int i = index; i < arr.size(); i++) { 
  
       
        subset.push_back(arr[i]); 
  
         
        subsetsUtil(arr, res, subset, i + 1); 
  
       
        subset.pop_back(); 
    } 
  
    return; 
} 
  

vector<vector<int> > subsets(vector<int>& arr) 
{ 
    vector<int> subset; 
    vector<vector<int> > res; 
  
    
    int index = 0; 
    subsetsUtil(arr, res, subset, index); 
  
    return res; 
} 
  

int main() 
{ 
    vector<int> arr = { 5,6,7 }; 
  
   
    vector<vector<int> > res = subsets(arr); 
  
    for (int i = 0; i < res.size(); i++) 
    { 
        for (int j = 0; j < res[i].size(); j++) 
            cout << res[i][j] << " "; 
        cout << endl; 
    } 
  
    return 0; 
} 