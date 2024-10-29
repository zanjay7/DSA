
#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the Number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enetr the Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int temp;
    for(int i=0;i<n;i++){
        for( int j=0;j<n-i- 1;j++){
            if(arr[j]<arr[j+ 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}