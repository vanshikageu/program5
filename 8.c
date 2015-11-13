#include<stdio.h>
#include<conio.h>
void input(int a[],int b[],int,int);
void output(int c[]);
  void main()
  {
  int a[100],b[100],c[100],i,k=0,m,n;
  printf("enter size of a and b");
  scanf("%d%d",&m,&n);
  printf("enter elements of a");
  for(i=0;i<m;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("enter elements of b");
  for(i=0;i<n;i++);
  {
      scanf("%d",&b[i]);
  }
  input(a,b,m,n);
  printf("the union of two array is:\n");
  output(c);
  getch();
  }

    void input(int a[],int b[],int m,int n)
    {
    int i=0,j=0,k=0,f;
    k=0;
      while(i<m)
      {
       c[k] = a[i];
       i++;
       k++;
      }
    while(j<m)
    {
        f=0;
        for(i=0;i<m;i++)
        {
            if(a[i]==b[j])
            {
                f++;
                break;
            }
        }
    if(f==0)
    {

        c[k]=b[j];
        k++;
    }
    j++;
    }
    }
       void output(int c[])
       {
           int i,k;
           for(i=0;i<k;i++)
           {
           printf(" %d",c[k]);
           }
       }
