# include <stdio.h>
int main (){
   // int n;
   // printf ("enter array size");
   // scanf ("%d",&n);

    int arr[5]={1,2,3,4,5};
    
   // int i;
   // for (i=0;i<=n-1;i++){
   //     printf ("enter first indecies element %d\n",i+1);
  //      scanf ("%d",arr[i]);
   // }
   int s=2;
   // printf ("what data you search");
   // scanf ("%d",&s);

    for (int i=0;i<=4;i++){
        if (s==arr[i]){
            printf ("%d",i);
        }
    }
    return 0 ;
}