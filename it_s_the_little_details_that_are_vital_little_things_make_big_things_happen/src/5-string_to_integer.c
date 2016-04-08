int maxmin (int x,char*s);
int string_to_integer(char *s){
  int n,checkneg;
  checkneg=0;
  n = 0;
  for (; *s; s++) { /*get first digit*/
    if(*s=='-'){
      if (checkneg==0)
	checkneg=1;
      else
	checkneg=0;
    }
    if (*s>= '0' && *s<='9'){
      /*get next digits*/
      for (;*s>='0' && *s<='9';s++){
	if(maxmin(n,s)){
	  n=0;
	  break; /*stop the function*/
	}
	if (checkneg==1)
	  n=(n*10)-(*s-'0');
	else
	  n=(n*10)+(*s-'0');
      }
      break;
    }
  }
  return n;
}
/*function to return 0 if exceeds max and min values*/
int maxmin(int x,char *s){
  if (x>=214748360){
    if ((*(s+1)>='0' && *(s+1)<='9') || *s>'7')
      return 1;
  }
  if (x<=-214748360){
    if ((*(s+1)>='0' && *(s+1)<='9') || *s>'8')
      return 1;
  }
  return 0;
}
