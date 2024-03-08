bool isPalindrome(int x)
{
            if(x<0 || x!=0 && x%10 ==0 ) return false;

    long int sum=0,rem,temp;
    temp=x;
    while(x>0)
    {
        sum=(sum*10)+x%10;;
        x=x/10;
    }
    //printf("%d",sum);
 return (temp==sum) ;
}
