int rMul(int m, int n){
    if(m==1)
        return n;
    return(n+rMul(m-1,n));
}
main(){
printf("%d",rMul(4,5));
}
