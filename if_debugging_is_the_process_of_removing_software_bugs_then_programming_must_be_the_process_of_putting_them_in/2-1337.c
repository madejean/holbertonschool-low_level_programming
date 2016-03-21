char *leet(char *array)
{
  int i; 

  for(i = 0; array[i]; i++)
    {
      switch(array[i])
	{
	case 'A':case 'a':
	  array[i] = '4'; 
	  break; 

	case 'E':case 'e':
	  array[i] = '3'; 
	  break;

	case 'O':case 'o':
	  array[i] = '0'; 
	  break;

	case 'T':case 't':
	  array[i] = '7'; 
	  break;

	case 'L':case 'l':
	  array[i] = '1'; 
	  break;
	  
	default:
	  break; 
	}
    }
  return array; 
}
