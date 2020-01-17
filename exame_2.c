#include <stdio.h>
#include <stdbool.h>

int primo(int n){
  if(n < 2) return false;

  for(int i = 2; i*i <= n; i++){
    if(n%i==0)
      return false;
  }
  return true;
}

int prox_primo(int n){
  if(n == 2)
    n = 3;
  else if(primo(n))
    n = prox_primo(n+1);
  else{
    while(!primo(n)){
      n++;
    }
  }
  return n;
}

int main(int argc, char const *argv[]) {
  printf("%d\n", prox_primo(11));
}
