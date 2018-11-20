for (i=0; i<n; i++){
		for (k=0;k<n; k++){
			//printf("%s|| %s \n",str[i], str[k]);
			result = strcmp(str[i], str[k]);
			//printf("%d\n", result);
			if (result<0){
				strcpy(strtmp, str[k]);
				strcpy(str[k],str[i]);
				strcpy(str[i],strtmp);
			}
		}
		
	}
