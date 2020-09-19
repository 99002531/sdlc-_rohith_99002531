#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
	char imdb[10];
	char name[20];
	char year[10];
	int cost;


}b;


int insert_details();//for inserting movie details
int viewAll(); // for view all data
int find(); // for finding data
int subscriptions();  //for geting subscriptions
int old_record(); //for view old recorrds of users,booked tickets

