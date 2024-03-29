// We are given.....
// f(0)=a,f(1)=b .
// f(2)= a&b, 
// f(3)= f(2) & f(1) =a&b &b, which is nothing but a&b
// f(4)= f(3) & f(2)= a&b & a&b , which is nothing but a&b.
// After some observation we can see that answer is always a&b for all the terms except 0th and 1st terms. 

// Here constraints are just for representation purpose and they are just to confuse people. For size(upto 1000 digits) of terms we can take input string of integers, as we don't have to calculate for any term, so it doesn't matter how big the string of numbers is. It is mentioned in constraints that we have to use long int as said that a,b <=2^50.

// if asked for 532534634324534345234th term then the answer is a&b, without any calculations.

// code for the same in c++

#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){

    int n,ans,a,b; cin>>n>>a>>b;  ans=a&b;
    while(n--){
        string s; cin>>s;
        if(s.size()==1 and s[0]=='1') cout<<b<<'\n';//in case if asked for second term 
        else if(s.size()==1 and s[0]=='0') cout<<a<<'\n';//in case asked for first term
        else cout<<ans<<'\n';// if not asked for first or 0th term then just output a&b.
    }
    return 0;
}

// Time Complexity: O(N*|s|), |s| is size of longest string.
