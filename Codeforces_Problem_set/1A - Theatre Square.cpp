#include<iostream>
using namespace std;
 
int main()
{
	long long n,m,a,i,j;
    
    cin>>n>>m>>a;
    i = n/a;
    j = m/a;
 
    if(n%a!= 0)i++;
    if(m%a!=0)j++;
 
    cout<<i*j;
 
	return 0;
}
