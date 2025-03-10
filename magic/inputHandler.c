#include "inputHandler.h"


char  *myFileReader(char *fileName) {
	FILE* file;
	char ch;

	//manages if there is 2 spaces between chars
	int spaceCounter = 0;
	//shows  if there was a spcace before the currently readed caracter 
	bool my_swich = false;
	char str[12];

	//counts the lenght of the str
	int iter = 0;
	//counts the smaler str len, if its more than 3 than the big str is just a regular str
	//smaler str is for example int a str "9D 10D ddd"smaler str is "9D"
	int myLen = 0;

	//it would open the file if its an existing file
	file = fopen(fileName,"r");
	if (file == NULL) {
		printf("Error with the file");
		return EXIT_FAILURE;
	}


	ch = fgetc(file);
	//trims the spaces befor the string
	while (ch == ' ') {ch = fgetc(file);}

	//it reads the chars and manages the spaces and line brakes and put the chars in a string
	while (ch != EOF)
	{

		if (ch != ' ' && ch != '\n') {
			my_swich = false;
			str[iter] = ch;
			iter++;
			myLen++;
		}
		else {
			//if the smaler str is 1 char long than ist a regular str
			if (myLen == 1) return "-";
			my_swich = true;
			str[iter] = ' ';
			iter++;
			myLen = 0;
			spaceCounter++;

		}
		if (iter > 12 || spaceCounter == 3 )return "-";

		ch = fgetc(file);

		//if there was 2 spaces in the str than eather it is a regular text, if there is another carater if there is not than it could be not a regular str
		if (my_swich && ch == ' ') {
			bool isRegular = false;
			while (ch != EOF) {
				ch = fgetc(file);
				if (ch != ' ' && ch != EOF)isRegular =true;
			}
			if (isRegular)return "-";
			break;
		}

	}
	//because of the my_swich the str will come out with or without a spcase at the end of the str
	//at the and of the string schound't be a space
	if(str[iter-1]==' ')str[iter-1] = '\0';
	else str[iter] = '\0';

	fclose(file);
	return str;
}

