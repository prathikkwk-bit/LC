int minOperations(char* s) {
    int n=strlen(s),i,count1=0,count2=0,count1_1=0,count2_2=0,min;
    int ch=s[0]-'0';
    for(i=0;i<n;i++)
    {   int a=i%2 ;  
        if(ch==1)
        {
           if(a==0 && s[i]!='1')
           {
                count1++;
                
                continue;
           } 
           else if (a==1 && s[i]!='0')
           {
                count1++;
                
                continue;
           }
           continue;
        }
        else 
        {
           if(a==0 && s[i]!='0')
           {
                count2++;
               
                continue;
           } 
           else if (a==1 && s[i]!='1')
           {
                count2++;
               
                continue;
           }
        }

    }
     if(ch==1)
        {   ch=0;
            ;
        }
    else {
        ch=1;
        }
    for(i=0;i<n;i++)
    {
        int a=i%2 ;  
        if(ch==1)
        {
           if(a==0 && s[i]!='1')
           {
                count1_1++;
                
                continue;
           } 
           else if (a==1 && s[i]!='0')
           {
                count1_1++;
               
                continue;
           }
           continue;
        }
        else 
        {
           if(a==0 && s[i]!='0')
           {
                count2_2++;
                
                continue;
           } 
           else if (a==1 && s[i]!='1')
           {
                count2_2++;
               
                continue;
           }
        }

        
    }
int a = count1 + count2;     
int b = count1_1 + count2_2;    
return (a < b) ? a : b;
}

