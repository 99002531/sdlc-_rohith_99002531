#include "sdlc.h"


void insert_details(char imdb[],char name[],char year[],int cost)
{
	//struct mystruct b;
	FILE *fp;
	struct  b;
	strcpy(b.imdb,imdb);
	strcpy(b.name,name);
	strcpy(b.year,year);
	b.cost=cost;

	printf("Enter imdb rating :- %s\n",b.imdb);

	printf("Enter movie or series name :  %s\n-",b.name);

	printf("Enter Release year:- %s\n",b.year);

	printf(" Price:-%d\n",b.cost);

	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n",b.imdb,b.name,b.year,b.cost);
		printf("%d\n",*fp);
		printf("Record insert Sucessfull");
	}
		printf("\n");
	fclose(fp);
}
void find(char find[]) //find details
{
	FILE *fp;


	printf("Enter movie or series name %s:",find);

	system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.imdb,b.name,b.year,&b.cost);
			if(strcmp(b.name,find) == 0)
			{

				printf("\n Record Found\n");
				printf("\n\t\timdb ::%s",b.imdb);
				printf("\n\t\tmovie name ::%s",b.name);
				printf("\n\t\tmovie year ::%s",b.year);
				printf("\n\t\tprice of movie or series ::%d",b.cost);
				break;
			}
		}

	}

	fclose(fp);
}
void viewAll()
{
	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("clear");
		//;
		while( ( ch =fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);
}

void subscriptions(char movie_name[],char person_name[],char mobile[],int total_subcriptions)
{
	struct b;
	//strcpy(b.movie_name,movie_name);
	FILE *fp;

	FILE *ufp;

	int total_amount;


	char ch; //used in display all movies or series
	//char movie_name[20]; //for searching movie name
	printf("====displaying available movie or series in the order of imbd,name,released year and cost of each subscriptions====\n\n");
	// disply all movies
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		//system("cls");
		//;
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For taking subscriptions Choose Movie or series(Enter Movie name)\n");
	printf("\n Enter movie name :%s",movie_name);

	//;
//	scanf("%s",movie_name);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		//;
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.imdb,b.name,b.year,&b.cost);
			if(strcmp(b.name,movie_name) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.imdb,b.name,b.year,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\timdb ::%s",b.imdb);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tyear name ::%s",b.year);
				printf("\n\t\tPrice of ticket::%d",b.cost);


			}
		}

	}
	printf("\n* Fill Details  *");
	printf("\n your name %s:",person_name);

	//;
	//scanf("%s",person);
	printf("\n mobile number %s:",mobile);

	//;
	//scanf("%s",mobile);
	printf("\n Total number of subscriptions %d:",total_subcriptions);

	//;
	//scanf("%d",&total_subcriptions);


	total_amount = b.cost * total_subcriptions;

	printf("\n ***** ENJOY MOVIE ****\n");
	printf("\n\t\tname : %s",person_name);
	printf("\n\t\tmobile Number : %s",mobile);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal subscriptions : %d",total_subcriptions);
	printf("\n\t\tcost per ticket : %d",b.cost);
	printf("\n\t\tTotal Amount : %d",total_amount);


	ufp=fopen("oldTransection.txt","a");  //this file teels previous transction
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %s %d %d %s %d \n",person_name,mobile,total_subcriptions,total_amount,b.name,b.cost);
		printf("\n Record insert Sucessfull to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}

void old_record()
{
	char ch;
	FILE *fp;

	//system("clear");

	fp = fopen("oldTransection.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		printf("displaying in the order of \n person_name\n mobile number\n number of subscriptions\n total amount\n name of the movie\n  cost of each subscriptions");
		system("clear");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);


}


