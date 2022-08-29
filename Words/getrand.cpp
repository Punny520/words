#include"getrand.h"
void Get_rand(int *a,int sum,int l,int r){//在a数组中随机生成范围为[l,r]的sum个不相同的数字
    QTime randtime;
    randtime = QTime::currentTime();
    qsrand(randtime.msec()+randtime.second()*1000);
    int i=0,n,fl=1;
    while(i<sum){
        n = qrand()%(r-l+1)+l;
        fl=1;
        for(int j=1;j<=i;j++){
            if(a[j]==n){
                fl=0;
                break;
            }
        }
        if(fl) a[++i]=n;
    }
}
