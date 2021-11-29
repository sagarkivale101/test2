#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

int sum(int arr[],int k,  int n){
int s = 0;
for(int i=k;i<n;i++){
     s += arr[i];
}




return s;
}

bool isequal(int arr1[], int a1,int a, int arr2[], int a2,int b,int arr3[], int a3,int c){

        if(sum(arr1,a, a1) == sum(arr2,b, a2) && sum(arr2,b, a2) == sum(arr3,c, a3))
        {



            return true;
        }

return false;
}

int isbig(int arr1[], int a1,int a, int arr2[], int a2,int b,int arr3[], int a3,int c){
    if(sum(arr1,a, a1) > sum(arr2,b, a2) && sum(arr1,a, a1) > sum(arr3,c, a3))
    {
        return 1;
    }else if(sum(arr2,b, a2) > sum(arr3,c, a3) && sum(arr2,b, a2) > sum(arr1,a, a1) )
    {
        return 2;
    }
    else if(sum(arr2,b, a2) < sum(arr3,c, a3) && sum(arr3,c, a3) > sum(arr1,a, a1) ){
        return 3;
    }
}

void fun(int arr1[], int a1,int arr2[], int a2,int arr3[], int a3)
{   int j=0, k=0, l=0;

    while(1){

        if(isequal(arr1, a1, j, arr2, a2, k, arr3, a3, l))
        {
            printf("%d",sum(arr1,j, a1));
            return;
        }
        else{
        int x = isbig(arr1, a1, j, arr2, a2, k, arr3, a3, l);
        if(x == 1)
        {
            j +=1;
        }else if(x == 2)
        {
            k +=1;
        }else if(x == 3)
        {
            l +=1;
        }


        if(sum(arr1,j, a1) == 0 || sum(arr2,k, a2) == 0 ||  sum(arr3,l, a3) == 0)
        {
            printf("exit");
            return 0;
        }


        }

    }
}
int main(){

int arr1[] = {1,1,1,1,2};
int arr2[] = {3,7};
int arr3[] = {1,3,1};

int a1 = sizeof(arr1)/sizeof(arr1[0]);
int a2 = sizeof(arr2)/sizeof(arr2[0]);
int a3 = sizeof(arr3)/sizeof(arr3[0]);

int k = 0;


fun(arr1, a1,arr2, a2,arr3, a3);



return 0;
}
