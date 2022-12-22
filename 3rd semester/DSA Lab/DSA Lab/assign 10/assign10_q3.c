#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *container=NULL,n=0,x=0,hunt=0,flag=0;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    container = malloc(n*sizeof(int));
    
    printf("Enter elements in to the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element at index %d: ",i);
        scanf("%d",&x);
        container[i] = x;
    }
    printf("Enter element to search: ");
    scanf("%d",&hunt);

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        if (container[i]==hunt)
            hunt*=3;
        
    }
    if (flag==0) printf("%d\n",hunt);
    
    return 0;
}
