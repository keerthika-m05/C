int main(){
    int n;
    scanf("%d",&n);
    int flag=1;
    for(int i=2;i<n/2;i++){
        if(n%i==0)
            flag=0;


    }
    if(flag==1)
        printf("prime");
    else
        printf("not prime");
    return 0;
}

