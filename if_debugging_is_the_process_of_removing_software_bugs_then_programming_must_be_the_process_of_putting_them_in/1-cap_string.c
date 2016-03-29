char *cap_string(char *capital)
{
  int i; 

  for (i = 0; capital[i]; i++)
    {
     if(capital[0] > 90)	{
	  capital[0] = capital[0] - 32; 
	}
      if(capital[i] == ' ' && capital[i+1] >= 97 && capital[i+1] <= 122){
	capital[i+1] = capital[i+1] - 32;  
	}
      if(capital[i] == '\t' && capital[i+1] >= 97 && capital[i+1] <= 122){
	capital[i+1] = capital[i+1] - 32;  
	}
      if(capital[i] == '\n' && capital[i+1] >= 97 && capital[i+1] <= 122){
	capital[i+1] = capital[i+1] - 32;  
	}
    }
  return capital; 
}
