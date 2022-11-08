#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
#include<string.h>
char ans=0;
int choose;
int ok;
int b,valid=0;
void WelcomeScreen(void);
void Title(void);
void Main_Menu(void);
void LoginScreen(void);
void discharge(void);
void Add_rec(void);
void func_list(void);
void Search_rec(void);
void Edit_rec(void);
void Delete_rec(void);
void ex_it(void);
void Room_search(void);
void Patient_admit(void);
void lab(void);
void Doctor(void);
void NEUROLOGIST(void);
void CARDIOLOGIST(void);
void GENERAL_PHYSICAN(void);
void SUREGON(void);
void gotoxy(short x, short y)
{
COORD pos = {x, y};//sets co-ordinates in (x,y).
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
} 	
 
void Main_Menu(void)//function decleration
{
	system("cls");
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. Add Patients Record\n");
	printf("\n\t\t\t\t2. List Patients Record\n");
	printf("\n\t\t\t\t3. Search Patients Record\n");
	printf("\n\t\t\t\t4. Edit Patients Record\n");
	printf("\n\t\t\t\t5. Delete Patients Record\n");
	printf("\n\t\t\t\t6. Doctor list\n");
	printf("\n\t\t\t\t7. Patient admit\n");
	printf("\n\t\t\t\t8. Admitted patient room search\n");
	printf("\n\t\t\t\t9. Lab test\n");
	printf("\n\t\t\t\t10. Discharge report\n");
	printf("\n\t\t\t\t11. Exit\n");
	printf("\n\n\n\n\t\t\t\tChoose from 1 to 10:\n\n");
	scanf("%i", &choose);
	getch();
		switch(choose)//switch to differeht case
{
case 4:
       Edit_rec();
       break;
case 5:
       Delete_rec();
       break;
case 8:
       Room_search();
       break;
case 7:
       Patient_admit();
       break;
case 6:
        Doctor();
        break;
case 1:
        Add_rec();
        break;
case 2:
        func_list();
        break;
case 3:
       Search_rec();
       break;
case 9:
        lab();
        break;
case 11:
        ex_it();
        break;
case 10:
       discharge();
       break;
 
default:
    printf("invalid  character entered please entered correct character again\n");
    Main_Menu();
	}
}	
void Patient_admit()
{
    system("cls");
	Title();// call Title function
	//list of variables
	char ans;
	FILE*op;
	op=fopen("Record1.dat","a");//open file in write mode
	printf("\n\n\t\t\t!!!!!!!!!!!!!! PATIENT ADMIT RECORD !!!!!!!!!!!!!\n");
 
 
	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",p.First_Name);
	p.First_Name[0]=toupper(p.First_Name[0]);
	if(strlen(p.First_Name)>20||strlen(p.First_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(p.First_Name);b++)
		{
			if (isalpha(p.First_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
 
	/* ********************************************** Last name ************************************************ */
	B:
	printf("\n\t\t\tLast Name: ");
    scanf("%s",p.Last_Name);
    p.Last_Name[0]=toupper(p.Last_Name[0]);
    if(strlen(p.Last_Name)>20||strlen(p.Last_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");
		goto B;
	}
	else
	{
		for (b=0;b<strlen(p.Last_Name);b++)
		{
			if (isalpha(p.Last_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Last name contain Invalid character :(  Enter again :)");
			goto B;
		}
	}
/* ******************************************* Gender ************************************************************** */
	do
	{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&p.Gender);
		if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
		{
			ok =1;
		}
		else
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */
    printf("\n\t\t\tAge:");
    scanf(" %i",&p.age);
/* **************************************** Address ******************************************************************* */
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",p.Address);
    p.Address[0]=toupper(p.Address[0]);
    if(strlen(p.Address)>20||strlen(p.Address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
 
}while(!valid);
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",p.Contact_no);
    if(strlen(p.Contact_no)>10||strlen(p.Contact_no)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(p.Contact_no);b++)
		{
			if (!isalpha(p.Contact_no[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",p.Email);
    if (strlen(p.Email)>30||strlen(p.Email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");
	}
}while(strlen(p.Email)>30||strlen(p.Email)<8);
/* ********************************************************* Problem *********************************************** */
    E:
    printf("\n\t\t\tProblem: ");
    scanf("%s",p.Problem);
    p.Problem[0]=toupper(p.Problem[0]);
    if(strlen(p.Problem)>15||strlen(p.Problem)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 15 and min range is 3 :)");
		goto E;
	}
	else
	{
		for (b=0;b<strlen(p.Problem);b++)
		{
			if (isalpha(p.Problem[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Problem contain Invalid character :(  Enter again :)");
			goto E;
		}
	}
/* ********************************************** Prescribed Doctor **************************************** */
	F:
    printf("\n\t\t\tPrescribed Doctor:");
    scanf("%s",p.Doctor);
    p.Doctor[0]=toupper(p.Doctor[0]);
    if(strlen(p.Doctor)>30||strlen(p.Doctor)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 30 and min range is 3 :)");
		goto F;
	}
	else
	{
		for (b=0;b<strlen(p.Doctor);b++)
		{
			if (isalpha(p.Doctor[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Doctor name contain Invalid character :(  Enter again :)");
			goto F;
		}
	}
	G:
	    printf("\n\t\t\tEnter the date:\n");
	    scanf("%s",p.date);
	     if(strlen(p.date)<9)
         {
             printf("Invalid date please enter again\n");
             goto G;
         }
         H:
             printf("\n\t\tEnter the room:\n");
             scanf("%s",p.room);
    fprintf(op," %s %s %c %i %s %s %s %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor, p.room, p.date);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(op);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Patient_admit();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Main_Menu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Room_search()
    {
	char name[20];
	system("cls");
	Title();
	FILE *op;
	op=fopen("Record1.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Admitted Patient Room !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Patient Name whose room has to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(op,"%s %s %c %i %s %s %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor, p.room, p.date)!=EOF)
	{
		if(strcmp(p.First_Name,name)==0)
		{
 
			printf("Full Name:");
			printf("%s %s\n",p.First_Name, p.Last_Name);
			printf("Gender:");
			printf("%c\n",p.Gender);
			printf("Age:");
            printf("%i\n",p.age);
			printf("Address:");
            printf("%s\n",p.Address);
			printf("Room no:");
			printf("%s\n",p.room);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.First_Name,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(op);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Room_search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		Main_Menu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
