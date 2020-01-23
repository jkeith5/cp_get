#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	//check if program was called with two terminal arguments. if not exit.
	if (argc!=3){
		print("System was expecting two arguments: fileToBeCopied and fileToCopyTo.\n");
		exit(1);
	}
	int byteCopied;
 	FILE *ftarget; //file to copy
	FILE *fdestination; //file to copy to
	//open the files
	fdestination = fopen(argv[2], "w");
	//determine if target file exists
	if (ftarget = fopen(argv[1], "r")==NULL){
		print("Target filepath does not exist or you do not have access to it.\n");
		exit(2);
		fclose(fdestination);
	}
	//the target file exists, begin copying file over.
	while((byteCopied = fgetc(ftarget))!= EOF){
		fputc(byteCopied, fdestination);
	}
	//close the files since copying was successful
	fclose(ftarget);
	fclose(fdestination);
	
	return 0;
}

