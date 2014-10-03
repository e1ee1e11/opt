#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "A.h"
void main(void)
{	
	int i, j;
	char obj[999]="Minisize ",temp[5],x[2]="x", plus[2]="+", minus[2]="-";
	char const1[100]="", equal[2]="=", const2[100]="";
	char left1[50]="", right1[50]="" ,node1[100]="";
	char left2[50]="", right2[50]="" ,node2[100]="";
	char left3[50]="", right3[50]="" ,node3[100]="";
	char left4[50]="", right4[50]="" ,node4[100]="";
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
				if(i==0)//source: node0
				{
					strcat(const1, x);
					sprintf(temp,"%d%d",i, j);
					strcat(const1, temp);
                                	strcat(const1, plus);
				}
				if(j==0)
				{
					strcat(const1, minus);
					strcat(const1, x);
					sprintf(temp,"%d%d",i, j);
                                        strcat(const1, temp);
				}
				if(j==5)//destination: node5
				{
					strcat(const2, x);
                                        sprintf(temp,"%d%d", i, j);
                                        strcat(const2, temp);
                                        strcat(const2, plus);
				}
				if(i==5)
                                {
                                        strcat(const2, minus);
                                        strcat(const2, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(const2, temp);
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
	//flow conservation law, in=out
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(cost[i][j] != -1)
                        {

				if(i==1)//left1
                        	{
                               		strcat(left1, x);
                               		sprintf(temp,"%d%d",i, j);
                                	strcat(left1, temp);
                                	strcat(left1, plus);   
                        	}
				if(j==1)//right1
				{
					strcat(right1, minus);
					strcat(right1, x);
                                	sprintf(temp,"%d%d",i, j);
                                	strcat(right1, temp);
                                	//strcat(right1, plus);
				}
				if(i==2)//left2
                                {
                                        strcat(left2, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left2, temp);
                                        strcat(left2, plus);
                                }
                                if(j==2)//right2
                                {
					strcat(right2, minus);
                                        strcat(right2, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right2, temp);
                                        //strcat(right2, plus);
                                }
				if(i==3)//left3
                                {
                                        strcat(left3, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left3, temp);
                                        strcat(left3, plus);
                                }
                                if(j==3)//right3
                                {
					strcat(right3, minus);
                                        strcat(right3, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right3, temp);
                                        //strcat(right3, plus);
                                }
				if(i==4)//left4
                                {
                                        strcat(left4, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left4, temp);
                                        strcat(left4, plus);
                                }
                                if(j==4)//right4
                                {
					strcat(right4, minus);
                                        strcat(right4, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right4, temp);
                                        //strcat(right4, plus);
                                }

			}
		}
	}
	
	//result obj, constriant 1 & 2
	printf("%s\n", obj);
	printf("Subject To\n");
	printf("%s\n", const1);
	printf("%s\n", const2);

	//result other
	strcat(node1, left1);
	strcat(node1, right1);
	strcat(node1, equal);
	strcat(node1, "0");
	printf("%s\n", node1);
	
	strcat(node2, left2);
        strcat(node2, right2);
        strcat(node2, equal);
	strcat(node2, "0");
	printf("%s\n", node2);
	
	strcat(node3, left3);
        strcat(node3, right3);
        strcat(node3, equal);
	strcat(node3, "0");
	printf("%s\n", node3);
	
	strcat(node4, left4);
        strcat(node4, right4);
	strcat(node4, equal);
	strcat(node4, "0"); 
        printf("%s\n", node4);

}
