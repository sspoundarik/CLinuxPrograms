#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[], char* env[])
{
	char *token = NULL;
	char color1[256] = "";
	char color2[256] = "";
	int wide=0;
	int high=0;
	int columns=0;
	int rows=0;
	char countryName[50];
	//read tokens	
	token = (char*)strtok(argv[1],":");
	strcpy(color1,token);
	token=(char*)strtok(NULL,":");
	strcpy(color2,token);
	token=(char*)strtok(NULL,":");
	wide=atoi(token);
	token=(char*)strtok(NULL,":");
	high=atoi(token);
	token=(char*)strtok(NULL,":");
	strcpy(countryName, token);
	//generate html
	printf("Content-type:text/html\n\n");
	printf("<html>\n");
	printf("<body>\n");
	printf("<center>");
	printf("<table bgcolor=\"%s\" border=1>\n", color1);
	for (rows=0; rows<high; rows++)
	{
		printf("<tr>\n");
		for (columns=0; columns<wide; columns++)
		{
			if (columns==wide/2 || rows==high/2)
			{
				printf("<td bgcolor=\"%s\"><bold>%s</bold></td>\n", color1, countryName);
			}
			else
			{
				printf("<td bgcolor=\"%s\"></td>\n", color2);
			}
		}
		printf("</tr>\n");
	}
	printf("</table>\n");
	printf("</body>\n");
	printf("</html>\n");
	return 0;
}