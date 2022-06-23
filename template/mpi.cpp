#include<algorithm>
#include<iostream>
#include<cstring>
#include<math.h>
#include<vector>
#include<map>
#include<set>
#include<mpi.h>
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
int my_rank,comm_sz;
void Init(){
	MPI_Init(NULL,NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&comm_sz);
	MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
}
void Solve(){
}
int main(){
	Init(),Solve();
	return 0;
}
