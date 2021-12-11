 #include <stdio.h>

int check(int y,int m,int d,int month[]){
    if(month[m]==31){
        if(d%2!=0)
            d--;
        return (32-d)/2;
    }else if(month[m]==29){
        if(d%2!=0)
            d--;
        return (30-d)/2;
    }else{
        if(d%2!=0)
            d--;
        if (month[m]==30)
            return ((30-d)/2)+16;
        if (month[m]==28)
            return ((28-d)/2)+16;
    }
}

int main() {
	int yyyy, mm, dd;
	int T;
	scanf("%d",&T);
	int i;
	for (i=0;i<T;i++){
	    scanf("%d:%d:%d",&yyyy,&mm,&dd);
	    int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	    if(yyyy%4==0 && yyyy%100!=0)
	        month[2]=29;
	    if(yyyy%4==0 && yyyy%400==0)
	        month[2]=29;
	    printf("%d\n",check(yyyy,mm,dd,month));
	}
	return 0;
}
