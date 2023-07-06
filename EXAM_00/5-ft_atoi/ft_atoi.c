int ft_atoi(const char *str){

	int i=0;
	int signo=1;
	int resultado=0;
	
	 if(str[i]=='-'){
	  sign = -1;
	  i++;
	 }else if(str[i]=='+'){
	  i++;
	 }
	 
	 while(str[i]!='\0' && str[i]>='0' && str[i]<='9'){
	  resultado = resultado * 10;
	  resultado = resultado + str[i] - '0';
	  i++;
	 }

	 return resultado * signo;

}
