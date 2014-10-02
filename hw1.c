#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "A.h"
void main()
{	
	int i, j, k=0;
	char obj[999]="min ",temp[5],x[2]="x",plus[2]="+";
	char const1[100]="", equal[2]="=", const2[100]="";
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
	//making objective function
	for(i=0;i<6;i++)//cloumn 列
	{
		for(j=0;j<6;j++)//row 行
		{
			printf("%3d, ",cost[i][j]);
			if(cost[i][j] != -1)
			{
				sprintf(temp,"%d",cost[i][j]);
				strcat(obj, temp);
				strcat(obj, x);
				sprintf(temp,"%d%d",i,j);
				strcat(obj, temp);
				strcat(obj, plus);
				if(i==0)//source node=0
				{
					strcat(const1, x);
					sprintf(temp,"%d%d",i, j);
					strcat(const1, temp);
                                	strcat(const1, plus);
				}
				if(j==5)//destination node = 5
				{
					strcat(const2, x);
                                        sprintf(temp,"%d%d", i, j);
                                        strcat(const2, temp);
                                        strcat(const2, plus);
				}
			}
		}
		printf("\n");
	}
	//constriant 頭尾=1,source=0,destination=5
	strcat(const1, equal);
	strcat(const1, "1");
	strcat(const2, equal);
        strcat(const2, "1");
	//result
	printf("%s\n", obj);
	printf("%s\n", const1);
	printf("%s\n", const2);
}
