#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "A.h"
void main(void)
{	
	int i, j;
	char obj[999]="Maximize v",
	     temp[5],x[2]="x", plus[2]="+", minus[2]="-", equal[2]="=";
	char left0[50]="", right0[50]="" ,node0[100]="";
	char left1[50]="", right1[50]="" ,node1[100]="";
	char left2[50]="", right2[50]="" ,node2[100]="";
	char left3[50]="", right3[50]="" ,node3[100]="";
	char left4[50]="", right4[50]="" ,node4[100]="";
	char left5[50]="", right5[50]="" ,node5[100]="";
	char left6[50]="", right6[50]="" ,node6[100]="";
        char left7[50]="", right7[50]="" ,node7[100]="";
        char left8[50]="", right8[50]="" ,node8[100]="";
        char left9[50]="", right9[50]="" ,node9[100]="";
        char left10[50]="", right10[50]="" ,node10[100]="";
        char left11[50]="", right11[50]="" ,node11[100]="";
	char left12[50]="", right12[50]="" ,node12[100]="";
        char left13[50]="", right13[50]="" ,node13[100]="";

	//test simple topology
	//int cost[6][6]=
	//{
	//	/*  0,  1,  2,  3,  4,  5*/
	//  /*  0*/{ -1,  6,  3, -1, -1, -1,},
 	//  /*  1*/{  6, -1,  5,  2, 11, -1,},
	//  /*  2*/{  3,  5, -1,  7,  9, -1,},
	//  /*  3*/{ -1,  2,  7, -1,  2,  8,},
	//  /*  4*/{ -1, 11,  9,  2, -1,  4,},
	//  /*  5*/{ -1, -1, -1,  8,  4, -1,},
	//};
	//making objective function
	/*for(i=0;i<NODE;i++)//cloumn 列
	{
		for(j=0;j<NODE;j++)//row 行
		{
			printf("%3d, ",COST[i][j]);
			if(COST[i][j] != -1)
			{
				sprintf(temp,"%d",COST[i][j]);
				strcat(obj, temp);
				strcat(obj, x);
				sprintf(temp,"%d%d",i,j);
				strcat(obj, temp);
				strcat(obj, plus);
			}
		}
		printf("\n");
	}*/
	//flow conservation law, in=out
	for(i=0;i<NODE;i++)
	{
		for(j=0;j<NODE;j++)
		{
			if(COST[i][j] != -1)
                        {	
				if(i==0)//letf0
                                {
                                        strcat(left0, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left0, temp);
                                        strcat(left0, plus);
                                }
                                if(j==0)//right1
                                {
                                        strcat(right0, minus);
                                        strcat(right0, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right0, temp);
                                }
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
                                }
				if(j==5)//letf5
                                {
                                        strcat(left5, x);
                                        sprintf(temp,"%d%d", i, j);
                                        strcat(left5, temp);
                                        strcat(left5, plus);
                                }
                                if(i==5)//right5
                                {
                                        strcat(right5, minus);
                                        strcat(right5, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right5, temp);
                                }
				if(j==6)//letf6
                                {
                                        strcat(left6, x);
                                        sprintf(temp,"%d%d", i, j);
                                        strcat(left6, temp);
                                        strcat(left6, plus);
                                }
                                if(i==6)//right6
                                {
                                        strcat(right6, minus);
                                        strcat(right6, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right6, temp);
                                }
				if(j==7)//letf7
                                {
                                        strcat(left7, x);
                                        sprintf(temp,"%d%d", i, j);
                                        strcat(left7, temp);
                                        strcat(left7, plus);
                                }
                                if(i==7)//right7
                                {
                                        strcat(right7, minus);
                                        strcat(right7, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right7, temp);
                                }
				if(j==8)//letf8
                                {
                                        strcat(left8, x);
                                        sprintf(temp,"%d%d", i, j);
                                        strcat(left8, temp);
                                        strcat(left8, plus);
                                }
                                if(i==8)//right8
                                {
                                        strcat(right8, minus);
                                        strcat(right8, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right8, temp);
                                }
				if(j==9)//letf9
                                {
                                        strcat(left9, x);
                                        sprintf(temp,"%d%d", i, j);
                                        strcat(left9, temp);
                                        strcat(left9, plus);
                                }
                                if(i==9)//right9
                                {
                                        strcat(right9, minus);
                                        strcat(right9, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right9, temp);
                                }
				if(i==10)//left10
                                {
                                        strcat(left10, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left10, temp);
                                        strcat(left10, plus);
                                }
                                if(j==10)//right10
                                {
                                        strcat(right10, minus);
                                        strcat(right10, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right10, temp);
                                }
				if(i==11)//left11
                                {
                                        strcat(left11, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left11, temp);
                                        strcat(left11, plus);
                                }
                                if(j==11)//right11
                                {
                                        strcat(right11, minus);
                                        strcat(right11, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right11, temp);
                                }
				if(i==12)//left12
                                {
                                        strcat(left12, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left12, temp);
                                        strcat(left12, plus);
                                }
                                if(j==12)//right12
                                {
                                        strcat(right12, minus);
                                        strcat(right12, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right12, temp);
                                }
				if(i==13)//left13
                                {
                                        strcat(left13, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(left13, temp);
                                        strcat(left13, plus);
                                }
                                if(j==13)//right13
                                {
                                        strcat(right13, minus);
                                        strcat(right13, x);
                                        sprintf(temp,"%d%d",i, j);
                                        strcat(right13, temp);
                                }
			}
		}
	}

	//result objective function
	printf("%s\n", obj);
	printf("Subject To\n");

	//result constraints
	//node0
	strcat(node0, left0);
        strcat(node0, right0);
        strcat(node0, equal);
        strcat(node0, "0");
        printf("%s\n", node0);
	//node1
	strcat(node1, left1);
	strcat(node1, right1);
	strcat(node1, equal);
	strcat(node1, "0");
	printf("%s\n", node1);
	//node2
	strcat(node2, left2);
        strcat(node2, right2);
        strcat(node2, equal);
	strcat(node2, "0");
	printf("%s\n", node2);
	//node3
	strcat(node3, left3);
        strcat(node3, right3);
        strcat(node3, equal);
	strcat(node3, "0");
	printf("%s\n", node3);
	//node4
	strcat(node4, left4);
        strcat(node4, right4);
	strcat(node4, equal);
	strcat(node4, "0"); 
        printf("%s\n", node4);
	//node5
	strcat(node5, left5);
        strcat(node5, right5);
        strcat(node5, equal);
        strcat(node5, "0");
        printf("%s\n", node5);
	//node6
        strcat(node6, left6);
        strcat(node6, right6);
        strcat(node6, equal);
        strcat(node6, "0");
        printf("%s\n", node6);
	//node7
        strcat(node7, left7);
        strcat(node7, right7);
        strcat(node7, equal);
        strcat(node7, "0");
        printf("%s\n", node7);
	//node8
        strcat(node8, left8);
        strcat(node8, right8);
        strcat(node8, equal);
        strcat(node8, "0");
        printf("%s\n", node8);
	//node9
        strcat(node9, left9);
        strcat(node9, right9);
        strcat(node9, equal);
        strcat(node9, "0");
        printf("%s\n", node9);
	//node10
        strcat(node10, left10);
        strcat(node10, right10);
        strcat(node10, equal);
        strcat(node10, "0");
        printf("%s\n", node10);
	//node11
        strcat(node11, left11);
        strcat(node11, right11);
        strcat(node11, equal);
        strcat(node11, "0");
        printf("%s\n", node11);
	//node12
        strcat(node12, left12);
        strcat(node12, right12);
        strcat(node12, equal);
        strcat(node12, "0");
        printf("%s\n", node12);
	//node13
        strcat(node13, left13);
        strcat(node13, right13);
        strcat(node13, equal);
        strcat(node13, "0");
        printf("%s\n", node13);
}
