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

int number_needed(string a, string b) {
    int count=0,i;
    for (i=0; i<a.length(); i++)
    {
	std::size_t found = b.find(a[i]);
        if (found!=std::string::npos)
	{ 
	    b.erase(found,1);
	    a.erase(i,1);
	    i=i-1;
	}	
    }
    cout<<a<<endl;
    cout<<b<<endl;
    //if(a.length()>b.length() || b.length()>a.length())
    count = count + (a.length()+b.length());
    return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

