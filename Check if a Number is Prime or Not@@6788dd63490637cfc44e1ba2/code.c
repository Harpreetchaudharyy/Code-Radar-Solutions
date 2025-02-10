# include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int flag = 0;

  for (int i = 2; i <= n; i++ ){ 
    if ( n % i == 0) {
        printf("Not Prime");
        flag +=1;
    }

   }
  if (flag > 0) {
    printf("Prime");
  }
return 0;
}
