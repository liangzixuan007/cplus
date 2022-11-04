#include <iostream>
#include <cstring> 

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char str[15] = "Helloworld" ;
	
	char str2[15];
	
//	cout<<sizeof(str);
	
	//第一种方法 
//	for(int i=9;i>=0;i--)
//	{
//		str2[9-i] = str[i];
//	}
//
//	cout<<str2<<endl;
//
//	第二种 
	for(int i=0;i<10/2;i++)
	{
		//交换str[i]与str[9-i]的值
		char temp = str[i] ;
		str[i]= str[9-i];
		str[9-i]= temp;
	}
	cout<<str;
	return 0;
}
