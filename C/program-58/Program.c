 #include<stdio.h>
void main()

{
  //float n[10];
  int i,sum,a,b,x;
  printf("enter the size of elements\n");
  scanf("%d", &x);
  float n[x];
  printf("enter the values\n");
  for (i=0;i<x;i++)
  {
  scanf("%f", &n[i]);
  }
  printf("enter the indexes to be added\n" );
  scanf("%d%d", &a, &b);
  sum=0;
  for (;a<=b;a++)
  {
    sum = sum + n[a];
  }

  printf("\nThe sum of elements between the indexes is %d", sum);
}
