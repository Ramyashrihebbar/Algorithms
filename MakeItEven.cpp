#include <iostream>

using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m],brr[n],sum1=0,sum2=0,ev1=0,od1=0,ev2=0,od2=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            ev1++;
        else
            od1++;
        sum1+=arr[i];
    }
    for(int j=0;j<n;j++){
        cin>>brr[j];
        if(brr[j]%2==0)
            ev2++;
        else
            od2++;
        sum2+=brr[j];
    }
    if(sum1%2==0 && sum2%2==0){
        cout<<0<<endl;
    }
    else if((od1+od2)%2!=0){
        cout<<"Not Possible";
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}
