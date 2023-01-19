#include <stdio.h>
#include <string.h>

struct nod {char mat[20],prof[20],nume[20];struct nod* adr;}*p,*u;

void swap(char *xp, char *yp)
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
   char x[20],y[20],z[20];
   struct nod *c;
   scanf("%s", &x);
   while(strcmp(x,"END"))
   {scanf("%s", &y);
    scanf("%s", &z);
    if(p==0) {
              strcpy(p->mat,x);
              strcpy(p->prof,y);
              strcpy(p->nume,z);
              p->adr=NULL;
              u=p;}
    else {
              strcpy(c->mat,x);
              strcpy(c->prof,y);
              strcpy(c->nume,z);
              c->adr=NULL;
              u->adr=c;
              u=c;
          }
    scanf("%s", &x);
   }
   for(struct nod *c=p;c->adr!=0;c=c->adr)
      for(struct nod*d=c->adr;d!=0;d=d->adr)
        if(strcmp(c->mat,d->mat)>0)
        {swap(c->mat,d->mat);
         swap(c->prof,d->prof);
         swap(c->nume,d->nume);}
         else if(strcmp(c->mat,d->mat)==0)
              if(strcmp(c->prof,d->prof)>0)
              {swap(c->mat,d->mat);
               swap(c->prof,d->prof);
               swap(c->nume,d->nume);}
         else if(strcmp(c->prof,d->prof)==0)
               if(strcmp(c->nume,d->nume)>0)
                {swap(c->mat,d->mat);
                 swap(c->prof,d->prof);
                  swap(c->nume,d->nume);}
   struct nod*d=p;
   printf("Materie: %s; Profesor: %s; Nume: %s", d->mat, d->prof, d->nume);
   for(struct nod*c=p->adr;c!=0;c=c->adr)
    { if(strcmp(d->mat,c->mat) || strcmp(d->prof,c->prof) || strcmp(d->nume,c->nume))
      printf("Materie: %s; Profesor: %s; Nume: %s", c->mat, c->prof, c->nume);
      d=c;
    }

   return 0;
}
