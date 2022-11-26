#include<bits/stdc++.h>
using namespace std;

int slove(int n)
{
	int num=0;
	if(n==2){
		num++;
	}
    for(int i=2;i<=sqrt(n);i++){
        if(n%i!=0){
        	num++;
        }else break;
    }return num;
}
 
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    for(int i=n;i<=m;i++) {
    	if(slove(i)==1){
    		sum++;
		}
    }
    cout<<sum;
    return 0;
}
