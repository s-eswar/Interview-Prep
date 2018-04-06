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
set<string> contacts;

void addname(string name)
{
    if(contacts.find(name)==contacts.end())
        contacts.insert(name);
}

int find_partial(string name)
{    
    int count=0;
    for(set<string>::iterator it=contacts.begin(); it!=contacts.end(); ++it)
    {
        if(name.compare((*it).substr(0,name.length()))==0)
           count++;
    }    
    return count;
}

int main(){
    int n,i=0;
    string add("add");
    string find("find");
    cin >> n;
    int count[100];
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op.compare(add)==0)
           addname(contact);
        else if(op.compare(find)==0)
        {   count[i]=find_partial(contact);
            i++;
        }
    }
    
    for(int j=0;j<i;j++)
        cout<<count[j]<<endl;

    return 0;
}
