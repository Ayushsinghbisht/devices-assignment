
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char city[10],landmark[10],place[10],s[10]="ponda";
    
    cout<<" enter the adress in goa as \n";
    cout<<"city :\n";
    cin>>city;
    cout<<"\n landmark\n";
    cin>>landmark;
    
    
    if(!strcmp(city,s)){
        if(!strcmp(landmark,"nitgoa"))
        {
        	cout<<"\ntime taken is 15 min\n "; 
		}
        
    }
    else cout<<"\n adress not found \n";
	
	
	
	
	}
