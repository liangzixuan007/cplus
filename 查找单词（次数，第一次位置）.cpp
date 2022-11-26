#include <iostream>
#include <cstdio>
#include <string> 
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	string key,s;
	cin>>key,s;
	getchar();
	getline(cin,s);
	
	int cnt=0,index=-1;
	
	for(int i=0;i<key.length();i++)key[i]=tolower(key[i]);
	for(int i=0;i<s.length();i++)s[i]=tolower(s[i]);
	
	int len=s.length();
	int h=0; 
	for(int i=0;i<=len;i++){
		if(s[i]==' '||i==len){
			string tmp=s.substr(h,i-h);
			if(tmp==key){
				cnt++;
				if(cnt==1) index=h;
			}
			h=i+1;
		}
	}
	if(cnt==0){
		cout<<-1;
	}else{
		cout<<cnt<<" "<<index;
	}
	
	
		
	
	return 0;
}
