char *rot13(char *rot)
{
  int i;
  for (i = 0; rot[i] != '\0'; i++)
    {
      /*A-M*/
      if(rot[i] >= 65 && rot[i] <= 77){
        rot[i] = rot[i] + 13;
      }
	/*N-Z*/
      else if(rot[i] >= 78 && rot[i] <= 90){
	  rot[i] = rot[i] - 13;
	}
	  /*a-m*/
      else if(rot[i] >= 97 && rot[i] <= 109){
	    rot[i] = rot[i] + 13;
	  }  
	    /*n-z*/
      else if(rot[i] >= 110 && rot[i] <= 122){
	      rot[i] = rot[i] - 13;
	    }
    }
  return rot;
}
