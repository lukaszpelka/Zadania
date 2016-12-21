#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;



int main()
{
    string x;
    getline(cin, x);
    int n;
    cin >> n; cin.ignore();
    string first, last;
    int middle;
    
    first = x.substr(0,2);
    last = x.substr(7,9);
    
    middle = stoi(x.substr(3,7)); 
    
   
    if(middle+n<999)
    {
        cout << first << "-" << middle+n << "-" << last << endl;
    }
    else
    {
        while(middle+n>999)
        {
        n-=999;
        if(last[1]<'Z') last[1]++;
        else if(last[0]<'Z' && last[1]=='Z') 
            {
               last[0]++; last[1]='A';
            }
        else if(last=="ZZ" && first[1]<'Z') 
            {
              last = "AA"; first[1]++;
            }
        else if(last=="ZZ" && first[1]=='Z' && first[0]<'Z')
            {
              last = "AA"; first[1]='A'; first[0]++;
            }
        }
        cout << first << "-" << std::setw(3) << std::setfill('0') <<  middle+n << "-" << last << endl;
    }
}
