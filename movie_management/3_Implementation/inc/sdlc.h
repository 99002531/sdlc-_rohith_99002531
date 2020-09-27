#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct mystruct
{
	char imdb[10];
	char name[20];
	char year[10];
//	char find[20];
	int cost;
	char movie_name[20];
}b;




int insert_details(char imdb[],char name[],char year[],int cost) ;//for inserting movie details
int viewAll(); // for view all data
int find(char find[]); // for finding data
int subscriptions(char movie_name[],char person_name[],char mobile[],int total_subcriptions); //for geting subscriptions
int old_record(); //for view old records

