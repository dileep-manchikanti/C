#include<stdio.h>
int rBinSearch(int A[],int x,int low,int high){
int mid=(low+high)/2;
if(low>high) return -1;
if (A[mid]==x) return mid+1;
if(A[mid]>x)    return (rBinSearch(A,x,low,mid-1));
if (A[mid]<x)   return (rBinSearch(A,x,mid+1,high));
}
int main(){
int A[]={5,10,15,20,25,30,35};
printf("%d",rBinSearch(A,35,0,7));
}

