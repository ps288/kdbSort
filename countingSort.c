#define KXVER 3
#include"k.h"

K icount(K x, K y)
{
  J n=x->n;
  J m=y->j;
  K res = ktn(KJ,n);
  K c   = ktn(KJ,m);

  DO(m,kJ(c)[i]=0);
  DO(n,kJ(c)[kJ(x)[i]]+=1);

  I p,k,l=0;
  for(p=0;p<m;p++) {
    k=kJ(c)[p];
        DO(k,kJ(res)[l]=p;l++);
  }

  res->u=1;
  return res;

}
