#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    int n,i,res;
    vector<int> rounded;
    for (i=0; i<grades.size(); i++) 
    {
      if(grades[i]>=38)
      {
        n=grades[i]/5;
        res=(5*n)-grades[i];
        if(res>0)
        {
          if(res<3)  
          {
              rounded.push_back(5*n);
              
          }
	  else if(res==3)
              rounded.push_back(grades[i]);
	  else if(res>3)
              rounded.push_back(grades[i]);
        }
        else
        {
          if(((5*(n+1))-grades[i])<3)  
          {
              rounded.push_back(5*(n+1));
              
          } 
	  else if(((5*(n+1))-grades[i])==3)  
              rounded.push_back(grades[i]);
	  else if(((5*(n+1))-grades[i])>3)  
              rounded.push_back(grades[i]);
        }         
      }
      else
	rounded.push_back(grades[i]);      
    }   
    return rounded;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    cout << endl;
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
