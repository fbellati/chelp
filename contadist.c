conta_distanza = 0;
   dist_max =0;
   for (i=0; i<n; i++){
	  if(strcmp(str[i], str[i+1]) < 0){
		  conta_distanza++;
		  if (conta_distanza > dist_max){
			  dist_max = conta_distanza;
		  }
	  }
	  else{
		conta_distanza = 0;  
	  }
   }
   printf("max:%d\n", dist_max);
   
