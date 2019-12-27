#include<stdio.h>
int main()
{
int arr[10] = {0};
int i = 0;
int max = 0;
for (i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
{
    scanf("%d",&arr[i]);
}
max = arr[0];
for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
{
if (max < arr[i])
    {
        max = arr[i];
    }
}
printf("max=%d\n", max);
return 0;
}