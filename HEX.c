  #include <stdio.h>
  #include <math.h>
  #include<string.h>
  int main(int argc, char *argv[])
  {
     int a[100000],cnt,flag=0;
          printf("\nenter the code(-ve to end )\n");
          for(cnt=0;1;cnt++)
          {
              flag++;
              scanf("%d",&a[cnt]);
              if(a[cnt]<0)
              {
                  break;
              }
          }
          printf("\n\n");
          for(cnt=0;cnt<flag-1;cnt++)
          {
              printf("%06X  ",a[cnt]);
          }
}
