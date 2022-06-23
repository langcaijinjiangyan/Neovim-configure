#include<algorithm>
#include<iostream>
#include<cstring>
#include<math.h>
#include<vector>
#include<map>
#include<set>
#include<deque>
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
	freopen("1.in","w",stdout);
	srand(time(0));
	return 0;
}
