i=0;
	strcpy(occorrenze_stringa[occorrenze_pos], str[i]);
	occorrenze[0]=1;
   
   for (i=1; i<n; i++){
	   result = strcmp(occorrenze_stringa[occorrenze_pos], str[i]);
		//strcpy(occorrenze_stringa[occorrenze_pos], str[i]);
		
		if (result == 0){
			occorrenze[occorrenze_pos]++;
			strcpy(occorrenze_stringa[occorrenze_pos], str[i]);
			
		}
		else {
			occorrenze_pos++;
			strcpy(occorrenze_stringa[occorrenze_pos], str[i]);
			occorrenze[occorrenze_pos]++;
		}
   
   }
