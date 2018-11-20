int n=0;
   
fp = fopen("file.txt", "r"); 
while (fscanf_result != EOF) {
	fscanf_result = fscanf(fp, "%s", str[n]);
	//printf("Read String |%s|\n", str[n] );
	n++;
	}
n--;
