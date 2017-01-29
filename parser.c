/********************************************************
 *                                                      *
 *      			Dimitris Greasidis                  *
 *                                                      *
 *				Email: temeteron@gmail.com				*
 *														*
 *      		Github Username: Temeteron         		*
 *                                                      *
 *      			Parse a text and        			*
 *      		  	  get the words		            	*
 *            			                       			*
 *                                                      *
 ********************************************************/

#include<stdio.h>	
#include<string.h>
#define N 1024

int main (int argc, char*argv[]) {
	char words[N], text[N], c, euretirio[N/2][28];
	int i, j, k, p, t, b, size_of_text;

	/* Input */
	c = getchar();
	for (i = 0; c != EOF && i < N; i++){
		text[i] = c;
		c=getchar();
	}
	size_of_text = i;
	/*for(i=0; i<size_of_text; i++){
		printf("%c", words[i]);
	}
	printf("\n");
	printf("%d xaraktires\n", size_of_text);*/
/*2o stadio*/	
	for(k = 0, i = 0; k < size_of_text && i < N/2; i++){
		j = 0;
		while (((text[k] < 65 || text[k] > 90) && (text[k] < 97 || text[k] > 122)) && (k < size_of_text)){
			k++;
		}
		while (((text[k] >= 65 && text[k] <= 90) || (text[k] >= 97 && text[k] <= 122)) && k < size_of_text && j < 28){	
			c = text[k];
			words[j] = c;
			k++;
			j++;
		}
		if ( k < size_of_text ){
			for (b = 0; b <28; b++){
				euretirio[i][b] = words[b];
			}
		}
			
		for ( j = j; j < 28; j++){
			euretirio[i][j] = 1;
		}
		k++;
	}
	for(p = 0;  p < i -1; p++){
		t = 0;
		while (((euretirio[p][t] >= 65 && euretirio[p][t] <= 90) || (euretirio[p][t] >= 97 && euretirio[p][t] <= 122)) && (t < 28)){
			printf("%c", euretirio[p][t]);
			t++;
		}
		printf("\n");
	}
	
		 
	
	
	return 0;
}

	
 
