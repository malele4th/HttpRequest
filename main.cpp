#include <iostream>
#include "HttpRequest.h"
using namespace std;

int main()
{
	HttpRequest* Http = new HttpRequest;
	
	char* str = (char*)malloc(BUFSIZE);
	
    const char* url1 = "http://www.baidu.com";
    const char* url2 = "http://merger296.se.zzzc.qihoo.net:7008/getgnidnew?gnid2=1&f=244&jjj=555";
    const char* url3 = "https://blog.csdn.net/malele4th/article/details/90383208";
       
	memset(str, 0, BUFSIZE);  // memset 函数是内存赋值函数，用来给某一块内存空间进行赋值的
	if(Http->HttpGet(url3, str)) {
		printf("%s\n", str);
	} else {
		cout<< url3 <<"HttpGet请求失败!"<<endl;
	}
    
	/*
	memset(str, 0, BUFSIZE);	
	//安装Tomcat
	if(Http->HttpGet("127.0.0.1", str)) {
		printf("%s\n", str);
	} else {
		printf("127.0.0.1 HttpGet请求失败!\n");
	}
	*/

	free(str);
	return 0;
}
