int ft_strlength(char *str){
 int i=0;

	while(str[i] != '\0'){
		i++;
	}

 return i-1;
}

char *ft_strrev(char *str){

	int length = ft_strlength(str)-1;
	char tmp;

	for(int i=0; i<length; i++){

		tmp = str[i];

		str[i] = str[length];

		str[length] = tmp;

		length --;

	}

	return str;
}
