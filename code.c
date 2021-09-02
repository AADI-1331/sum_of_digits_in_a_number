int n,sum;
scanf("%d", &n);
do {
    sum += (n%10);
    n/=10;
}while (n!=0);  
printf("%d",sum);
return 0;
