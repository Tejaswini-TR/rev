#include<stdio.h>
int main()
{
      FILE *fp, *fm;
      char ch;
      int i,pos;
      fp=fopen("input.txt","r");
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      //printf("Current postion is %d\n",pos);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
            fm=fopen("output.txt", "a");
            printf(fm,"%c", ch);
            
            fclose(fm);
            return 0;
      }
void fh()
{
  FILE *fp;
  fp=fopen("input.txt","w");
  
  fprint(fp, "%s", " hello");
  
  fclose(fp);
}
      return 0;
}
