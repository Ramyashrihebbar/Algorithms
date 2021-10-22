#include <iostream>
#include<string>

using namespace std;
void TowerOfHanoi(int n,char src,char dest,char helper){
    if(n==0)
      return;
    TowerOfHanoi(n-1,src,helper,dest);
    cout<<"Move from"<<src<<"to"<<dest<<endl;
    TowerOfHanoi(n-1,helper,dest,src);
}
int main()
{
    TowerOfHanoi(3,'A','C','B');
    return 0;
}
