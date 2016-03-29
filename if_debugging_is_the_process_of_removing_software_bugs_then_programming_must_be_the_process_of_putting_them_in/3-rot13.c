char *rot13(char *str)
{
  int i; 
  /*loop goes through string to encode in rot 13*/
  for (i = 0; *(str+i) != '\0'; i++)
    {
      if (*(str + i) >='A' && *(str+i) <= 'M')
	{
	  *(str+i) = *(str+i) + 13;
	}
      else if (*(str+ i) >= 'N' && *(str+i) <= 'Z')
	  {
	    *(str+i) = *(str+i) - 13;
	  } 
      else if (*(str+i) >= 'a' && *(str+i) <= 'm') 
	{
	  *(str+i) = *(str+i) + 13;
        }
      else if (*(str+i) >= 'n' && *(str+i) <= 'z')      
	{
	*(str+i) = *(str+i) - 13;
	}
    }
   return (str);
}
