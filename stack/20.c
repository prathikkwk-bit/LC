bool isValid(char* s) {
    char ch,c;
    int i=0,j=0,n=0,top=-1;
    
    while((c=s[j++])!='\0') n++;
    if(n==0)return -1;
    char stack[n];
    while((ch=s[i++])!='\0')
    {   
        if((ch==')' || ch==']' || ch=='}') && top==-1) return 0;
        
        if(ch=='(' || ch=='[' || ch=='{')
        {
            stack[++top]=ch;
        }
        else
        {   char pop=stack[top];
     
            if(ch==')' && pop!='(') return 0;   
            if(ch==']' && pop!='[') return 0;
            if(ch=='}' && pop!='{') return 0;
            
            else
            { top--;
                continue;}           
            
        }
    }
    if(top!=-1) return 0;
    return 1;
}
