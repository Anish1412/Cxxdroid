#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a[] = {56,34,78,90,12,76};
    int* ptr;
    int n = sizeof(a)/sizeof(int);
    ptr = (int*)calloc(n,sizeof(int));
     if (ptr == NULL) {

        printf("Memory not allocated.\n");

        exit(0);

    }

    else {
 

        // Memory has been successfully allocated

        printf("Memory successfully allocated using malloc.\n");
    
    for(int i=0;i<n;i++){
    	ptr[i] = a[i];
    }
    
     for(int i=0;i<n;i++){
    	printf("%d\n",ptr[i]);
    }
    
    n = 10;
    printf("New Size : %d\n",n);
    int a[] = {56,34,78,90,12,76,98,45,32,79};
    ptr = (int*)realloc(ptr,n*sizeof(int));
    for(int i=5;i<n;i++){
    	ptr[i] = a[i];
    }
    for(int i=0;i<n;i++){
    	if(i<9){
    	printf("%d,",ptr[i]);
    	}
    	else{
    		printf("%d",ptr[i]);
    	}
    }
    free(ptr);
    }
	return 0;
}