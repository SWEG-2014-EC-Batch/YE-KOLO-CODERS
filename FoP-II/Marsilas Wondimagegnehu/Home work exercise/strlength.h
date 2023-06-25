
#ifndef STRLENGTH_H
#define STRLENGTH_H

int stringLength(const char* str){
 	int length = 0;
     while(str[length] != '\0'){
     	length++;
	 }
 	return length;
}

int countVowels(const char* str){
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++){
	      if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
	      	   count++;
		  }	  
	}
	return count;
}

int countConsonant(const char* str){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') && !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
            count++;
        }
    }
    return count;
}
#endif
