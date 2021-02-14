#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
	if(x1>x2 && v1 >v2 || x2>x1 && v2>v1){
        cout<<"NEVER MEET"<<endl;
    }
    else
    {
        if(x2<x1)
        	while(x2<x1)
        	{
            	x2=x2+v2; //jump
            	x1=x1+v1; //jump
        	}
        else
        	while(x2>x1)
        	{
            	x2=x2+v2; //jump
            	x1=x1+v1; //jump
       	 	}
        
		if(x1==x2)
            cout<<"MEET AT "<<x1<<endl;
    }
    return 0;
}
