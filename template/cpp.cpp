#include<algorithm>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<queue>
using namespace std;
#define ll long long
//{{{ read()
inline int read(){
	int x=0,f=1,ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')	f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')	x=x*10+(ch^48),ch=getchar();
	return x*f;
}
//}}}
int main(){
	//{{{ IO_pre
#ifdef lzk
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	freopen("log","w",stderr);
#endif
	//std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
	//}}}
	return 0;
}
