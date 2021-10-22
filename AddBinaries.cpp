#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    long int a,b,rem1,rem2,carry=0,result=0;
    cin>>a;
    cin>>b;
    while(a>0 && b>0){
        rem1=a%10; rem2=b%10;
        if(rem1==0 && rem2==0 && carry==0){
            result=result*10 + 0;
            carry=0;
        }
        else if(rem1==0 && rem2==0 && carry==1){
            result=result*10 + 1;
            carry=0;
        }
        else if(rem1==1 && rem2==0 && carry==0){
            result=result*10 + 1;
            carry=0;
        }
        else if(rem1==1 && rem2==0 && carry==1){
            result=result*10 + 0;
            carry=1;
        }
        else if(rem1==0 && rem2==1 && carry==0){
            result=result*10 + 1;
            carry=0;
        }
        else if(rem1==0 && rem2==1 && carry==1){
            result=result*10 + 0;
            carry=1;
        }
        else if(rem1==1 && rem2==1 && carry==0){
            result=result*10 + 0;
            carry=1;
        }
        else if(rem1==1 && rem2==1 && carry==1){
            result=result*10 + 1;
            carry=1;
        }
        a/=10; b/=10;
    }
    result=result*10+carry;
    string str=to_string(result);
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
