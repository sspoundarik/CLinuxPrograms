#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[], char* env[])
{
	printf("Content-type:text/html\n\n<html><body bgcolor=#23abe2>\n");
	char value[256] = "";
	strncpy(value, (char*)getenv("QUERY_STRING"),255);
	printf("QUERY_STRING : %s<BR>\n", value);
	printf("<form>\n");
	printf("<input type=\"TEXT\" name=\"ITEM1\">\n");
	printf("<input type=\"TEXT\" name=\"ITEM2\">\n");
	printf("<input type=\"SUBMIT\">");
	printf("</form></body></html>\n");
	return 0;
}