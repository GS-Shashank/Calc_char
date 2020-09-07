#include <stdio.h>
#include <math.h>
int main()
{
	int a[12345],k,cnt, j;
	int x=0;
	int code[] = {		  1835,		'A'
					, 716467,		'B'
					, 842,	 		'C'
					, 7167 , 		'D'
					, 8745412, 	          'E'
					, 874541,		'F'
					, 842365,	         'G'
					, 7145693,	         'H'
					, 852,			'I'
					, 8521,		'J'
					, 714842,	         'K'
					, 712,			'L'
					, 17593,		 'M'
					, 1739,	          'N'
					, 5,     		'O'
					, 17854,		 'P'
					, 87453,  		  'Q'
					, 178542,		 'R'
					, 684521,		'S'
					, 7982,  		'T'
					, 7139,	         'U'
					, 729,			'V'
					, 71539,  		'W'
					, 73591,		'X'
					, 7591,		'Y'
					, 4826,		'Z'
					, 0,			' '
	} ;
	printf("\npress 1 to decrypt the code\n");
	printf("\npress 2 to encrypt the code\n");
	printf("\nenter your choice\n");
	scanf("%d",&x);
	switch(x)
	{
	case 1:
		printf("\nenter the code(-ve to end )\n");
		for(cnt=0;1;cnt++)
		{
			scanf("%d",&a[cnt]);
			if(a[cnt]<0)
			{
				break;
			}
		}
		printf("\n\n");
		for(k=0;k<cnt;k++)
		{
			for(j=0;j<54;j=j+2)
			{
				if(a[k]==code[j])
				{
					printf("%c",code[j+1]);
				}
			}
		}
		printf("\n\n");
		break;
	case 2:
			printf("\nenter the message to be encrypted IN CAPITAL ONLY.(. to end )\n");
			for(cnt=0;1;cnt++)
			{
				scanf("%c",&a[cnt]);
				if(a[cnt]=='.')
				{
					break;
				}
			}
            printf("\n\n");
			for(k=0;k<cnt;k++)
			{
				for(j=1;j<54;j=j+2)
				{
					if(a[k]==code[j])
					{
						printf("%d ",code[j-1]);
					}
				}
			}
			printf("\n\n");
			break;
	default:printf("no operation");
		}
    }
