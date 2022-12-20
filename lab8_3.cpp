//ไม่ต้องเติม function main()

char before(char x){

if(x == 'A')
{
return 'Z';
}
if(x == '0')
{
return '0';
}
if(x == toupper(x)){
char ans = x-1;
return ans;
}

else{
return '0';}

}