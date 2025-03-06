#include <stdio.h>

int main() {

  char c='a';
  int i=5;
  long long ll=100;
  float flt=2.4000;
  double dbl=5.2000;
  
 char *p_c=&c;
   int *p_i=&i;
   long long *p_ll=&ll;
   float *p_flt=&flt;
  double *p_dbl=&dbl;
   
   printf("Name Type     Size  VarAdd         VarValue       PtrName     PtrValue        PtrDeref\n");
   printf("---- ----     ----  ------         ------         -------     --------        -------\n");
   printf(" c   char     %zu   %p        %c       p_c     %p        %c\n",sizeof(c),p_c,c,p_c,c);
   printf(" i   int      %zu   %p        %d       p_i     %p        %d\n",sizeof(i),p_i,i,p_i,i);
   printf("ll   longlong %zu   %p        %lld     p_ll    %p        %lld\n",sizeof(ll),p_ll,ll,p_ll,ll);
   printf("flt  float    %zu   %p        %0.4f    p_flt   %p        %0.4f\n",sizeof(flt),p_flt,flt,p_flt,flt);
   printf("d    double   %zu   %p        %0.4lf   p_dbl   %p        %0.4lf\n",sizeof(dbl),p_dbl,dbl,p_dbl,dbl);

    return 0;
}