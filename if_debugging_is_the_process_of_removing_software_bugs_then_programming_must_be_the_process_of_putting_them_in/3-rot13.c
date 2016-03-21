char *rot13(char *encode)
{
  int i; 
  for (i = 0; encode[i] != '\0'; i++)
    {
      /*goes through A - M*/
      if(encode[i] >= 65 && encode[i] <= 77){
	encode[i] = encode[i] + 13; 
      }
      /* N - Z*/
      else if(encode[i] > 77 && encode[i] <= 90)
	{
	  encode[i] = encode[i] - 13;
	}
      /*a - m*/
      else if(encode[i] >= 97 && encode[i] <= 109)
	{
	  
	  encode[i] = encode[i] + 13; 
	}
      /*n - z*/
      else if(encode[i] > 109 && encode[i] <= 122)
	{
	   
	  encode[i] = encode[i] - 13;
	}

    }
  return encode; 
}
