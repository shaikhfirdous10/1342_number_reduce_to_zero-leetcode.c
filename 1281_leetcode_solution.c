int subtractProductAndSum(int n) {
    int sum=0;
    int product=1;
    int digit;
int total;
for(;n>0;n=n/10){
    digit=n%10;

    sum=sum+digit;

    product=product*digit;
    
    total=product-sum;
}
return total;
}
