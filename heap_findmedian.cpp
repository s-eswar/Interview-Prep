#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,count=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       a.push_back(a[a_i]);
       count=count+1;
       push_heap(a.begin(),a.end()); 
       sort_heap(a.begin(),a.end());
       if(count==1)
           cout<<endl<<a[a_i];
       if(count%2!=0 && count!=1)
          cout<<endl<<ceil(a[count/2]);
       else
           cout<<endl<<ceil(a[count/2])+ceil(a[count+1/2]);
    }
    cout<<endl;
    return 0;
}

