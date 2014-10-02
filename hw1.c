#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "A.h"
void main()
{	
	int i, j, k=0,count=0;
	char obj[999]="min ",temp[5],x[2]="x",plus[2]="+";
	//test simple topology
	int cost[6][6]=
	{
		/*  0,  1,  2,  3,  4,  5*/
	  /*  0*/{ -1,  6,  3, -1, -1, -1,},
 	  /*  1*/{  6, -1,  5,  2, 11, -1,},
	  /*  2*/{  3,  5, -1,  7,  9, -1,},
	  /*  3*/{ -1,  2,  7, -1,  2,  8,},
	  /*  4*/{ -1, 11,  9,  2, -1,  4,},
	  /*  5*/{ -1, -1, -1,  8,  4, -1,},
	};
	for(i=0;i<6;i++)//row 行
	{
		for(j=0;j<6;j++)//column 列
		{
			printf("%3d, ",cost[i][j]);
			if(cost[i][j] != -1)
			{
				sprintf(temp,"%d",cost[i][j]);
				strcat(obj, temp);
				strcat(obj, x);
				count++;
				sprintf(temp,"%d",count );
				strcat(obj, temp);
				strcat(obj, plus);
			}
		}
		printf("\n");
	}
	printf("%s\n",obj);
}
