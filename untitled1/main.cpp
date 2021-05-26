#include <iostream>
using namespace std;
static const int N=10000;
int main() {
int i,j,p,q,id[N],sz[N];
for (i=0;i<N;i++){id[i]=i;sz[i]=1;};
    while(cin>>p>>q){
        /*int t =id[p];
          /*if (t==id[q])continue;
            for(i=0;i<N;i++)if (id[i]==t) id[i]=id[q];

            cout <<""<<p<<""<<q<<endl;*/
        for (i=p;i!=id[i];i=id[i]);
        for (j=q;j!=id[j];j=id[j]);
        if (i==j)continue;
        if(sz[i]<sz[j]){
            id[i]=j;sz[j]+=sz[i];
        }else {
            id[j]=i;sz[i]+=sz[j];

        }
        //id [i]=j;
        //cout <<""<<p<<""<<q<<endl;
    }
        return 0;
    }
