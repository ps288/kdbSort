#define KXVER 3
#include"k.h"

K isort(K x)
{
  int j,i;
  J key;
  J n=x->n;
  K res = ktn(KJ,n);

  for(i=1;i<n;i++) {
    key = kJ(x)[i];
        j=i-1;
        while((j>=0) && (key<kJ(x)[j])) {
          kJ(x)[j+1]=kJ(x)[j];
          j=j-1;
        }
        kJ(x)[j+1]=key;

  }

  for(i=0;i<n;i++) {
    kJ(res)[i]=kJ(x)[i];
  }

  res->u=1;
  return res;
}
