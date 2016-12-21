#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


string toBin(int n)
{
    string s;
    while(n!=0) {s=(n%2==0 ?"0":"1")+s; n/=2;}
    return s;
}

int countLetters(string n)
{
    int count=0;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='0') count+=4; else count +=3;
    }
    return count;
}

int main()
{
    long long start;
    long long n;
    cin >> start >> n; cin.ignore();
    int letters = countLetters(toBin(start));
    for(int k=1;k<n;k++)
    {
        letters = countLetters(toBin(letters));      
    }
 
cout << letters;
 
 }
