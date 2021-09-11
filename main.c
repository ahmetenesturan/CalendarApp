#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <windows.h>

//dayview bitir, bellek ayırmayı hallet
struct event
{
	char name[20], descr[100];
	int day, month, hour, minute;
};

struct currentTimeStruct
{
	int day, month, hour, minute;
};

struct event createEvent()
{
	struct event newEvent;
	printf("Name(max 20 characters): ");
	scanf(" %[^\n]%*c", newEvent.name);
	printf("\nDescription(max 100 characters): ");
	scanf(" %[^\n]%*c", newEvent.descr);
	printf("\nDay(between 1 - 31): ");
	scanf("%d", &newEvent.day);
	printf("\nMonth(between 1 - 12): ");
	scanf("%d", &newEvent.month);
	printf("\nHour(between 0 - 23): ");
	scanf("%d", &newEvent.hour);
	printf("\nMinute(between 0 - 59): ");
	scanf("%d", &newEvent.minute);
	return newEvent;

}

void monthview(int month, struct event events[], int eventnum)
{
	int check;
	switch (month)
	{
	case 0:
		printf("              January\n");
		for (int i = 1; i <= 31; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
					if (events[j].month == month+1 && events[j].day == i)
					{
						if (i / 10 < 1)
						{
							printf(" *%d* ", i);
						}
						else
						{
							printf(" *%d*", i);
						}
						++check;
						break;
					}

					else if(check == 1)
					{
						if (i / 10 < 1)
						{
							printf("  %d  ", i);
						}
						else
						{
							printf("  %d ", i);
						}
					}
				}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nJanuary\n1    2    3    4    5    6    7\n8    9    10   11   12   13   14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 31");
		break;

	case 1:
		printf("              February\n");
		for (int i = 1; i <= 28; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nFebruary\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28");
		break;

	case 2:
		printf("              March\n");
		for (int i = 1; i <= 31; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nMarch\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 31");
		break;

	case 3:
		printf("              April\n");
		for (int i = 1; i <= 30; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nApril\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30");
		break;

	case 4:
		printf("              May\n");
		for (int i = 1; i <= 31; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nMay\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 31");
		break;

	case 5:
		printf("              June\n");
		for (int i = 1; i <= 30; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nJune\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 30");
		break;

	case 6:
		printf("              July\n");
		for (int i = 1; i <= 31; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nJuly\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 30");
		break;

	case 7:
		printf("              August\n");
		for (int i = 1; i <= 31; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nAugust\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 31");
		break;

	case 8:
		printf("              September\n");
		for (int i = 1; i <= 30; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nSeptember\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 30");
		break;

	case 9:
		printf("              October\n");
		for (int i = 1; i <= 31; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nOctober\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 31");
		break;

	case 10:
		printf("              November\n");
		for (int i = 1; i <= 30; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nNovember\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 30");
		break;

	case 11:
		printf("              December\n");
		for (int i = 1; i <= 31; ++i)
		{
			check = 0;
			for (int j = 0; j <= eventnum; ++j)
			{
				if (j == eventnum)
				{
					++check;
				}
				if (events[j].month == month+1 && events[j].day == i)
				{
					if (i / 10 < 1)
					{
						printf(" *%d* ", i);
					}
					else
					{
						printf(" *%d*", i);
					}
					++check;
					break;
				}
				else if (check == 1)
				{
					if (i / 10 < 1)
					{
						printf("  %d  ", i);
					}
					else
					{
						printf("  %d ", i);
					}
				}
			}
			if (i % 7 == 0)
			{
				printf("\n");
			}
		}
		//printf("\nDecember\n1  2  3  4  5  6  7 \n8  9  10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 31");
		break;
	}
}

void dayview(int day, int month, struct event events[], int eventnum)
{
	struct event todaysevents[100];
	int dayviewin = 0;
	for (int i = 0; i <= eventnum; ++i)
	{
		if (events[i].day == day && events[i].month == month)
		{
			todaysevents[dayviewin] = events[i];
			++dayviewin;
		}
	}

	for (int i = 0; i < dayviewin; ++i)
	{

	}
}

struct currentTimeStruct currentTimeFunc()
{
	char monthstr[10], date[10];
	int day, hour, minute;
	time_t current_time;
	char* c_time_string;
	current_time = time(NULL);
	c_time_string = ctime(&current_time);
	char bos[2] = " ";
	char ikinokta[2] = ":";
	char* token, * token1;
	token = strtok(c_time_string, bos);
	int in = 0;
	while (token != NULL) {
		token = strtok(NULL, bos);
		if (in == 0)
		{
			strcpy(monthstr, token);
		}
		else if (in == 1)
		{
			char daystr[3];
			strcpy(daystr, token);
			day = atoi(daystr);
		}
		else if (in == 2)
		{
			strcpy(date, token);
			break;
		}

		++in;
	}
	int in1 = 0;
	token1 = strtok(date, ikinokta);
	while (token1 != NULL) {
		char hourstr[4];
		strcpy(hourstr, token1);
		hour = atoi(hourstr);
		token1 = strtok(NULL, ikinokta);
		if (in1 == 0)
		{
			char minutestr[4];
			strcpy(minutestr, token1);
			minute = atoi(minutestr);
			break;
		}

		++in1;

	}
	//Hatalı
	int month = 1;
	if (monthstr == "Jan")
	{
		month = 1;
	}
	else if (monthstr == "Feb")
	{
		month = 2;
	}
	else if (monthstr == "Mar")
	{
		month = 3;
	}
	else if (monthstr == "Apr")
	{
		month = 4;
	}
	else if (monthstr == "May")
	{
		month = 5;
	}
	else if (monthstr == "Jun")
	{
		month = 6;
	}
	else if (monthstr == "Jul")
	{
		month = 7;
	}
	else if (monthstr == "Aug")
	{
		month = 8;
	}
	else if (monthstr == "Sep")
	{
		month = 9;
	}
	else if (monthstr == "Oct")
	{
		month = 10;
	}
	else if (monthstr == "Nov")
	{
		month = 11;
	}
	else if (monthstr == "Dec")
	{
		month = 12;
	}
	struct currentTimeStruct curTime;
	curTime.month = month;
	curTime.day = day;
	curTime.hour = hour;
	curTime.minute = minute;

	return curTime;
}


int main()
{
	struct event* eventmem = (struct event*)malloc(100 * sizeof(struct event));
	char input;
	int ay = 0, eventnumber, eventcount = 0;
	struct event events[100];
	FILE* eventfiles[100];
	struct stat fileStat[100];
	char txt[] = ".txt"; 

	//opening event files
	for (int i = 0; i < 100; ++i)
	{
		char filename[20];
		sprintf(filename, "%d", i);
		strcat(filename, txt);
		stat(filename, &fileStat[i]);
		eventfiles[i] = fopen(filename, "r");
	}

	//checking event files for possible events

	for (int i = 0; i < 100; ++i)
	{
		if (fileStat[i].st_size == 0)
		{
			continue;
		}
		else
		{
			fscanf(eventfiles[i], " %[^\n]%*c\n %[^\n]%*c\n%d\n%d\n%d\n%d", &events[i].name, &events[i].descr, &events[i].day, &events[i].month, &events[i].hour, &events[i].minute);
			++eventcount;
		}

	}
	//closing event files
	for (int i = 0; i < 100; ++i)
	{
		fclose(eventfiles[i]);
	}
	
	for (;;)
	{
		struct currentTimeStruct currentTime = currentTimeFunc();
		//Checking alarms
		for (int i = 0; i < eventcount; ++i)
		{

			if (events[i].month < currentTime.month)
			{
				MessageBeep(MB_OK);
				printf("\nAlarm for Event %d\nName: %s\nDescription: %s\nDate: %d . %d . 2021\nHour: %d . %d\n", i + 1, events[i].name, events[i].descr, events[i].day, events[i].month, events[i].hour, events[i].minute);
				char deletefilename[20];
				sprintf(deletefilename, "%d", i);
				strcat(deletefilename, txt);
				eventfiles[i] = fopen(deletefilename, "w");
				fclose(eventfiles[i]);
			}
			else if ((events[i].month == currentTime.month) && (events[i].day < currentTime.day))
			{
				MessageBeep(MB_OK);
				printf("\nAlarm for Event %d\nName: %s\nDescription: %s\nDate: %d . %d . 2021\nHour: %d . %d\n", i + 1, events[i].name, events[i].descr, events[i].day, events[i].month, events[i].hour, events[i].minute);
				char deletefilename[20];
				sprintf(deletefilename, "%d", i);
				strcat(deletefilename, txt);
				eventfiles[i] = fopen(deletefilename, "w");
				fclose(eventfiles[i]);
			}
			else if ((events[i].month == currentTime.month) && (events[i].day == currentTime.day) && (events[i].hour < currentTime.hour))
			{
				MessageBeep(MB_OK);
				printf("\nAlarm for Event %d\nName: %s\nDescription: %s\nDate: %d . %d . 2021\nHour: %d . %d\n\n\n", i + 1, events[i].name, events[i].descr, events[i].day, events[i].month, events[i].hour, events[i].minute);
				char deletefilename[20];
				sprintf(deletefilename, "%d", i);
				strcat(deletefilename, txt);
				eventfiles[i] = fopen(deletefilename, "w");
				fclose(eventfiles[i]);
			}
			else if ((events[i].month == currentTime.month) && (events[i].day == currentTime.day) && (events[i].hour == currentTime.hour) && (events[i].minute <= currentTime.minute))
			{
				MessageBeep(MB_OK);
				printf("\nAlarm for Event %d\nName: %s\nDescription: %s\nDate: %d . %d . 2021\nHour: %d . %d\n\n\n", i + 1, events[i].name, events[i].descr, events[i].day, events[i].month, events[i].hour, events[i].minute);
				char deletefilename[20];
				sprintf(deletefilename, "%d", i);
				strcat(deletefilename, txt);
				eventfiles[i] = fopen(deletefilename, "w");
				fclose(eventfiles[i]);
			}
		}
		printf("Select an option to continue:\nc -> Calendar\ne -> Event List\nq -> Quit\n");
		scanf(" %c", &input);
		system("cls");
		//Quit input
		if (input == 'q')
		{
			printf("Do you want the close the application? (y:Yes/n:No)\n");
			scanf(" %c", &input);
			if (input == 'y')
			{
				break;
			}
			else if (input != 'n')
			{
				printf("\nIncorrect entry.\n");
			}
		}
		//calendar input
		else if (input == 'c')
		{
			for (;;)
			{
				monthview(ay, events, eventcount);
				printf("\nTo change to month press 'a' / 'd' buttons. To exit the calendar press 'q' button.");
				scanf(" %c", &input);
				if (input == 'q')
				{
					break;
				}
				else if (input == 'd')
				{
					if (ay == 11)
					{
						ay = 0;
					}
					else 
					{
						++ay;
					}
				}
				else if (input == 'a')
				{
					if (ay == 0)
					{
						ay = 11;
					}
					else
					{
						--ay;
					}
				}
				system("cls");
			}
		}

		//event input

		else if (input == 'e')
		{
			for (;;)
			{
				
				for (int i = 0; i < eventcount; ++i)
				{
					printf("\nEvent %d\nName: %s\nDescription: %s\nDate: %d . %d . 2021\nHour: %d . %d\n", i + 1, events[i].name, events[i].descr, events[i].day, events[i].month, events[i].hour, events[i].minute);
				}
				if (eventcount == 0) printf("There is no event.\n");

				printf("Select an option to continue:\nn -> Create New Event\nd -> Delete an Event\nq -> Quit\n");
				scanf(" %c", &input);
				if (input == 'q')
				{
					break;
				}
				
				else if (input == 'd')
				{
					int deletein;
					printf("Enter the number of event that you want the delete...\n");
					scanf("%d", &deletein);
					system("cls");
					char deletefilename[20];
					sprintf(deletefilename, "%d", deletein-1);
					strcat(deletefilename, txt);
					eventfiles[deletein-1] = fopen(deletefilename, "w");
					fclose(eventfiles[deletein-1]);
					MessageBeep(MB_OK);
					printf("The event has been deleted.\n");
				}

				else if (input == 'e')
				{
					int deletein;
					printf("Enter the number of event that you want the edit...\n");
					scanf("%d", &deletein);
					system("cls");
					char deletefilename[20];
					sprintf(deletefilename, "%d", deletein - 1);
					strcat(deletefilename, txt);
					eventfiles[deletein - 1] = fopen(deletefilename, "w");
					events[deletein - 1] = createEvent();
					MessageBeep(MB_OK);
					fprintf(eventfiles[deletein - 1], " %s\n %s\n%d\n%d\n%d\n%d", events[deletein - 1].name, events[deletein - 1].descr, events[deletein - 1].day, events[deletein - 1].month, events[deletein - 1].hour, events[deletein - 1].minute);
					fclose(eventfiles[deletein - 1]);
					printf("The event has been edited.\n");
				}

				else if (input == 'n')
				{
					for (int i = 0; i < 100; ++i)
					{
						char filename[20];
						sprintf(filename, "%d", i);
						strcat(filename, txt);
						stat(filename, &fileStat[i]);
						eventfiles[i] = fopen(filename, "r");
						if (fileStat[i].st_size == 0)
						{
							eventnumber = i;
							fclose(eventfiles[i]);
							break;
						}
						fclose(eventfiles[i]);
						
					}
					char filename[20];
					sprintf(filename, "%d", eventnumber);
					strcat(filename, txt);
					eventfiles[eventnumber] = fopen(filename, "w");
					events[eventnumber] = createEvent();
					MessageBeep(MB_OK);
					fprintf(eventfiles[eventnumber], " %s\n %s\n%d\n%d\n%d\n%d", events[eventnumber].name, events[eventnumber].descr, events[eventnumber].day, events[eventnumber].month, events[eventnumber].hour, events[eventnumber].minute);
					++eventcount;
					fclose(eventfiles[eventnumber]);
					system("cls");
				}

				else
				{
					printf("\nIncorrect entry.\n");
				}


			}
			system("cls");
		}
		

		system("cls");
	}

	free(eventmem);
	return 0;
}