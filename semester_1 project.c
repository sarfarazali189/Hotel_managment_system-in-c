#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void screenheader(void)
 {
   system("cls");
   printf("\n\t                       :::::::::::::::::::::::::::::::::::::");
   printf("\n\t                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n\t                       ::     @                     @     ::");
   printf("\n\t                       ::     @      WELCOME TO     @     ::");
   printf("\n\t                       ::     @                     @     ::");
   printf("\n\t                       ::     @      SSF HOTEL      @     ::");
   printf("\n\t                       ::     @      (KARACHI)      @     ::");
   printf("\n\t                       ::     @                     @     ::");
   printf("\n\t                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n\t                       :::::::::::::::::::::::::::::::::::::\n\n");
   printf("\n\n-----------------------------------\n");
   printf("PRESS ANY KEY TO CONTINUE.......\n");
   getch();
 }

void description(void)
{
	system("cls");
		printf("\n\n\t\t\t\t----------WELCOME TO SSF HOTEL KARACHI---------\n");
		printf("\n\n\t\tHotel SSF IS ONE OF THE NEWEST AND MOST UP TO DATE HOTEL IN KARACHI.\n\tTHE HOTEL IS EQUIPPED WITH ALL THE GENERAL REQUIREMENTS AND FACILITIES THAT GO ALONG WITH MEMORABLE STAY.\n\t\tSET BEAUTIFUL GARDENS,IT PROVES TO BE A IDEAL DESTINATION FOR RESPECTIVE TRAVELLER\n\t\tTHE HOTEL HAVE WELL FURNISHED ROOMS ALONG WITH ROOMS PROVIDING PLEASANT VIEWS OF THE CITY.\n\tTHE HOTEL ALSO PROVIDES RESTURANTS WITHIN THE HOTELL THAT PROVIDES QUALITY FOODS AND AT RESINABLE PRICE.\n\t\n\n--------------\n~FACILITIES.....\n\n \t\t1.100% POWER BACKUP.\n\t\t2.AUTOMATIC LIFT.\n\t\t3.PARKING USER.\n\t\t4.SECURITY\n\t\t5.FREE INTERNET\n\t\t6.RESTURANTS WITHIN HOTEL\n\t\t7.24 HOURS ROOM SERVICE\n\t\t8.TRANSPORT\n\t\t9.LAUNDARY SERVICE\n\n");
        printf("\n---------------\n");
		printf("PRESS ANY KEY TO CONTINUE...");
        getch();
}
void feature_of_room(void)
{
	int type;
   system("cls");
   printf("\nChoose the room type:\n1. Sp. Delux\n2. Delux");
   printf("\n3. General\n4. Couple\n5. C. Delux\n");
   scanf("%d",&type);
   if(type>5)
     {
       printf("\nWrong choice!! Choose a number between 1-5:");
       feature_of_room();
     }
   switch(type)
     {
       case 1:
	   system("cls");
       printf("\n Room number            >>>1");
       printf("\n Advance                >>>750\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Sp.delux");
       printf("\n\n Room charges         >>> Rs.1500 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n\n 3.Balcony available     ");
       printf("\n------------------------------------------------------------------");
       printf("\n                     ADDITIONAL FEATURES                        ");
       printf("\n------------------------------------------------------------------");
       printf("\n\n 1.A/C  available ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       printf("--------------------------------------------------------------------");
       printf("\nn\nPRESS ANY KEY TO GO TO MAIN MENU");
       getch();
       main_menu();                   
       break;
       
	   case 2:
	   system("cls");
       printf("\n Room number            >>>2\n\n");
       printf("\n Advance                >>>500\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Delux                                      ");
       printf("\n\n Room charges         >>>Rs.1000 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.A/C available   ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       printf("--------------------------------------------------------------------");
       printf("\nn\nPRESS ANY KEY TO GO TO MAIN MENU");
       getch();
       main_menu();
	   break;
       
	   case 3:
	   system("cls");
       printf("\n Room number            >>>3\n\n");
       printf("\n Advance                >>>400\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> General                                    ");
       printf("\n\n Room charges         >>>Rs.750 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.Geyser available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       printf("--------------------------------------------------------------------");
       printf("\nn\nPRESS ANY KEY TO GO TO MAIN MENU");
       getch();
       main_menu();
	   break;
       
	   case 4:
	   system("cls");
       printf("\n Room number            >>>4\n\n");
       printf("\n Advance                >>>500\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Couple                                     ");
       printf("\n\n Room charges         >>>Rs.1000 per day");
       printf("\n\n 1. Bed               >>>      1");
       printf("\n\n 2.Capacity           >>>      2");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.Geyser available");
       printf("\n\n 2.TV available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       printf("--------------------------------------------------------------------");
       printf("\nn\nPRESS ANY KEY TO GO TO MAIN MENU");
       getch();
       main_menu();
	   break;
       
	   case 5:
	   system("cls");
       printf("\n Room number            >>>5\n\n");
       printf("\n Advance                >>>750\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            >>> Couple Delux                                    ");
       printf("\n\n Room charges         >>>Rs.1500 per day");
       printf("\n\n 1. Bed               >>>      1");
       printf("\n\n 2.Capacity           >>>      2");
       printf("\n-------------------------------------------------------------------");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n 1.A/C available   ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n-------------------------------------------------------------------");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
       printf("--------------------------------------------------------------------");
       printf("\nn\nPRESS ANY KEY TO GO TO MAIN MENU");
       getch();
       main_menu();
	   break;
       
       default:
       	{
       		printf("INVALID CHOICE.");
		}
		break;
     }
}
void room_reservation(void)
{
	system("cls");
  int total,grandtotal,discount=0;
  	struct information
	{
		char name[50];
		char address[50];
		int nic[20];
		int phone;
		int dd;
		int mm;
		int yy;
		int days;
	};struct information c;
	printf("\t\t-----Following are RoomTypes----------\n\n\n");
	printf("\nSuperdelux = RS 5500 per day");
	printf("\nDELUX = RS 5000 per day");
	printf("\nGENERAL = RS 4500 per day");
	printf("\nCOUPLE = RS 4000 per day");
	printf("\nCOUPLE DELUX = RS 2000 per day");
	printf("\nPRESS ENTER TO CONTINUE................");
	getch();
	system("cls");
	FILE *fp;
	fp=fopen("CUSTOMERS RECORD.txt","a");
	printf("\n~Enter name:");
	scanf("%s",c.name);
	printf("\n~Enter address(WITHOUT SPACES USE (-) FOR SPACES):");
	scanf("%s",c.address);
	printf("~ENTER DATE OF ARRIVAL OF EMPLOYEE:-");
	printf("\n~Enter dd(XX):");
	scanf("%d",&c.dd);
	printf("\n~Enter mm(XX):");
	scanf("%d",&c.mm);
	printf("\n~Enter yy(XXXX):");
	scanf("%d",&c.yy);
	printf("\n~Enter Customer Phone Number:");
	scanf("%d",&c.phone);
	printf("\n~ENTER CNIC NUMBER:");
	scanf("%d",&c.nic);
	printf("\n~Number Of Days For Resevation:");
	scanf("%d",&c.days);
	fprintf(fp,"\n%s\n%s\n%d\n%d\n%d\n%d\n%d",c.name,c.address,c.dd,c.mm,c.yy,c.phone,c.nic);
	fclose(fp);
	char roomtype[30];
	
	printf("\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("       X Superdelux = RS 5500 per day X\n");
	printf("       X DELUX = RS 5000 per day      X\n");
	printf("       X GENERAL = RS 4500 per day    X\n");
	printf("       X COUPLE = RS 4000 per day     X\n");
	printf("       X C-DELUX = RS 2000 per day    X\n");
	printf("       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	
	printf("\n\n/*~NOTE ENTER TYPE OF ROOM IN SMALL CASE~*/\n");
	printf("\nEnter Room Type:\n");
	scanf("%s",&roomtype);
	

	int b = strcmp(roomtype,"superdelux");
	if(b==0)
	{
		total=c.days*5500;
		discount=20;
		grandtotal=total-(total*discount/100);
	}
	int g=strcmp(roomtype,"delux");
	if(g==0)
	{
		total=c.days*5000;
		discount=15;
		grandtotal=total-(total*discount/100);
	}
	int d=strcmp(roomtype,"general");
	if(d==0)
	{
		total=c.days*4500;
		discount=10;
		grandtotal=total-(total*discount/100);
	}
	int e=strcmp(roomtype,"couple");
	if(e==0)
	{
		total=c.days*4000;
		discount=5;
		grandtotal=total-(total*discount/100);
	}
int f=strcmp(roomtype,"ccouple");
	if(f==0)
	{
		total=c.days*2000;
		discount=0;
	grandtotal=total-(total*discount/100);
	}
	
	printf("Total Bill For Rooms is = RS-%d\n",grandtotal);
	printf("You have been given discount of %d percent \n",discount);
	printf("\n------------------------------------------\n");
	printf("ENJOY AND HAVE A GOOD TIME IN SSF HOTEL.\n");
	printf("\nPRESS ANY KEY TO CONTINUE......");
	getch();
	main_menu();
}

void transport(void)
{
	system("cls");
	FILE *fp;
	fp=fopen("TRANSPORT-RECORD.txt","a");
	if(fp == NULL)
	{
		printf("FILE DOENOT OPEN");
	}
	int a,noseats,total,grandtotal,discount=0;
	char name[45];
	int distance;
	int *b;
	b=&total;
	discount=0;
	char dropoff[200];
	printf("\n\t\t\t <<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>");
	printf("\n\t\t\t      WELCOME TO SSF TRANSPORT    \n");
	printf("\t\t\t   ----------------------------------\n");
	printf("\t\t\t   ----------------------------------\n");
	printf("\n\t\t\t      Prees 1 >>> BUS       \n");
	printf("\n\t\t\t      Prees 2 >>> CAR       \n");
	printf("\n\t\t\t      Prees 3 >>> MOTORBIKE \n");
	printf("\n\t\t\t      Prees 4 >>> EXIT \n");
	printf("\n\t\t\t ---------------------------------");
	printf("\n\t\t\t ---------------------------------");
	printf("\n\t\t\t <<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\n\n\n\n -----------------------------------\n\n");
	printf("~ENTER YOUR CHOICE:");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1 :
			fflush(stdin);
			system("cls");
			printf("\t\t\t\t XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("\t\t\t\t ----------------------------------------\n");
			printf("\t\t\t\t          <<<<<<     BUS       >>>>>>>\n\n");
			printf("\t\t\t\t ---------------------------------------\n\n\n");
			printf("\t\t\t\t          <<<<<<     RATE      >>>>>>>20/-per km\n");
			printf("\t\t\t\t -----------------------------------------\n");
			printf("\t\t\t\t -----------------------------------------\n");
			printf("\t\t\t\t XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			
			printf("\n\n\n~Enter DropOff Address:\n");
         	gets(dropoff);
	        printf("\n~Enter the Distance(IN KM):\n");
	        scanf("%d",&distance);
	        fflush(stdin);
	        printf("\n~Enter Customer Name:\n");
	        gets(name);
			*b=distance*20;
		    discount=5;
		    grandtotal=*b-(*b *discount/100);
		    printf("\n----------------------\n");
		    	
		    printf("~Total Bill = RS %d\n",total);
			printf("~Bill after discount  = RS %d\n",grandtotal);
	printf("~You have been given discount of %d percent \n",discount);
	fprintf(fp,"\n~Name=%s\n Distance travel =%d\t ~Dropoff location is %s\n",name,distance,dropoff);
	printf("\n------------------------------------------------\n");
	printf("~HAVE A SAFE JOURNEY\nENJOY :-)\n");
	getch();
    main_menu();
	break;
    
	case 2 :
	fflush(stdin);
	system("cls");
	printf("\n\t\t\t\t  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("\t\t\t\t    -----------------------------------------\n");
	printf("\t\t\t\t             <<<       CAR       >>>\n\n");
	printf("\t\t\t\t    -----------------------------------------\n");
	printf("\n\t\t\t\t           <<<       RATE      >>>50/- per km\n");
	printf("\n\t\t\t\t  ----------------------------------------\n");
	printf("\n\t\t\t\t  ----------------------------------------\n");
	printf("\t\t\t\t    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			
	printf("\n\n\n~Enter Dropoff Location:\n");
	gets(dropoff);
	printf("~Enter the distance(IN KM):\n");
	scanf("%d",&distance);
	fflush(stdin);
	printf("~Enter Customer Name:\n");
	gets(name);
			*b=distance*20;
			discount=5;
			grandtotal=*b-(*b *discount/100);
			printf("~Total Bill = RS %d\n",total);
			printf("~Bill after discount  = RS %d\n",grandtotal);
	printf("~You have been given discount of %d percent \n",discount);
	fprintf(fp,"\n~Name=%s\n ~Distance travel =%d\t ~Dropoff location is %s\n",name,distance,dropoff);
	printf("\n------------------------------------------------\n");
	printf("\n~HAVE A SAFE JOURNEY\nENJOY :-)");
    getch();
    main_menu();
	
	break;
	
	case 3 :
		fflush(stdin);
		
		system("cls");
            
			printf("\n\t\t\t\t XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");		
			printf("\t\t\t\t   ----------------------------------------\n");
			printf("\t\t\t\t                <<<     BIKE       >>>\n\n");
	        printf("\t\t\t\t   ----------------------------------------\n");
	        printf("\t\t\t\t                <<<     RATE       >>>25/- per km\n");
			printf("\t\t\t\t   ----------------------------------------\n");
			printf("\t\t\t\t   ----------------------------------------\n");
			printf("\t\t\t\t    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			
			printf("\n\n\n~Enter Dropoff Location:\n");
         	gets(dropoff);
	        printf("~Enter Distance(IN KM):\n");
	        scanf("%d",&distance);
	        fflush(stdin);
	        printf("~Enter Customer Name:\n");
	        gets(name);
			*b=distance*20; //pointer
			discount=5;
			grandtotal=*b-(*b *discount/100);
			printf("~Total bill for transport is = RS %d\n",total);
			printf("~Bill after discount = RS %d\n",grandtotal);
	printf("~You have been given discount of %d percent \n",discount);
	printf("\n------------------------------------------------\n");
	printf("~HAVE A SAFE JOURNEY\nENJOY :-)");
	printf("\nName=%s\n distance travel =%d\n dropoff location is %s",name,distance,dropoff);
	fprintf(fp,"\n~Name=%s\n ~Distance travel =%d\t Dropoff location=%s\n",name,distance,dropoff);
	getch();
	main_menu();
	
	case 4:
		main_menu();
	
	 default:
	 {
	 	system("cls");
	 	printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-3\n");
        getch();
        transport();
	 }
	 break;

  }
  fclose(fp);
}

//INCLUDING HEADER FILES FOR RESTURANT SYSTEM//
#include "fastfood.h"
#include "desifood.h"
#include "chinesefood.h"
#include "desertfood.h"

//RESTURANT SYSTEM
void resturant(void)
{
	system("cls");
	int choice1;
	
	printf("\n\t\t\tWELCOME TO SSF RESTURANT\n");
	printf("\n\n~THERE ARE ALL KIND OF FOODS:\n\n");
	printf("\n1.FAST FOOD RESTURANT\n2.DESI FOOD RESTURANT\n3.CHINESE FOOD RESTURANT\n4.DESERT\n5.EXIT\n\n\n~ENTER YOUR CHOICE:");
    scanf("%d",&choice1);
    system("cls");
    printf("PRESS ANY KEY TO CONTINUE....");
    getch();

    switch(choice1)
	{
    	case 1:
    		{
    			system("cls");
    			fast_food_resturant();    //CALLING FUNCTION FROM HEADER FILE//
            }
		break;
			
		case 2:
		{
			system("cls");
			desi_food_resturant();       //CALLING FUNCTION FROM HEADER FILE//
		}
			break;
		
		case 3:
		{
			system("cls");
			chinese_food_resturant();     //CALLING FUNCTION FROM HEADER FILE//
        }
		break;
		
		case 4:
		{
			system("cls");
			desert_world_resturant();     //CALLING FUNCTION FROM HEADER FILE//
        }
		break;
		
		case 5:
		{
			main_menu();	//BACK TO MAIN MENU
		}
		break;
		
		default: //FOR INVALID CHOICE//
		{
			system("cls");
			printf("INVALID CHOICE....");
			printf("Chose 1-4\n");
			getch();
			system("cls");
			resturant(); 
		 } 
	}
}
//FOR SHOWING THE CUSTOMER IN HOTEL//
void customer_detail(void)
{
	system("cls");
	
	//STRUCTURE//
	  struct information
	{
	char name[50];
	char address[300];
	int nic[30];
	int phone;
	int dd;
	int mm;
	int yy;
	};struct information c;
	FILE *fp;                          //FILING 
	                                   //STORING ALL DATA IN FILE AS RECORD
	fp=fopen("CUSTOMERS RECORD.txt","r");
	if(fp==NULL)
	{
		printf("File cannot open.");
		printf("\nPLEASE GO BACK AND ENTER SOME DATA.");
		getch();
		main_menu();
	}
	while(fscanf(fp,"%s\n%s%d%d%d%d%d",&c.name,&c.address,&c.dd,&c.mm,&c.yy,&c.phone,&c.nic)>0)
	{
		printf("\n~NAME:%s\nADDRESS:%s\nARRIVAL:%d/%d/%d\nCUSTOMER PHONE:%d\nCUSTOMER CNIC:%d",c.name,c.address,c.dd,c.mm,c.yy,c.phone,c.nic);
	}
	fclose(fp);
	printf("-----------------");
	printf("\n\nPress Any Key to Return......");
	getch();
	main_menu();
	
}
//FOR DEALLOCATE//
void deallocate(void)
{
		struct information
	{
	char name[50];
	char address[300];
	int nic[20];
	int phone;
	int dd;
	int mm;
	int yy;
	};struct information c;
	system("cls");
	char name1[50];
	FILE *fp,*ft;
	fp=fopen("CUSTOMERS RECORD.txt","r");
	if(fp==NULL)
	{
		printf("file cannot open");
		exit(0);
	}
	ft=fopen("CUSTOMERS RECORD.txt1","a");
	printf("Enter Customer Name To Deallocate:");
	scanf("%s",name1);
	while(fscanf(fp,"%s%s%d%d%d%d%d",&c.name,&c.address,&c.dd,&c.mm,&c.yy,&c.phone,&c.nic)>0)
	{
		if(strcmp(c.name,name1)==0)
		{
			printf("ROOM SUCCESSFULLY DEALLOCATED.");
			continue;
		}
		else
		{
			 fprintf(ft,"%s\n%s%d/%d/%d%d%d",c.name,c.address,c.dd,c.mm,c.yy,c.phone,c.nic);
		}
	
	}
	fclose(fp);
	fclose(ft);
	remove("CUSTOMERS RECORD.txt");
	rename("CUSTOMERS RECORD.txt1","CUSTOMERS RECORD.txt");
	getch();
    main_menu();
}
//MAIN-MENU//
void main_menu(void)
{
	   system("cls");
       int ch;
       printf("                      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
       printf("                      X                   ------------WELCOME TO SSF HOTEL------------                X\n");
       printf("                      X                            Choose a category:                                 X\n");
       printf("                      X                           1. Room Reservation                                 X\n");
       printf("                      X                           2. Features of room                                 X\n");
       printf("                      X                           3. Resturant                                        X\n");
       printf("                      X                           4. Transport                                        X\n");
       printf("                      X                           5. Total Number of Customers and their Details      X\n");
       printf("                      X                           6. Room Deallocation                                X\n");
       printf("                      X                           7. Exit                                             X\n");
       printf("                      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
       printf("\n\n\n~~~~~~~~~~~~~~~~~~~~");
       printf("\n~ENTER YOUR CHOICE=");
       scanf("%d",&ch);
       switch(ch)
    {
     case 1:
     	{
		 room_reservation();
		}
     	
	 break;
     
	 case 2:
	 {
	 	feature_of_room();
	 }
     break;
     
	 case 3:
	 {
        resturant();
	 }
     break;
     
	 case 4:
	 	{
	 		transport();
		}
     break;
     
	 case 5:
	 {
        customer_detail();
	 }
     break;
     
    case 6:
	 {
	 	deallocate();
     }  
	 break;
     
	 case 7:
	 {
	 	exit(0);
	 }
     break;
     
	 default:
	 {
	 	system("cls");
	 	printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-6");
        getch();
        main_menu();
	 }
	 break;
   }
}
//PROGRAM MAIN//
void main(void)
{
		struct customer{
		char name[40];
		char address[300];
		int phonenumber;
		int days;
		int cnic;
		int dd,mm,yy;
	};
	
	struct customer c;
	//CALLING FUNCTIONS//
    screenheader();
    description();
	main_menu();
	
}
