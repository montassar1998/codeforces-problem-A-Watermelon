#include <bits/stdc++.h>
 
using namespace std;
bool verify(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return false;
    }
    if(n-2*(n/2)==0){
       return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(verify(n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
