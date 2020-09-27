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




void insert_details(char imdb[],char name[],char year[],int cost) ;//for inserting movie details
void viewAll(); // for view all data
void find(char find[]); // for finding data
void subscriptions(char movie_name[],char person_name[],char mobile[],int total_subcriptions); //for geting subscriptions
void old_record(); //for view old records

